compile:
	riscv32-unknown-elf-gcc -march=rv32i -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T ./link.ld ./add.S -o add.elf
	riscv32-unknown-elf-objcopy ./add.elf -O binary add.bin
generate: 
	rm -rf obj_dir/
	verilator --cc ../../src/*.v ../verilator_main.cc -I../../src --exe -top-module Soc --trace --build
run:	
	./obj_dir/VSoc +loadbin=./add.bin +vcd=add.vcd
debug:
	gtkwave ./add.vcd
