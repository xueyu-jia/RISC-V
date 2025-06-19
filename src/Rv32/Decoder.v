`include"Rv32_Macro.v"
//译码模块，对in_ins也就是指令进行分析，
module Decoder(
    //输入PC指针和当前待译码指令
    input wire[31:0] in_pc,
    input wire[31:0] in_ins,
    
    input wire[31:0] in_src1,
    input wire[31:0] in_src2,

    //输出两个源寄存器的ID
    output wire[4:0] out_rs1_id,
    output wire[4:0] out_rs2_id,

    //输出两个源寄存器的数据
    output wire[31:0] out_src1,
    output wire[31:0] out_src2,
    output wire[31:0] out_imm,
    //输出目的寄存器的ID和立即数
    output wire[4:0] out_rd_id,
    output wire out_rd_we,
    
    //将PC传至ALU模块中
    output wire[`ALU_OP_NUM-1:0]  out_alu_op,
    
    output wire[4:0] out_mem_re,
    output wire[3:0] out_mem_we,
    
    //输出是否需要跳转
    output wire out_jump_en,
    output wire[31:0] out_jump_addr
);
    wire[6:0] opcode=in_ins[6:0];
    wire[2:0] fuc3=in_ins[14:12];
    wire[6:0] fuc7=in_ins[31:25];

    wire is_i=opcode==`I;
    wire is_l=opcode==`L;
    wire is_u=(opcode==`LUI||opcode==`AUIPC);
    wire is_b=opcode==`B;
    wire is_s=opcode==`S;
    wire is_r=opcode==`R;


    wire is_addi=((is_i)&&(fuc3==`ADDI));
    wire is_slti=((is_i)&&(fuc3==`SLTI));
    wire is_sltiu=((is_i)&&(fuc3==`SLTIU));
    wire is_xori=((is_i)&&(fuc3==`XORI));
    wire is_ori=((is_i)&&(fuc3==`ORI));
    wire is_andi=((is_i)&&(fuc3==`ANDI));
    wire is_slli=((is_i)&&(fuc3==`SLLI));
    wire is_srli=((is_i)&&(fuc3==`SRLI)&&(!in_ins[30]));
    wire is_srai=((is_i)&&(fuc3==`SRAI)&&(in_ins[30]));

    wire is_add=((is_r)&&(fuc3==`ADD)&&(fuc7==`ADD_FUNCT7));
    wire is_sub=((is_r)&&(fuc3==`SUB)&&(fuc7==`SUB_FUNCT7));
    wire is_sll=((is_r)&&(fuc3==`SLL)&&(fuc7==`SLL_FUNCT7));
    wire is_slt=((is_r)&&(fuc3==`SLT)&&(fuc7==`SLT_FUNCT7));
    wire is_sltu=((is_r)&&(fuc3==`SLTU)&&(fuc7==`SLTU_FUNCT7));
    wire is_xor=((is_r)&&(fuc3==`XOR)&&(fuc7==`XOR_FUNCT7));
    wire is_srl=((is_r)&&(fuc3==`SRL)&&(fuc7==`SRL_FUNCT7));
    wire is_sra=((is_r)&&(fuc3==`SRA)&&(fuc7==`SRA_FUNCT7));
    wire is_or=((is_r)&&(fuc3==`OR)&&(fuc7==`OR_FUNCT7));
    wire is_and=((is_r)&&(fuc3==`AND)&&(fuc7==`AND_FUNCT7));

    wire is_lui=((is_u)&&(opcode==`LUI));
    wire is_auipc=((is_u)&&(opcode==`AUIPC));
    
    wire is_beq=((is_b)&&(fuc3==`BEQ));
    wire is_bne=((is_b)&&(fuc3==`BNE));
    wire is_blt=((is_b)&&(fuc3==`BLT));
    wire is_bge=((is_b)&&(fuc3==`BGE));
    wire is_bltu=((is_b)&&(fuc3==`BLTU));
    wire is_bgeu=((is_b)&&(fuc3==`BGEU));
    
    wire is_lb=((is_l)&&(fuc3==`LB));
    wire is_lh=((is_l)&&(fuc3==`LH));
    wire is_lw=((is_l)&&(fuc3==`LW));
    wire is_lbu=((is_l)&&(fuc3==`LBU));
    wire is_lhu=((is_l)&&(fuc3==`LHU));
    
    wire is_sb=((is_s)&&(fuc3==`SB));
    wire is_sh=((is_s)&&(fuc3==`SH));
    wire is_sw=((is_s)&&(fuc3==`SW));
    
    wire is_jal=(opcode==`JAL);
    wire is_jalr=(opcode==`JALR);
    wire is_j=is_jal||is_jalr;



    assign out_rs1_id=({5{(is_i||is_s||is_b||is_r||is_jalr||is_l)}}&in_ins[19:15])|5'b0;
    assign out_rs2_id=({5{(is_s||is_b||is_r)}}&in_ins[24:20])|5'b0;

    assign out_src1=in_src1;
    assign out_src2=in_src2;


    assign out_imm=({32{is_i||is_l}}&{{21{in_ins[31]}},in_ins[30:20]})|
                   ({32{is_u}}&(({32{is_auipc}}&in_pc)+({in_ins[31],in_ins[30:12],12'b0})))|
                   ({32{is_s}}&{{21{in_ins[31]}},in_ins[30:25],in_ins[11:7]})|
                   ({32{is_j}}&(in_pc+4))|
                   (32'b0);

    //用到加法器的指令将out_alu_op[ADD_OP]置1
    assign out_alu_op[`ADD_OP]=is_addi||is_add||is_lb||is_lh||is_lw||is_lbu||is_lhu||is_lui||is_auipc;
    //用到减法的指令将out_alu_op[SUB_OP]置1
    assign out_alu_op[`SUB_OP]=is_sub;
    //用到左移指令将out_alu_op[SL_OP]置1
    assign out_alu_op[`SL_OP]=is_sll||is_slli;
    //用到逻辑右移指令将out_alu_op[SR_OP]置1
    assign out_alu_op[`SRL_OP]=is_srl||is_srli;
    //用到算术右移指令将out_alu_op[SA_OP]置1
    assign out_alu_op[`SRA_OP]=is_sra||is_srai;
    //用到逻辑与运算的指令将out_alu_op[AND_OP]置1
    assign out_alu_op[`AND_OP]=is_and||is_andi;
    //用到逻辑或运算的指令将out_alu_op[OR_OP]置1
    assign out_alu_op[`OR_OP]=is_or||is_ori;
    //用到逻辑异或运算的指令将out_alu_op[XOR_OP]置1
    assign out_alu_op[`XOR_OP]=is_xor||is_xori;
    //用到有符号小于运算将out_alu_op[SLT_OP]置1
    assign out_alu_op[`SLT_OP]=is_slt||is_slti;
    //用到无符号小于运算将out_alu_op[SLT_OP]置1
    assign out_alu_op[`SLTU_OP]=is_sltu||is_sltiu;
    //当跳转保存下一条指令地址时将out_alu_op[J_OP]置1
    assign out_alu_op[`J_OP]=is_j;


    assign out_rd_id=({5{(is_i||is_u||is_j||is_r||is_l)}}&in_ins[11:7])|5'b0;
    assign out_rd_we=(is_i||is_u||is_j||is_l||is_r)?`VALID_RegW:`INVALID_RegW;
    
    //通过独热编码判断写入存储器中的数据长度
    assign out_mem_we=({4{is_sb}}&`SB_MASK)|
                     ({4{is_sh}}&`SH_MASK)|
                     ({4{is_sw}}&`SW_MASK)|
                     4'b0000;
    
    //通过独热编码判断读取存储器中的数据长度
    assign out_mem_re=({5{is_lb}}&`LB_MASK)|
                      ({5{is_lh}}&`LH_MASK)|
                      ({5{is_lw}}&`LW_MASK)|
                      ({5{is_lbu}}&`LBU_MASK)|
                      ({5{is_lhu}}&`LHU_MASK)|
                      5'b00000;
    
    //JALR使用的是I型表示
    assign out_jump_addr=({32{is_jal}}&(in_pc+{{12{in_ins[31]}},in_ins[19:12],in_ins[20],in_ins[30:21],1'b0}))|
                         ({{30{is_jalr}},2'b00}& (in_src1+{{21{in_ins[31]}},in_ins[30:20]}))|
                         ({32{is_b}}&(in_pc+{{20{in_ins[31]}},in_ins[7],in_ins[30:25],in_ins[11:8],1'b0}));

    assign out_jump_en=is_jal||is_jalr||
                       (is_beq && (in_src1==in_src2))||(is_bne && (in_src1!=in_src2))||
                       (is_blt && ($signed(in_src1)<$signed(in_src2)))||
                       (is_bge && ($signed(in_src1)>=$signed(in_src2)))||
                       (is_bltu && (in_src1<in_src2))||
                       (is_bgeu && (in_src1>=in_src2));

endmodule 