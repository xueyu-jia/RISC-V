OUTPUT_ARCH( "riscv" )
ENTRY(_start)

MEMORY{
  ROM(rx): ORIGIN = 0x80000000, LENGTH = 1K
  RAM(rwx): ORIGIN = 0x80400000, LENGTH = 1K
}

SECTIONS
{
  .text : {
    *(.text.init)
    *(.text)
  } > ROM

  .data : { 
    *(.data*)
    *(.sdata*) 
  } > RAM

  .bss : { 
    *(.bss*)
    *(.sbss*) 
  } > RAM
  
  _stack_top = ORIGIN(RAM)+LENGTH(RAM)-4;
}

