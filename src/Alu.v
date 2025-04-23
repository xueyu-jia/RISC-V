`include"Macro.v"
//运算模块，完成逻辑运算、算术运算、移位运算或者计算内存地址
module Alu(
    //用于从译码模块接收
    input wire[`ALU_OP_NUM-1:0] in_op,

    input wire[4:0] in_rd_id,
    input wire in_rd_we,

    input wire[3:0] in_mem_we,
    input wire[4:0] in_mem_re,

    //用于从Decoder模块中接收
    input wire[31:0] in_src1,
    input wire[31:0] in_src2,
    input wire[31:0] in_imm,

    //输出至memu模块，用于控制将结果写入regfile模块
    output wire[4:0]  out_rd_id,
    output wire out_rd_we,

    //计算的结果输出到寄存器中或者内存中
    output wire[31:0]  out_data,

    //输出至memu模块，用于load or store指令
    output wire[31:0] out_mem_addr,
    output wire[3:0] out_mem_we,
    output wire[4:0] out_mem_re   
);
    assign out_rd_id=in_rd_id;
    assign out_rd_we=in_rd_we;

    wire[31:0] alu_src=in_src2|in_imm;
    wire[31:0] alu_src_2=in_src2;
    
    assign out_data=({32{in_op[`ADD_OP]}}&(in_src1+alu_src))|
                    ({32{in_op[`SUB_OP]}}&(in_src1-alu_src))|
                    ({32{in_op[`SL_OP]}}&(in_src1<<(alu_src[4:0])))|
                    ({32{in_op[`SR_OP]}}&(in_src1>>(alu_src[4:0])))|
                    ({32{in_op[`SA_OP]}}&(in_src1>>>(alu_src[4:0])))|
                    ({32{in_op[`AND_OP]}}&(in_src1&alu_src))|
                    ({32{in_op[`OR_OP]}}&(in_src1|alu_src))|
                    ({32{in_op[`XOR_OP]}}&(in_src1^alu_src))|
                    ({32{in_op[`SLT_OP]}}&{32{$signed(in_src1)<$signed(alu_src)}})|
                    ({32{in_op[`SLTU_OP]}}&{32{in_src1<alu_src}})|
                    ({32{in_mem_we!==0}}&alu_src_2);
    
    assign out_mem_addr=in_src1+in_imm;
    assign out_mem_we=in_mem_we;
    assign out_mem_re=in_mem_re;

endmodule 