`include "Macro.v"
module RV32I(
    input clk,
    input rst,
    
    output wire       mem_valid,
	output wire       mem_instr,
	//input             mem_ready,

	output wire[31:0] mem_addr,
	output wire[31:0] mem_wdata,
	output wire[ 3:0] mem_wstrb,
	input  wire[31:0] mem_rdata
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


wire[31:0] Ifu_in_ins;
wire[31:0] Ifu_out_pc;
wire[31:0] Ifu_out_ins;
wire       Ifu_out_mem_valid;  
wire Ifu_in_jmp_en;
wire[31:0] Ifu_in_jmp_addr;

Ifu RV32I_Ifu(
    .clk(clk),
    .rst(rst),
    .in_ins(Ifu_in_ins),
    .out_mem_valid(Ifu_out_mem_valid),
    .out_pc(Ifu_out_pc),
    .out_ins(Ifu_out_ins),
    .in_Jmp_en(Ifu_in_jmp_en),
    .in_Jmp_addr(Ifu_in_jmp_addr)
);

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
wire[31:0] Memu_in_mem_data;

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

wire Memu_out_mem_valid;


Memu RV32I_Memu(
    .in_addr(Memu_in_addr),
    .in_mem_data(Memu_in_mem_data),

    .in_rd_id(Memu_in_rd_id),
    .in_rd_we(Memu_in_rd_we),
    .in_alu_data(Memu_in_alu_data),

    .out_addr(Memu_out_mem_addr),
    .out_mem_valid(Memu_out_mem_valid),
    .in_mem_re(Memu_in_mem_re),
    .in_mem_we(Memu_in_mem_we),
    .out_mem_data(Memu_out_mem_data),

    .out_mem_we(Memu_out_mem_we),
    
    .out_rd_id(Memu_out_rd_id),
    .out_rd_we(Memu_out_rd_we),
    .out_rd_data(Memu_out_rd_data)
);


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


assign mem_addr = ({32{Memu_out_mem_valid}}&Memu_out_mem_addr)|
                  ({32{Ifu_out_mem_valid}}&Ifu_out_pc);
assign mem_valid=Memu_out_mem_valid|Ifu_out_mem_valid;
assign mem_wstrb=Memu_out_mem_we;
assign mem_wdata=Memu_out_mem_data;

assign Memu_in_mem_data=mem_rdata;
assign Ifu_in_ins=mem_rdata;

//mem_instr为1时表示取指访存，为0时表示数据访存
assign mem_instr=Ifu_out_mem_valid & !Memu_out_mem_valid;

endmodule
