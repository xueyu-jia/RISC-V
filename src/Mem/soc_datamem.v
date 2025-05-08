module soc_datamem#(
	parameter MEM_SIZE = `DATAMEM_BASE)(
	input wire clk,
	input wire [3:0] wen,
	input wire [31:0] addr,
	input wire[31:0] wdata,
	output wire [31:0] rdata
);

	reg [7:0] mem[0:MEM_SIZE-1];

	wire[31:0] data0={24'b0,mem[addr]};
	wire[31:0] data1={24'b0,mem[addr+1]};
	wire[31:0] data2={24'b0,mem[addr+2]};
	wire[31:0] data3={24'b0,mem[addr+3]};

	assign rdata = (data0)|(data1<<8)|(data2<<16)|(data3<<24);

	always @(posedge clk) begin
		if (wen[0]) mem[addr] <= wdata[ 7: 0];
		if (wen[1]) mem[addr+1] <= wdata[15: 8];
		if (wen[2]) mem[addr+2] <= wdata[23:16];
		if (wen[3]) mem[addr+3] <= wdata[31:24];
	end
endmodule
