all:
	riscv32-unknown-elf-gcc -march=rv32i -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g -T link.ld led.S -o led.elf
	riscv32-unknown-elf-objcopy -O verilog \
	--only-section .text.init --only-section .text \
    led.elf led.code.hex
	riscv32-unknown-elf-objcopy -O verilog \
    --only-section .tohost --only-section .data --only-section .data.string \
	led.elf led.data.hex
	./remap_hex_addresses.sh led.code.hex af_led.code.hex 80000000
	./remap_hex_addresses.sh led.data.hex af_led.data.hex 80400000