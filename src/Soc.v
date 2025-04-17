module Soc(
 `ifdef VERILATOR
	output wire[31:0] sim_out_rdata,
	
	input wire[3:0]  sim_in_wen,
	input wire[31:0] sim_in_addr,
	input wire[31:0] sim_in_wdata,
`endif
    input clk,
    input rst
);


wire Rv32_out_mem_valid;
wire Rv32_out_mem_instr;
wire[31:0] Rv32_out_mem_addr;
wire[31:0] Rv32_out_mem_wdata;
wire[3:0]  Rv32_out_mem_wstrb;
wire[31:0] Rv32_in_mem_rdata;

RV32I rv32(
    .clk(clk),
    .rst(rst),
    .mem_valid(Rv32_out_mem_valid),
    .mem_instr(Rv32_out_mem_instr),
    .mem_addr(Rv32_out_mem_addr),
    .mem_wdata(Rv32_out_mem_wdata),
    .mem_wstrb(Rv32_out_mem_wstrb),
    .mem_rdata(Rv32_in_mem_rdata)
);


`ifdef VERILATOR
wire[3:0] rv_wen=(Rv32_out_mem_valid && Rv32_out_mem_addr<4*`MEM_WORDS)?Rv32_out_mem_wstrb:4'b0;
wire[3:0] Rv32_mem_in_wen=Rv32_out_mem_valid?rv_wen:sim_in_wen;
wire[31:0] Rv32_mem_in_addr=Rv32_out_mem_valid?Rv32_out_mem_addr:sim_in_addr;
wire[31:0] Rv32_mem_in_wdata=Rv32_out_mem_valid?Rv32_out_mem_wdata:sim_in_wdata;
wire[31:0] Rv32_mem_out_rdata;
assign Rv32_in_mem_rdata=Rv32_mem_out_rdata;
assign sim_out_rdata=Rv32_mem_out_rdata;
`else
wire[3:0] Rv32_mem_in_wen=(Rv32_out_mem_valid && Rv32_out_mem_addr<4*`MEM_WORDS)?Rv32_out_mem_wdata:4'b0;
wire[31:0] Rv32_mem_in_addr=Rv32_out_mem_addr;
wire[31:0] Rv32_mem_in_wdata=Rv32_out_mem_wdata;
wire[31:0] Rv32_mem_out_rdata;
assign Rv32_in_mem_rdata=Rv32_mem_out_rdata;
`endif


soc_mem RV32_mem(
	.clk(clk),
	.wen(Rv32_mem_in_wen),
	.addr(Rv32_mem_in_addr),
	.wdata(Rv32_mem_in_wdata),
	.rdata(Rv32_mem_out_rdata)
);

endmodule
