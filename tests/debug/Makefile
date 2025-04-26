all: compile generate run
compile:
	riscv32-unknown-elf-gcc -march=rv32i -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T link.ld test.S -o test.elf
generate: 
	rm -rf obj_dir/
	verilator --cc ../../src/*.v ../verilator_main.cc -I../../src --exe -top-module Soc --trace --build
run:	
	python symparse_run.py --dut_exe=./obj_dir/VSoc --elf=test.elf --signature=test.signature --xlen=32 --vcd=./test.vcd
debug:
	gtkwave test.vcd
objdump:
	riscv32-unknown-elf-objdump -D test.elf
