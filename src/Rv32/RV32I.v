module RV32I(
    input clk,
    input rst,
    
	output wire[31:0] codemem_addr,
	input  wire[31:0] codemem_rdata,
    output wire[31:0] codemem_ne_addr,
    input  wire[31:0] codemem_ne_rdata,

	//input             mem_ready,

	output wire[31:0] datamem_addr,
	input  wire[31:0] datamem_rdata,
	output wire[31:0] datamem_wdata,
	output wire[ 3:0] datamem_wen
);


wire[4:0] Regfile_in_rd_id;
wire Regfile_in_rd_we;
wire[31:0] Regfile_in_data;

wire[4:0] Regfile_in_Ra_id;
wire[4:0] Regfile_in_Rb_id;

wire[31:0] Regfile_out_Ra_data;
wire[31:0] Regfile_out_Rb_data;

Regfile RV32I_Regfile(
    .clk(clk),
    //复位信号
    .rst(rst),
    //两个读端口的ID输入
    .in_Ra_id(Regfile_in_Ra_id),
    .in_Rb_id(Regfile_in_Rb_id),
    //两个读的输出端口
    .out_Ra_data(Regfile_out_Ra_data),
    .out_Rb_data(Regfile_out_Rb_data),    

    //写端口ID和写使能信号(低电平使能)
    .in_W_id(Regfile_in_rd_id),
    .in_We(Regfile_in_rd_we),
    .in_W_data(Regfile_in_data)
);


wire[31:0] Ifu_in_ins=codemem_rdata;
wire[31:0] Ifu_out_pc;
wire[31:0] Ifu_out_ins;
wire Ifu_in_jmp_en;
wire[31:0] Ifu_in_jmp_addr;
wire[31:0] Ifu_ne_in_ins=codemem_ne_rdata;
wire[31:0] Ifu_ne_out_pc;

Ifu RV32I_Ifu(
    .clk(clk),
    .rst(rst),
    .in_ins(Ifu_in_ins),
    .ne_in_ins(Ifu_ne_in_ins),
    .out_pc(Ifu_out_pc),
    .ne_out_pc(Ifu_ne_out_pc),
    .out_ins(Ifu_out_ins),
    .in_Jmp_en(Ifu_in_jmp_en),
    .in_Jmp_addr(Ifu_in_jmp_addr)
);
assign codemem_addr=Ifu_out_pc;
assign codemem_ne_addr=Ifu_ne_out_pc;


wire[31:0] Decoder_in_pc=Ifu_out_pc;
wire[31:0] Decoder_in_ins=Ifu_out_ins;

wire[31:0] Decoder_in_src1=Regfile_out_Ra_data;
wire[31:0] Decoder_in_src2=Regfile_out_Rb_data;

wire[4:0] Decoder_out_rs1_id;
wire[4:0] Decoder_out_rs2_id;
wire[31:0] Decoder_out_src1;
wire[31:0] Decoder_out_src2;
wire[31:0] Decoder_out_imm;

wire[4:0] Decoder_out_rd_id;
wire Decoder_out_rd_we;

wire[`ALU_OP_NUM-1:0] Decoder_out_alu_op;

wire[3:0] Decoder_out_mem_we;
wire[4:0] Decoder_out_mem_re;

wire Decoder_out_jump_en;
wire[31:0] Decoder_out_jump_addr;


Decoder RV32I_Decoder(
    .in_pc(Decoder_in_pc),
    .in_ins(Decoder_in_ins),

    .in_src1(Decoder_in_src1),
    .in_src2(Decoder_in_src2),
    
    .out_rs1_id(Decoder_out_rs1_id),
    .out_rs2_id(Decoder_out_rs2_id),

    .out_src1(Decoder_out_src1),
    .out_src2(Decoder_out_src2),
    .out_imm(Decoder_out_imm),

    .out_rd_id(Decoder_out_rd_id),
    .out_rd_we(Decoder_out_rd_we),

    .out_alu_op(Decoder_out_alu_op),
    .out_mem_re(Decoder_out_mem_re),
    .out_mem_we(Decoder_out_mem_we),

    .out_jump_en(Decoder_out_jump_en),
    .out_jump_addr(Decoder_out_jump_addr)
);
assign Regfile_in_Ra_id = Decoder_out_rs1_id;
assign Regfile_in_Rb_id = Decoder_out_rs2_id;
assign Ifu_in_jmp_en=Decoder_out_jump_en;
assign Ifu_in_jmp_addr=Decoder_out_jump_addr;


wire[`ALU_OP_NUM-1:0] Alu_in_op=Decoder_out_alu_op;

wire[4:0] Alu_in_rd_id=Decoder_out_rd_id;
wire[31:0] Alu_in_imm=Decoder_out_imm;
wire[31:0] Alu_in_src1=Decoder_out_src1;
wire[31:0] Alu_in_src2=Decoder_out_src2;
wire[3:0] Alu_in_mem_we=Decoder_out_mem_we;
wire[4:0] Alu_in_mem_re=Decoder_out_mem_re;

wire[4:0] Alu_out_rd_id;
wire Alu_out_rd_we;
wire[31:0] Alu_out_data;
wire[31:0] Alu_out_mem_addr;
wire[3:0] Alu_out_mem_we;
wire[4:0] Alu_out_mem_re;

Alu RV32I_Alu(
    .in_op(Alu_in_op),

    .in_rd_id(Alu_in_rd_id),
    .in_rd_we(Decoder_out_rd_we),

    .in_mem_we(Alu_in_mem_we),
    .in_mem_re(Alu_in_mem_re),

    .in_src1(Alu_in_src1),
    .in_src2(Alu_in_src2),  
    .in_imm(Alu_in_imm),

    .out_rd_id(Alu_out_rd_id),
    .out_rd_we(Alu_out_rd_we),

    .out_data(Alu_out_data),

    .out_mem_addr(Alu_out_mem_addr),
    .out_mem_re(Alu_out_mem_re),
    .out_mem_we(Alu_out_mem_we)
);


wire[31:0] Memu_in_addr=Alu_out_mem_addr;
wire[31:0] Memu_in_mem_data=datamem_rdata;

wire[4:0] Memu_in_rd_id=Alu_out_rd_id;
wire Memu_in_rd_we=Alu_out_rd_we;
wire[31:0] Memu_in_alu_data=Alu_out_data;

wire[3:0] Memu_in_mem_we=Alu_out_mem_we;
wire[4:0] Memu_in_mem_re=Alu_out_mem_re;

wire[31:0] Memu_out_mem_addr;
wire[31:0] Memu_out_mem_data;

wire[3:0] Memu_out_mem_we;
wire[4:0] Memu_out_mem_re;

wire[4:0] Memu_out_rd_id;
wire Memu_out_rd_we;
wire[31:0] Memu_out_rd_data;


Mem RV32I_Memu(
    .in_addr(Memu_in_addr),
    .in_mem_data(Memu_in_mem_data),

    .in_rd_id(Memu_in_rd_id),
    .in_rd_we(Memu_in_rd_we),
    .in_alu_data(Memu_in_alu_data),

    .out_addr(Memu_out_mem_addr),
    .in_mem_re(Memu_in_mem_re),
    .in_mem_we(Memu_in_mem_we),
    .out_mem_data(Memu_out_mem_data),

    .out_mem_we(Memu_out_mem_we),
    
    .out_rd_id(Memu_out_rd_id),
    .out_rd_we(Memu_out_rd_we),
    .out_rd_data(Memu_out_rd_data)
);

assign datamem_addr=Memu_out_mem_addr;
assign datamem_wdata=Memu_out_mem_data;
assign datamem_wen=Memu_out_mem_we;

wire[4:0] Wbu_in_rd_id=Memu_out_rd_id;
wire Wbu_in_rd_we=Memu_out_rd_we;
wire[31:0] Wbu_in_data=Memu_out_rd_data;

wire[31:0] Wbu_out_data;
wire[4:0] Wbu_out_rd_id;
wire Wbu_out_rd_we;

Wbu RV32I_Wbu(
    .in_rd_id(Wbu_in_rd_id),
    .in_rd_we(Wbu_in_rd_we),
    .in_data(Wbu_in_data),

    .out_data(Wbu_out_data),
    .out_rd_id(Wbu_out_rd_id),
    .out_rd_we(Wbu_out_rd_we)
);
assign Regfile_in_rd_id = Wbu_out_rd_id;
assign Regfile_in_rd_we = Wbu_out_rd_we;
assign Regfile_in_data = Wbu_out_data;


endmodule
