`include"Macro.v"
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
    output wire[`ALU_OP_NUM-1:0]  alu_out_op,
    
    output wire[2:0] out_mem_we,
    output wire[4:0] out_mem_re,

    //输出是否需要跳转
    output wire out_jump_en,
    output wire[31:0] out_jump_addr
);
    assign out_pc=in_pc;

    wire[6:0] opcode=in_ins[6:0];
    wire[2:0] fuc3=in_ins[14:12];
    wire[6:0] fuc7=in_ins[30:25];

    wire is_i=opcode==`I;
    wire is_u=opcode==`U;
    wire is_j=opcode==`J;
    wire is_b=opcode==`B;
    wire is_s=opcode==`S;
    wire is_r=opcode==`R;

    assign out_rs1_id=({5{(is_i||is_s||is_b||is_r)}}&in_ins[19:15])|5'b0;
    assign out_rs2_id=({5{(is_s||is_b||is_r)}}&in_ins[24:20])|5'b0;
    assign out_rd_id=({5{(is_i||is_u||is_j)}}&in_ins[11:7])|5'b0;
    assign out_rd_we=(is_i||is_u||is_j)|1'b0;

    assign out_src1=in_src1;
    assign out_src2=in_src2;

    
    wire is_addi=((is_i)&&(fuc3==`ADDI));
    wire is_slti=((is_i)&&(fuc3==`SLTI));
    wire is_sltiu=((is_i)&&(fuc3==`SLTIU));
    wire is_xori=((is_i)&&(fuc3==`XORI));
    wire is_ori=((is_i)&&(fuc3==`ORI));
    wire is_andi=((is_i)&&(fuc3==`ANDI));
    wire is_slli=((is_i)&&(fuc3==`SLLI));
    wire is_srli=((is_i)&&(fuc3==`SRLI));
    wire is_srai=((is_i)&&(fuc3==`SRAI));

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

    wire is_lui=((is_u)&&(fuc3==`LUI));
    wire is_auipc=((is_u)&&(fuc3==`AUIPC));
    
    wire is_beq=((is_b)&&(fuc3==`BEQ));
    wire is_bne=((is_b)&&(fuc3==`BNE));
    wire is_blt=((is_b)&&(fuc3==`BLT));
    wire is_bge=((is_b)&&(fuc3==`BGE));
    wire is_bltu=((is_b)&&(fuc3==`BLTU));
    wire is_bgeu=((is_b)&&(fuc3==`BGEU));
    
    wire is_lb=((is_i)&&(fuc3==`LB));
    wire is_lh=((is_i)&&(fuc3==`LH));
    wire is_lw=((is_i)&&(fuc3==`LW));
    wire is_lbu=((is_i)&&(fuc3==`LBU));
    wire is_lhu=((is_i)&&(fuc3==`LHU));
    
    wire is_sb=((is_s)&&(fuc3==`SB));
    wire is_sh=((is_s)&&(fuc3==`SH));
    wire is_sw=((is_s)&&(fuc3==`SW));
    
    wire is_jal=((is_j)&&(fuc3==`JAL));
    wire is_jalr=((is_i)&&(fuc3==`JALR));

    assign out_imm=({32{is_i}}&{{20{in_ins[31]}},in_ins[31:20]})|
                   ({32{is_u}}&(({32{is_auipc}}&in_pc)+({in_ins[31:12],12'b0})))|
                   ({32{is_j}}&{{12{in_ins[31]}},in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                   ({32{is_b}}&{{20{in_ins[31]}},in_ins[7],in_ins[30:25],in_ins[11:8],1'b0})|
                   ({32{is_s}}&{{20{in_ins[31]}},in_ins[31:25],in_ins[11:7]})|
                   ({32{is_r}}&32'b0);

    //用到加法器的指令将alu_out_op[ADD_OP]置1
    assign alu_out_op[`ADD_OP]=is_addi||is_add||is_lb||is_lh||is_lw||is_lbu||is_lhu||is_lui||is_auipc;
    //用到减法的指令将alu_out_op[SUB_OP]置1
    assign alu_out_op[`SUB_OP]=is_sub;
    //用到左移指令将alu_out_op[SL_OP]置1
    assign alu_out_op[`SL_OP]=is_sll||is_slli;
    //用到逻辑右移指令将alu_out_op[SR_OP]置1
    assign alu_out_op[`SR_OP]=is_srl||is_srli;
    //用到算术右移指令将alu_out_op[SA_OP]置1
    assign alu_out_op[`SA_OP]=is_sra||is_srai;
    //用到逻辑与运算的指令将alu_out_op[AND_OP]置1
    assign alu_out_op[`AND_OP]=is_and||is_andi;
    //用到逻辑或运算的指令将alu_out_op[OR_OP]置1
    assign alu_out_op[`OR_OP]=is_or||is_ori;
    //用到逻辑异或运算的指令将alu_out_op[XOR_OP]置1
    assign alu_out_op[`XOR_OP]=is_xor||is_xori;
    assign alu_out_op[`SLT_OP]=is_slt||is_slti;
    assign alu_out_op[`SLTU_OP]=is_sltu||is_sltiu;

    //通过独热编码判断写入存储器中的数据长度
    assign out_mem_we=({3{is_sb}}&`SB_MASK)|
                     ({3{is_sh}}&`SH_MASK)|
                     ({3{is_sw}}&`SW_MASK)|
                     3'b000;
    
    //通过独热编码判断读取存储器中的数据长度
    assign out_mem_re=({5{is_lb}}&`LB_MASK)|
                      ({5{is_lh}}&`LH_MASK)|
                      ({5{is_lw}}&`LW_MASK)|
                      ({5{is_lbu}}&`LBU_MASK)|
                      ({5{is_lhu}}&`LHU_MASK)|
                      5'b00000;
    
    assign out_jump_addr=({32{is_jal}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_jalr}}&{in_src1[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_beq}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_bne}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_blt}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_bge}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_bltu}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0})|
                         ({32{is_bgeu}}&{in_pc[31:28],in_ins[19:12],in_ins[20],in_ins[30:21],1'b0});

    assign out_jump_en=is_jal||is_jalr||
                       (is_beq && (in_src1==in_src2))||(is_bne && (in_src1!=in_src2))||
                       (is_blt && ($signed(in_src1)<$signed(in_src2)))||
                       (is_bge && ($signed(in_src1)>$signed(in_src2)))||
                       (is_bltu && (in_src1<in_src2))||
                       (is_bgeu && (in_src1>in_src2));

endmodule 