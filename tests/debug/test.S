#-------------------------------------------------------------------------------
# File: test_jal_linked.S
# Description: Simple RV32I assembly to test JAL and JALR instructions, adapted for specific linker script.
# Signals success (write 1 to tohost) or failure (write negative value to tohost).
# Uses rvtest_entry_point as entry and defines .tohost section.
#-------------------------------------------------------------------------------

    .text                      # 代码段
    .globl rvtest_entry_point  # 定义入口点为 rvtest_entry_point
    .option nopic              # 禁用 PIC，适合裸机环境

rvtest_entry_point:          # 程序从这里开始执行
    # 初始化一个结果寄存器 (a0)，非零表示失败，最后改为 1 表示成功
    li a0, -1                  # 初始设置为 -1, 表示测试未开始或失败

#-------------------------------------------------------------------------------
# Test JAL and JALR Instructions
#-------------------------------------------------------------------------------
test_jal:
    li a0, -200                # 在测试前设置一个特定的失败码，如果这个值没变说明测试未执行到关键部分

# 定义 JAL 调用点，这个标签的下一条指令地址应该被存入 ra (x1)
jal_call_site:
    # 执行 Jump and Link 指令
    # JAL ra, jal_target 会将下一条指令的地址存入 ra (x1)，然后跳转到 jal_target 标签处
    jal ra, jal_target

# 从 jal_target 子程序返回后，程序应该继续从这里执行
after_jal:
    # 检查子程序是否被正确执行（通过检查 a0 是否被修改）
    # 如果 JAL/JALR 工作正常，jal_target 会将 a0 设置为 100
    li t0, 100                 # 期望 a0 的值
    beq a0, t0, jal_test_passed # 如果 a0 == 100，说明 JAL 和 JALR 工作正常，跳转到成功处理

    # 如果 a0 不是 100，说明 JAL 没有跳到 jal_target，或者 JALR 没有正确返回
    li a0, -201                # 设置错误码：子程序未正确执行或未正确返回
    j exit_test                # 跳转到退出

jal_test_passed:
    # 如果程序执行到这里，并且 a0 是 100，则 JAL 和 JALR 测试成功
    li a0, 1                   # 设置最终成功状态码为 1 (tohost 约定成功码)
    j exit_test                # 跳转到退出

#-------------------------------------------------------------------------------
# JAL Target Subroutine
#-------------------------------------------------------------------------------
# 这是 JAL 指令跳转的目标标签 (子程序的入口)
jal_target:
    # 执行到这里，说明 JAL 指令成功跳转了
    # 理论上，ra (x1) 寄存器中现在保存的是 jal_call_site 标签后第一条指令 (after_jal) 的地址
    # 为了简单测试，我们只修改 a0 寄存器来证明我们进入了子程序
    li a0, 100                 # 设置 a0 为一个特定值，表示子程序被执行

    # 使用 JALR 指令返回调用点
    # JALR rd, rs1, offset
    # 我们希望返回到 ra 中保存的地址，所以 rs1 是 ra (x1)
    # offset 是 0
    # rd 设置为 x0 表示不将当前 PC (即 jal_target 的地址) 存入任何寄存器
    jalr x0, ra, 0             # 返回到 ra (x1) 中保存的地址 (即 after_jal)

#-------------------------------------------------------------------------------
# Test Completion / Exit
#-------------------------------------------------------------------------------
exit_test:
    # 使用 tohost 约定退出
    # a0 寄存器中现在存放的是退出状态码 (1 表示成功，负数表示失败)
    la t0, tohost              # 将 tohost 符号的地址加载到 t0 寄存器 (使用伪指令 la)
    sw a0, 0(t0)               # 将 a0 中的状态码写入 tohost 地址 (使用 sw，因为 tohost 是 word)

    # 进入一个无限循环，以停止执行，防止 PC 前进到未定义内存
hang:
    j hang                     # 跳转到 hang 标签自身，形成循环

#-------------------------------------------------------------------------------
# tohost Section (as defined in the linker script)
#-------------------------------------------------------------------------------
    # 使用 .section 指令明确指定段，并按照链接脚本的属性定义
    .section .tohost, "aw", @progbits
    .align 3                   # 8字节对齐，通常 tohost 要求对齐 (2^3 = 8)
    .globl tohost
tohost:
    .word 0                    # 定义 tohost 符号，并初始化为 0 (32位字)
    .word 0                    # 有些 tohost 接口是 64位的，这里定义两个字以兼容

#-------------------------------------------------------------------------------
# 其他数据段 (可选，本程序未使用)
#-------------------------------------------------------------------------------
    # .data
    # ...

    # .bss
    # ...