module soc_codemem#(
	parameter MEM_BASE = 32'h80000000,
	parameter MEM_SIZE = 32'h00400000)(
	input wire clk,
	input wire [31:0] addr1,
	output reg [31:0] rdata1,
    input wire [31:0] addr2,
    output reg [31:0] rdata2
);


	reg [7:0] mem[0:MEM_SIZE-1];

    wire[31:0] data10={24'b0,mem[addr1]};
	wire[31:0] data11={24'b0,mem[addr1+1]};
	wire[31:0] data12={24'b0,mem[addr1+2]};
	wire[31:0] data13={24'b0,mem[addr1+3]};
	assign rdata1 = (data10)|(data11<<8)|(data12<<16)|(data13<<24);

    wire[31:0] data20={24'b0,mem[addr2]};
	wire[31:0] data21={24'b0,mem[addr2+1]};
	wire[31:0] data22={24'b0,mem[addr2+2]};
	wire[31:0] data23={24'b0,mem[addr2+3]};
    assign rdata2 = (data20)|(data21<<8)|(data22<<16)|(data23<<24);
endmodule
