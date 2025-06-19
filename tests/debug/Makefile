SRC = ../../src/*/*.v  ../../src/*.v
SIM = ../verilator_main.cc
INCLUDE = -I../../src -I../../src/Mem -I../../src/Device -I../../src/Rv32

all: compile generate run
compile:
	riscv32-unknown-elf-gcc -march=rv32i -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T link.ld test.S -o test.elf

generate: 
	rm -rf obj_dir/
	verilator --cc  ${SRC}  ${SIM} ${INCLUDE} --exe -top-module Soc --trace --build -DTEST

run:	
	python symparse_run.py --dut_exe=./obj_dir/VSoc --elf=test.elf --signature=test.signature --xlen=32 --vcd=./test.vcd
	
debug:
	gtkwave test.vcd -S gtkconfig.gtkw

objdump:
	riscv32-unknown-elf-objdump -D test.elf

COPYTEST_NAME = 
copytest:
	cp ../riscof_work/rv32i_m/I/src/${COPYTEST_NAME}-01.S/dut/my.elf test.elf
test: generate copytest run debug
.PHONY:all compile generate run debug objdump copytest test
