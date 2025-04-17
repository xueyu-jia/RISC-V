#riscv32-unknown-elf-gcc -march=rv32i -static -mcmodel=medany\
#       	-fvisibility=hidden -nostdlib -nostartfiles -g\
#         -T ./link.ld\
#         ./add.S -o add.elf

rm -rf obj_dir/
verilator --cc ../src/*.v verilator_main.cc -I../src --exe \
	-top-module Soc --trace 
make -C ./obj_dir -f VSoc.mk
