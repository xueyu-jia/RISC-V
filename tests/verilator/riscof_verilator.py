import os
import re
import shutil
import subprocess
import shlex
import logging
import random
import string
from string import Template
import sys

import riscof.utils as utils
import riscof.constants as constants
from riscof.pluginTemplate import pluginTemplate

logger = logging.getLogger()

class verilator(pluginTemplate):
    __model__ = "verilator"

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        config = kwargs.get('config')

        # If the config node for this DUT is missing or empty. Raise an error. At minimum we need
        # the paths to the ispec and pspec files
        if config is None:
            print("Please enter input file paths in configuration.")
            raise SystemExit(1)
        #verilator路径
        self.dut_exe = os.path.join(config['PATH'] if 'PATH' in config else "","verilator")
        #待verilator编译的verilog模型源码路径
        self.module_src = config['MODULE_SRC'] if 'MODULE_SRC' in config else "../../src/*.v ../../src/*/*.v"
        #verilator编译时需要查找的头文件路径
        self.module_inc = config['MODULE_INC'] if 'MODULE_INC' in config else "-I../../src -I../../src/Mem -I../../src/Device -I../../src/Rv32"
        #仿真激励文件路径
        self.stimuli_src = config['STIMULI_SRC'] if 'STIMULI_SRC' in config else "../verilator_main.cc"
        #顶层模块名
        self.top_module = config['TOP_MODULE'] if 'TOP_MODULE' in config else "Soc"
        #用于make的并行线程数
        self.num_jobs = str(config['jobs'] if 'jobs' in config else 1)
        #DUT插件路径
        self.pluginpath=os.path.abspath(config['pluginpath'])

        # Collect the paths to the  riscv-config absed ISA and platform yaml files. One can choose
        # to hardcode these here itself instead of picking it from the config.ini file.
        self.isa_spec = os.path.abspath(config['ispec'])
        self.platform_spec = os.path.abspath(config['pspec'])

        #是否需要运行测试还是只进行编译
        if 'target_run' in config and config['target_run']=='0':
            self.target_run = False
        else:
            self.target_run = True

    def initialise(self, suite, work_dir, archtest_env):

       # capture the working directory. Any artifacts that the DUT creates should be placed in this
       # directory. Other artifacts from the framework and the Reference plugin will also be placed
       # here itself.
       self.work_dir = work_dir

       # capture the architectural test-suite directory.
       self.suite_dir = suite

       # Note the march is not hardwired here, because it will change for each
       # test. Similarly the output elf name and compile macros will be assigned later in the
       # runTests function
       self.compile_cmd = 'riscv{1}-unknown-elf-gcc -march={0} \
         -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g\
         -T '+self.pluginpath+'/env/link.ld\
         -I '+self.pluginpath+'/env/\
         -I ' + archtest_env + ' {2} -o {3} {4}'
       

       #verilator存放构建的目录路径
       self.build_dir = self.work_dir+'/build'
       
    def build(self, isa_yaml, platform_yaml):

      # load the isa yaml as a dictionary in python.
      ispec = utils.load_yaml(isa_yaml)['hart0']

      # capture the XLEN value by picking the max value in 'supported_xlen' field of isa yaml. This
      # will be useful in setting integer value in the compiler string (if not already hardcoded);
      self.xlen = ('64' if 64 in ispec['supported_xlen'] else '32')

      # for verilator start building the '--isa' argument. the self.isa is dutnmae specific and may not be
      # useful for all DUTs
      self.isa = 'rv' + self.xlen
      if "I" in ispec["ISA"]:
          self.isa += 'i'
      if "M" in ispec["ISA"]:
          self.isa += 'm'
      if "F" in ispec["ISA"]:
          self.isa += 'f'
      if "D" in ispec["ISA"]:
          self.isa += 'd'
      if "C" in ispec["ISA"]:
          self.isa += 'c'


      self.compile_cmd = self.compile_cmd+' -mabi='+('lp64 ' if 64 in ispec['supported_xlen'] else 'ilp32 ')

    def runTests(self, testList):

      # Delete Makefile if it already exists.
      if os.path.exists(self.work_dir+ "/Makefile." + self.name[:-1]):
            os.remove(self.work_dir+ "/Makefile." + self.name[:-1])
      # create an instance the makeUtil class that we will use to create targets.
      make = utils.makeUtil(makefilePath=os.path.join(self.work_dir, "Makefile." + self.name[:-1]))

      # set the make command that will be used. The num_jobs parameter was set in the __init__
      # function earlier
      make.makeCommand = 'make -k -j' + self.num_jobs

      #Compile verilator
      verilator_cmd = self.dut_exe+' '+"--cc {0} {1} {2} --exe -top-module {3} --trace --build -Mdir {4} -DTEST".format(
            self.module_src,self.stimuli_src,self.module_inc,self.top_module,self.build_dir
      )
      make.add_target(verilator_cmd)
      
      # we will iterate over each entry in the testList. Each entry node will be refered to by the
      # variable testname.
      for testname in testList:

          # for each testname we get all its fields (as described by the testList format)
          testentry = testList[testname]

          # we capture the path to the assembly file of this test
          test = testentry['test_path']

          # capture the directory where the artifacts of this test will be dumped/created. RISCOF is
          # going to look into this directory for the signature files
          test_dir = testentry['work_dir']

          # name of the elf file after compilation of the test
          elf = 'my.elf'

          # name of the signature file as per requirement of RISCOF. RISCOF expects the signature to
          # be named as DUT-<dut-name>.signature. The below variable creates an absolute path of
          # signature file.
          sig_file = os.path.join(test_dir, self.name[:-1] + ".signature")

          # for each test there are specific compile macros that need to be enabled. The macros in
          # the testList node only contain the macros/values. For the gcc toolchain we need to
          # prefix with "-D". The following does precisely that.
          compile_macros= ' -D' + " -D".join(testentry['macros'])

          # substitute all variables in the compile command that we created in the initialize
          # function
          cmd = self.compile_cmd.format(testentry['isa'].lower(), self.xlen, test, elf, compile_macros)
          execute = '@cd {0}; {1};'.format(testentry['work_dir'], cmd)

	  # if the user wants to disable running the tests and only compile the tests, then
	  # the "else" clause is executed below assigning the sim command to simple no action
	  # echo statement.
          if self.target_run:

            deal_sym_run ='python3' +' '+ self.pluginpath + '/symparse_run.py'
            execute += '{0} --dut_exe={1}/V{2} --elf={3} --signature={4} --xlen={5};'.format(deal_sym_run,self.build_dir,self.top_module,elf,sig_file,self.xlen)
          else:
            execute += 'echo "NO RUN"'

          # create a target. The makeutil will create a target with the name "TARGET<num>" where num
          # starts from 0 and increments automatically for each new target that is added
          make.add_target(execute)
          
      # if you would like to exit the framework once the makefile generation is complete uncomment the
      # following line. Note this will prevent any signature checking or report generation.
      #raise SystemExit

      # once the make-targets are done and the makefile has been created, run all the targets in
      # parallel using the make command set above.
      make.execute_all(self.work_dir)

      # if target runs are not required then we simply exit as this point after running all
      # the makefile targets.
      if not self.target_run:
          raise SystemExit(0)

