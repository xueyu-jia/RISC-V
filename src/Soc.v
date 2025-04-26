module Soc(
    input clk,
    input rst
);

wire Rv32_out_codemem_valid;
wire[31:0] Rv32_out_codemem_addr;
wire[31:0] Rv32_in_codemem_rdata;
wire[31:0] Rv32_out_codemem_ne_addr;
wire[31:0] Rv32_in_codemem_ne_rdata;

wire Rv32_out_dataemem_valid;
wire[31:0] Rv32_out_datamem_addr;
wire[31:0] Rv32_in_datamem_rdata;
wire[31:0] Rv32_out_datamem_wdata;
wire[3:0]  Rv32_out_datamem_wstrb;

RV32I rv32(
    .clk(clk),
    .rst(rst),
    .codemem_valid(Rv32_out_codemem_valid),
	.codemem_addr(Rv32_out_codemem_addr),
	.codemem_rdata(Rv32_in_codemem_rdata),
	.codemem_ne_addr(Rv32_out_codemem_ne_addr),
    .codemem_ne_rdata(Rv32_in_codemem_ne_rdata),
	//input             mem_ready,

    .datamem_valid(Rv32_out_dataemem_valid),
	.datamem_addr(Rv32_out_datamem_addr),
	.datamem_rdata(Rv32_in_datamem_rdata),
	.datamem_wdata(Rv32_out_datamem_wdata),
	.datamem_wstrb(Rv32_out_datamem_wstrb)
);



wire[31:0] Rv32_codemem_in_addr1=Rv32_out_codemem_addr;
wire[31:0] Rv32_codemem_out_rdata1;
assign Rv32_in_codemem_rdata=Rv32_codemem_out_rdata1;

wire[31:0] Rv32_codemem_in_addr2=Rv32_out_codemem_ne_addr;
wire[31:0] Rv32_codemem_out_rdata2;
assign Rv32_in_codemem_ne_rdata=Rv32_codemem_out_rdata2;


wire[3:0] Rv32_datamem_in_wen=Rv32_out_datamem_wstrb;
wire[31:0] Rv32_datamem_in_addr=Rv32_out_datamem_addr;
wire[31:0] Rv32_datamem_in_wdata=Rv32_out_datamem_wdata;
wire[31:0] Rv32_datamem_out_rdata;
assign Rv32_in_datamem_rdata=Rv32_datamem_out_rdata;


soc_codemem#(.MEM_BASE(32'h80000000),.MEM_SIZE(32'h00400000)) Rv32_codemem(
	.clk(clk),

	.addr1(Rv32_codemem_in_addr1),
	.rdata1(Rv32_codemem_out_rdata1),
	.addr2(Rv32_codemem_in_addr2),
	.rdata2(Rv32_codemem_out_rdata2)

);

soc_datamem#(.MEM_BASE(32'h80400000),.MEM_SIZE(32'h00400000)) Rv32_datamem(
	.clk(clk),
	.wen(Rv32_datamem_in_wen),
	.addr(Rv32_datamem_in_addr),
	.wdata(Rv32_datamem_in_wdata),
	.rdata(Rv32_datamem_out_rdata)
);


endmodule
