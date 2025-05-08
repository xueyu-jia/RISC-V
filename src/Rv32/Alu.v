`include"Rv32_Macro.v"

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
    
    wire is_add=in_op[`ADD_OP];
    wire is_sub=in_op[`SUB_OP];
    wire is_sl=in_op[`SL_OP];
    wire is_srl=in_op[`SRL_OP];
    wire is_sra=in_op[`SRA_OP];
    wire is_and=in_op[`AND_OP];
    wire is_or=in_op[`OR_OP];
    wire is_xor=in_op[`XOR_OP];
    wire is_slt=in_op[`SLT_OP];
    wire is_sltu=in_op[`SLTU_OP];
    wire is_j=in_op[`J_OP];
    wire is_memw=(in_mem_we!=0);
    
    wire[31:0] add_out=in_src1+alu_src;
    wire[31:0] sub_out=in_src1-alu_src;
    wire[31:0] sl_out=in_src1<<(alu_src[4:0]);
    wire[31:0] srl_out=in_src1>>(alu_src[4:0]);
    wire[31:0] sra_out=in_src1>>(alu_src[4:0]) | (in_src1[31]?(~({32{1'b1}}>>(alu_src[4:0]))):32'b0);
    wire[31:0] and_out=in_src1&alu_src;
    wire[31:0] or_out=in_src1|alu_src;
    wire[31:0] xor_out=in_src1^alu_src;
    wire[31:0] slt_out={31'b0,{($signed(in_src1))<($signed(alu_src))}};
    wire[31:0] sltu_out={31'b0,{in_src1<alu_src}};
    wire[31:0] j_out=alu_src;
    wire[31:0] memw_out=in_src2;

    assign out_data=({32{is_add}}&add_out)|
                    ({32{is_sub}}&sub_out)|
                    ({32{is_sl}}&sl_out)|
                    ({32{is_srl}}&srl_out)|
                    ({32{is_sra}}&sra_out)|
                    ({32{is_and}}&and_out)|
                    ({32{is_or}}&or_out)|
                    ({32{is_xor}}&xor_out)|
                    ({32{is_slt}}&slt_out)|
                    ({32{is_sltu}}&sltu_out)|
                    ({32{is_j}}&j_out)|
                    ({32{is_memw}}&memw_out);
    
    assign out_mem_addr=in_src1+in_imm;
    assign out_mem_we=in_mem_we;
    assign out_mem_re=in_mem_re;

endmodule 