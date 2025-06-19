.section .text.init
.globl _start           # 声明 _start 标签为全局可见，作为程序的入口点

_start:
    la sp,_stack_top
    j  main
    j  .