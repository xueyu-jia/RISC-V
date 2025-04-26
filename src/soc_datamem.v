module soc_datamem#(
	parameter MEM_BASE = 32'h80400000,
	parameter MEM_SIZE = 32'h00400000)(
	input wire clk,
	input wire [3:0] wen,
	input wire [31:0] addr,
	input wire[31:0] wdata,
	output reg [31:0] rdata
);

	reg [31:0] mem[0:(MEM_SIZE>>2)-1];

	wire[31:0] after_addr = (addr - MEM_BASE)>>2;

	assign rdata = mem[after_addr];
	always @(posedge clk) begin
		if (wen[0]) mem[after_addr][ 7: 0] <= wdata[ 7: 0];
		if (wen[1]) mem[after_addr][15: 8] <= wdata[15: 8];
		if (wen[2]) mem[after_addr][23:16] <= wdata[23:16];
		if (wen[3]) mem[after_addr][31:24] <= wdata[31:24];
	end
endmodule
