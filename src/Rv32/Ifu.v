`include "Rv32_Macro.v"
`include "Macro.v"

//取指模块
module Ifu(
    //时钟信号
    input wire clk, 
    input wire rst,
    input wire in_Jmp_en,
    input wire[31:0] in_Jmp_addr,

    //从存储器中读入指令
    input wire[31:0] in_ins,
    input wire[31:0] ne_in_ins,
    //保存当前PC的值
    output reg[31:0] out_pc,
    output wire[31:0] ne_out_pc,
    //保存当前指令
    output wire[31:0] out_ins
);
    assign out_ins=in_ins;
    
    reg[31:0] n_pc;//保存下一次的取指位置
    
    assign ne_out_pc=in_Jmp_en?in_Jmp_addr:n_pc;
    wire ne_is_c=(ne_in_ins[1:0]!=2'b11);

    //上升沿触发
    always@(posedge clk or negedge rst)
        begin
            if(rst==`RST)   
                begin
                    out_pc<=`RST_PC;
                    n_pc<=`RST_PC;
                end
            else if(in_Jmp_en)
                begin
                    out_pc<=in_Jmp_addr;
                    n_pc<=in_Jmp_addr+((32'h2&{32{ne_is_c}}) |  (32'h4&{32{~ne_is_c}}));
                end
            else
                begin
                    out_pc<=n_pc;
                    n_pc<=n_pc+((32'h2&{32{ne_is_c}}) |  (32'h4&{32{~ne_is_c}}));
                end
        end
    
endmodule 
