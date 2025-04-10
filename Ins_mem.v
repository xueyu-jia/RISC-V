`include"Macro.v"

//指令存储器
module Ins_mem(
    input wire clk,
    input wire rst,
    //输入PC指针
    input wire in_pc,
    //输出当前pc指向的指令码
    output reg[31:0] out_ins
);
    parameter MEM_SIZE = 1024;
    reg[31:0] ins_mem[0:MEM_SIZE-1];

    assign out_ins = ins_mem[in_pc];

endmodule