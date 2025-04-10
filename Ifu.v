`include"Macro.v"

//取指模块
module Ifu(
    //时钟信号
    input wire clk, 
    input wire rst,
    input wire Jmp_en,
    input wire[31:0] Jmp_addr,

    //从存储器中读入指令
    input wire[31:0] in_ins,
    //保存当前PC的值
    output reg[31:0] out_pc,
    //保存当前指令
    output reg[31:0] out_ins
);
    assign out_ins=in_ins;

    reg[31:0] n_pc;//保存下一次的取指位置

    //上升沿触发
    always@(posedge clk or negedge rst)
        begin
            if(rst==`RST)   
                begin
                    out_pc=`RST_PC
                    n_pc<=`RST_PC;
                end
            else if(Jmp_en)
                begin
                    out_pc<=Jmp_addr;
                    n_pc<=Jmp_addr+32'h4;
                end
            else
                begin 
                    out_pc<=n_pc;
                    n_pc<=out_pc+32'h4;
                end
        end
    
endmodule 