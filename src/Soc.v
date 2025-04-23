module Soc(
 `ifdef VERILATOR
	input wire[31:0] sim_in_addr,
	output wire[31:0] sim_out_rdata,
	
	input wire[3:0]  sim_in_wen,
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

/*
//下面用来实现一个存储器
parameter MEM_BASE = 32'h80000000;
parameter MEM_SIZE = 32'h00001000;

//内存布局如下(注意只用于仿真,与链接脚本保持一致):
//4kB code mem
//4kB tohost mem
//8kB other mem

reg [31:0] mem[0:MEM_SIZE-1];

wire[31:0] after_addr = (addr - MEM_BASE)>>2;

//always@(*)	
assign rdata = mem[after_addr];

always @(posedge clk) begin
    if (wen[0]) mem[after_addr][ 7: 0] <= wdata[ 7: 0];
    if (wen[1]) mem[after_addr][15: 8] <= wdata[15: 8];
    if (wen[2]) mem[after_addr][23:16] <= wdata[23:16];
    if (wen[3]) mem[after_addr][31:24] <= wdata[31:24];
end
*/



`ifdef VERILATOR
wire[3:0] rv_wen=Rv32_out_mem_valid?Rv32_out_mem_wstrb:4'b0;
wire[3:0] Rv32_mem_in_wen=Rv32_out_mem_valid?rv_wen:sim_in_wen;
wire[31:0] Rv32_mem_in_addr=Rv32_out_mem_valid?Rv32_out_mem_addr:sim_in_addr;
wire[31:0] Rv32_mem_in_wdata=Rv32_out_mem_valid?Rv32_out_mem_wdata:sim_in_wdata;
wire[31:0] Rv32_mem_out_rdata;
assign Rv32_in_mem_rdata=Rv32_mem_out_rdata;
assign sim_out_rdata=Rv32_mem_out_rdata;
`else
wire[3:0] Rv32_mem_in_wen=Rv32_out_mem_valid?Rv32_out_mem_wstrb:4'b0;
wire[31:0] Rv32_mem_in_addr=Rv32_out_mem_addr;
wire[31:0] Rv32_mem_in_wdata=Rv32_out_mem_wdata;
wire[31:0] Rv32_mem_out_rdata;
assign Rv32_in_mem_rdata=Rv32_mem_out_rdata;
`endif


soc_mem Rv32_mem(
	.clk(clk),
	.wen(Rv32_mem_in_wen),
	.addr(Rv32_mem_in_addr),
	.wdata(Rv32_mem_in_wdata),
	.rdata(Rv32_mem_out_rdata)
);


endmodule
