`include "Rv32_Macro.v"

//访存模块，执行load或者store指令
module Mem(
    //load or store的内存地址
    input wire[31:0] in_addr,
    //load指令从内存中读取的数据
    input wire[31:0] in_mem_data,

    //load目标寄存器编号或者写回的目标寄存器编号
    input wire[4:0] in_rd_id,
    //是否要向寄存器中写入数据
    input wire in_rd_we,
    //从ALU中得到的计算结果
    input wire[31:0] in_alu_data,

    output wire[31:0] out_addr,
    //load or store的控制信号
    input wire[3:0] in_mem_we,
    input wire[4:0] in_mem_re,
    //store指令写入内存的数据
    output wire[31:0] out_mem_data,

    output wire[3:0] out_mem_we,

    //load或者运算得出的结果到寄存器的数据
    output wire[4:0] out_rd_id,
    output wire out_rd_we,
    output wire[31:0] out_rd_data
);
    assign out_addr=in_addr;

    assign out_mem_we=in_mem_we;
    assign out_mem_data=in_alu_data;

    assign out_rd_id=in_rd_id;
    assign out_rd_we=in_rd_we;
    assign out_rd_data=({32{in_mem_re[`LB_BIT]}}&{{24{in_mem_data[7]}},in_mem_data[7:0]})|
                        ({32{in_mem_re[`LH_BIT]}}&{{16{in_mem_data[15]}},in_mem_data[15:0]})|
                        ({32{in_mem_re[`LW_BIT]}}&in_mem_data)|
                        ({32{in_mem_re[`LBU_BIT]}}&{{24{1'b0}},in_mem_data[7:0]})|
                        ({32{in_mem_re[`LHU_BIT]}}&{{16{1'b0}},in_mem_data[15:0]})|
                        ({32{in_mem_re==0}}&in_alu_data);

endmodule