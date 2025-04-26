module soc_codemem#(
	parameter MEM_BASE = 32'h80000000,
	parameter MEM_SIZE = 32'h00400000)(
	input wire clk,
	input wire [31:0] addr1,
	output reg [31:0] rdata1,
    input wire [31:0] addr2,
    output reg [31:0] rdata2
);


	reg [31:0] mem[0:(MEM_SIZE>>2)-1];

	wire[31:0] after_addr1 = (addr1 - MEM_BASE)>>2;
    wire[31:0] after_addr2 = (addr2 - MEM_BASE)>>2;
    
	assign rdata1 = mem[after_addr1];
    assign rdata2 = mem[after_addr2];
endmodule
