
./build/led.elf:     file format elf32-littleriscv


Disassembly of section .text.init:

80000000 <_start>:
80000000:	1000006f          	j	80000100 <main_blink_loop>

Disassembly of section .text:

80000100 <main_blink_loop>:
80000100:	00100093          	li	ra,1
80000104:	fffff137          	lui	sp,0xfffff
80000108:	10010113          	addi	sp,sp,256 # fffff100 <LED_ADDR>
8000010c:	00112023          	sw	ra,0(sp)

80000110 <loop>:
80000110:	0000006f          	j	80000110 <loop>

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes>:
   0:	1941                	.insn	2, 0x1941
   2:	0000                	.insn	2, 0x0000
   4:	7200                	.insn	2, 0x7200
   6:	7369                	.insn	2, 0x7369
   8:	01007663          	bgeu	zero,a6,14 <DELAY_COUNT-0x4c4b2c>
   c:	0000000f          	fence	unknown,unknown
  10:	7205                	.insn	2, 0x7205
  12:	3376                	.insn	2, 0x3376
  14:	6932                	.insn	2, 0x6932
  16:	7032                	.insn	2, 0x7032
  18:	0031                	.insn	2, 0x0031

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0064                	.insn	2, 0x0064
   2:	0000                	.insn	2, 0x0000
   4:	0005                	.insn	2, 0x0005
   6:	0004                	.insn	2, 0x0004
   8:	002a                	.insn	2, 0x002a
   a:	0000                	.insn	2, 0x0000
   c:	0101                	.insn	2, 0x0101
   e:	fb01                	.insn	2, 0xfb01
  10:	0d0e                	.insn	2, 0x0d0e
  12:	0100                	.insn	2, 0x0100
  14:	0101                	.insn	2, 0x0101
  16:	0001                	.insn	2, 0x0001
  18:	0000                	.insn	2, 0x0000
  1a:	0001                	.insn	2, 0x0001
  1c:	0100                	.insn	2, 0x0100
  1e:	0101                	.insn	2, 0x0101
  20:	011f 0000 0000      	.insn	6, 0x011f
  26:	0102                	.insn	2, 0x0102
  28:	021f 020f 0021      	.insn	6, 0x0021020f021f
  2e:	0000                	.insn	2, 0x0000
  30:	2100                	.insn	2, 0x2100
  32:	0000                	.insn	2, 0x0000
  34:	0000                	.insn	2, 0x0000
  36:	0500                	.insn	2, 0x0500
  38:	0002                	.insn	2, 0x0002
  3a:	0000                	.insn	2, 0x0000
  3c:	0380                	.insn	2, 0x0380
  3e:	0124                	.insn	2, 0x0124
  40:	0409                	.insn	2, 0x0409
  42:	0000                	.insn	2, 0x0000
  44:	0101                	.insn	2, 0x0101
  46:	0500                	.insn	2, 0x0500
  48:	0002                	.insn	2, 0x0002
  4a:	0001                	.insn	2, 0x0001
  4c:	0380                	.insn	2, 0x0380
  4e:	012e                	.insn	2, 0x012e
  50:	04090103          	lb	sp,64(s2)
  54:	0100                	.insn	2, 0x0100
  56:	08090103          	lb	sp,128(s2)
  5a:	0100                	.insn	2, 0x0100
  5c:	04090203          	lb	tp,64(s2)
  60:	0100                	.insn	2, 0x0100
  62:	0409                	.insn	2, 0x0409
  64:	0000                	.insn	2, 0x0000
  66:	0101                	.insn	2, 0x0101

Disassembly of section .debug_line_str:

00000000 <.debug_line_str>:
   0:	6d6f682f          	.insn	4, 0x6d6f682f
   4:	2f65                	.insn	2, 0x2f65
   6:	6f62                	.insn	2, 0x6f62
   8:	2f62                	.insn	2, 0x2f62
   a:	4952                	.insn	2, 0x4952
   c:	565f4353          	.insn	4, 0x565f4353
  10:	5349522f          	.insn	4, 0x5349522f
  14:	2f562d43          	.insn	4, 0x2f562d43
  18:	6966                	.insn	2, 0x6966
  1a:	6d72                	.insn	2, 0x6d72
  1c:	65726177          	.insn	4, 0x65726177
  20:	6c00                	.insn	2, 0x6c00
  22:	6465                	.insn	2, 0x6465
  24:	532e                	.insn	2, 0x532e
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	001f 0000 0005      	.insn	6, 0x00050000001f
   6:	0401                	.insn	2, 0x0401
   8:	0000                	.insn	2, 0x0000
   a:	0000                	.insn	2, 0x0000
   c:	0001                	.insn	2, 0x0001
   e:	0000                	.insn	2, 0x0000
  10:	0c00                	.insn	2, 0x0c00
  12:	0000                	.insn	2, 0x0000
  14:	0000                	.insn	2, 0x0000
  16:	0000                	.insn	2, 0x0000
  18:	0600                	.insn	2, 0x0600
  1a:	0000                	.insn	2, 0x0000
  1c:	2700                	.insn	2, 0x2700
  1e:	0000                	.insn	2, 0x0000
  20:	0100                	.insn	2, 0x0100
  22:	80                	.byte	0x80

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	1101                	.insn	2, 0x1101
   2:	1000                	.insn	2, 0x1000
   4:	03175517          	auipc	a0,0x3175
   8:	1b0e                	.insn	2, 0x1b0e
   a:	250e                	.insn	2, 0x250e
   c:	130e                	.insn	2, 0x130e
   e:	0005                	.insn	2, 0x0005
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0024                	.insn	2, 0x0024
   2:	0000                	.insn	2, 0x0000
   4:	0002                	.insn	2, 0x0002
   6:	0000                	.insn	2, 0x0000
   8:	0000                	.insn	2, 0x0000
   a:	0004                	.insn	2, 0x0004
   c:	0000                	.insn	2, 0x0000
   e:	0000                	.insn	2, 0x0000
  10:	0000                	.insn	2, 0x0000
  12:	8000                	.insn	2, 0x8000
  14:	0004                	.insn	2, 0x0004
  16:	0000                	.insn	2, 0x0000
  18:	0100                	.insn	2, 0x0100
  1a:	8000                	.insn	2, 0x8000
  1c:	0014                	.insn	2, 0x0014
	...

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	656c                	.insn	2, 0x656c
   2:	2e64                	.insn	2, 0x2e64
   4:	682f0053          	.insn	4, 0x682f0053
   8:	2f656d6f          	jal	s10,562fe <DELAY_COUNT-0x46e842>
   c:	6f62                	.insn	2, 0x6f62
   e:	2f62                	.insn	2, 0x2f62
  10:	4952                	.insn	2, 0x4952
  12:	565f4353          	.insn	4, 0x565f4353
  16:	5349522f          	.insn	4, 0x5349522f
  1a:	2f562d43          	.insn	4, 0x2f562d43
  1e:	6966                	.insn	2, 0x6966
  20:	6d72                	.insn	2, 0x6d72
  22:	65726177          	.insn	4, 0x65726177
  26:	4700                	.insn	2, 0x4700
  28:	554e                	.insn	2, 0x554e
  2a:	4120                	.insn	2, 0x4120
  2c:	2e322053          	.insn	4, 0x2e322053
  30:	3434                	.insn	2, 0x3434
	...

Disassembly of section .debug_rnglists:

00000000 <.debug_rnglists>:
   0:	0015                	.insn	2, 0x0015
   2:	0000                	.insn	2, 0x0000
   4:	0005                	.insn	2, 0x0005
   6:	0004                	.insn	2, 0x0004
   8:	0000                	.insn	2, 0x0000
   a:	0000                	.insn	2, 0x0000
   c:	00000007          	.insn	4, 0x0007
  10:	0480                	.insn	2, 0x0480
  12:	00010007          	.insn	4, 0x00010007
  16:	1480                	.insn	2, 0x1480
	...
