`include"Rv32_Macro.v"
//通用寄存器组
module Regfile(
    input wire clk,
    //复位信号
    input wire rst,
    //两个读端口的ID输入
    input wire[4:0] in_Ra_id,
    input wire[4:0] in_Rb_id,
    //两个读的输出端口
    output wire[31:0] out_Ra_data,
    output wire[31:0] out_Rb_data,    

    //写端口ID和写使能信号(低电平使能)
    input wire[4:0] in_W_id,
    input wire in_We,
    input wire[31:0] in_W_data
);
    parameter GENERAL_REG_NUM=32;
    reg[31:0] general_reg[0:GENERAL_REG_NUM-1];
    integer i;

    assign out_Ra_data=general_reg[in_Ra_id];
    assign out_Rb_data=general_reg[in_Rb_id];
    
    //写使能或者rst时触发写入操作
    always@(posedge clk or negedge rst)
        begin
            if(rst==`RST)
                begin
                for(i=0;i<GENERAL_REG_NUM;i=i+1)
                    general_reg[i]<=32'h00000000;
                end
            else
                begin
                    if((in_We==`VALID_RegW) && (in_W_id!=`ZERO_ID))
                        begin
                            general_reg[in_W_id]<=in_W_data;
                        end
                    else 
                        begin
                        end
                end
        end

endmodule
