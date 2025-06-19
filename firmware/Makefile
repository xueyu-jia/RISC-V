OUTPUT_PATH=./build

all:
	riscv32-unknown-elf-gcc -march=rv32i -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T link.ld led.S -o ${OUTPUT_PATH}/led.elf
	
	riscv32-unknown-elf-objcopy -O verilog 	--only-section .text.init --only-section .text \
	${OUTPUT_PATH}/led.elf ${OUTPUT_PATH}/led.code.hex
	riscv32-unknown-elf-objcopy -O verilog --only-section .data ${OUTPUT_PATH}/led.elf ${OUTPUT_PATH}/led.data.hex
	./remap_hex_addresses.sh ${OUTPUT_PATH}/led.code.hex ${OUTPUT_PATH}/af_led.code.hex 80000000
	./remap_hex_addresses.sh ${OUTPUT_PATH}/led.data.hex ${OUTPUT_PATH}/af_led.data.hex 80400000
	
	riscv32-unknown-elf-objcopy -O binary --only-section .text.init --only-section .text \
	${OUTPUT_PATH}/led.elf ${OUTPUT_PATH}/led.code.bin

	riscv32-unknown-elf-objcopy -O binary --only-section .data ${OUTPUT_PATH}/led.elf ${OUTPUT_PATH}/led.data.bin
	python bin2coe.py ${OUTPUT_PATH}/led.code.bin 4
	python bin2coe.py ${OUTPUT_PATH}/led.data.bin 4 

	riscv32-unknown-elf-objdump -D ${OUTPUT_PATH}/led.elf > ${OUTPUT_PATH}/led.asm
objdump:
	cat ${OUTPUT_PATH}/led.asm
