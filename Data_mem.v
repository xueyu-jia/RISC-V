`include "Macro.v"

//数据存储器
module Data_mem(
    input wire clk,
    input wire rst,
    //输入的地址
    input wire[31:0] in_addr,
    //输入的数据
    input wire[31:0] in_data,
    //是否要写入数据
    input wire[2:0] in_we,
    //输出的数据
    output wire[31:0] out_data
);
    parameter MEM_SIZE = 1024;
    reg[31:0] data_mem[MEM_SIZE-1:0];

    assign out_data=data_mem[in_addr];
    
    integer i;

    always@(posedge clk or negedge rst)
        begin
            if(rst==`RST)
                begin
                    for(i=0;i<MEM_SIZE;i=i+1)
                        data_mem[i]<=32'h0;
                end
            else if(in_we[`SB_BIT])
                data_mem[in_addr][7:0]<=in_data[7:0];
            else if(in_we[`SH_BIT])
                data_mem[in_addr][15:0]<=in_data[15:0];
            else if(in_we[`SW_BIT])
                data_mem[in_addr]<=in_data;
            else
                begin
                end
        end

endmodule