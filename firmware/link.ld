OUTPUT_ARCH( "riscv" )
ENTRY(_start)

SECTIONS
{
  . = 0x80000000;
  .text.init : { *(.text.init) }
  . = ALIGN(0x100);
  .text : { *(.text) }
  . = ALIGN(0x100);

  . = 0x80400000;
  .data : { *(.data*) *(.sdata*)}
  .bss : { *(.bss*) *(.sbss*) }
  _stack_top = 0x80400400 - 0x00000004;
}
