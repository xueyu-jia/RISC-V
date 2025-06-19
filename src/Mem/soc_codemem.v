`include"Mem_Macro.v"

module soc_codemem#(
	parameter MEM_SIZE = `CODEMEM_SIZE)(
	input wire clk,
	input wire [31:0] addr1,
	output wire [31:0] rdata1,
    input wire [31:0] addr2,
    output wire [31:0] rdata2
);

`ifdef TEST
	reg [7:0] mem[0:MEM_SIZE-1];
	
    wire[31:0] data10={24'b0,mem[addr1+0]};
	wire[31:0] data11={24'b0,mem[addr1+1]};
	wire[31:0] data12={24'b0,mem[addr1+2]};
	wire[31:0] data13={24'b0,mem[addr1+3]};

    wire[31:0] data20={24'b0,mem[addr2+0]};
	wire[31:0] data21={24'b0,mem[addr2+1]};
	wire[31:0] data22={24'b0,mem[addr2+2]};
	wire[31:0] data23={24'b0,mem[addr2+3]};
	assign rdata1 = (data10)|(data11<<8)|(data12<<16)|(data13<<24);
    assign rdata2 = (data20)|(data21<<8)|(data22<<16)|(data23<<24);
`else
//localparam INVALID_WE = 1'b0;
//localparam INVALID_WRITE = 8'h00;

//dist_codemem0 dist_codemem0_0(
//    .clk(clk),
//    .we(INVALID_WE),
//    .d(INVALID_WRITE),
//    .dpra(addr1[9:2]),
//    .dpo(rdata1[7:0]),

//    .a(addr2[9:2]),
//    .spo(rdata2[7:0])
//);


//dist_codemem1 dist_codemem1_0(
//    .clk(clk),
//    .we(INVALID_WE),
//    .d(INVALID_WRITE),
//    .dpra(addr1[9:2]),
//    .dpo(rdata1[15:8]),

//    .a(addr2[9:2]),
//    .spo(rdata2[15:8])
//);

//dist_codemem2 dist_codemem2_0(
//    .clk(clk),
//    .we(INVALID_WE),
//    .d(INVALID_WRITE),
//    .dpra(addr1[9:2]),
//    .dpo(rdata1[23:16]),

//    .a(addr2[9:2]),
//    .spo(rdata2[23:16])
//);

//dist_codemem3 dist_codemem3_0(
//    .clk(clk),
//    .we(INVALID_WE),
//    .d(INVALID_WRITE),
//    .dpra(addr1[9:2]),
//    .dpo(rdata1[31:24]),

//    .a(addr2[9:2]),
//    .spo(rdata2[31:24])
//);


	reg [7:0] mem[0:MEM_SIZE-1];
	
    wire[31:0] data10={24'b0,mem[addr1+0]};
	wire[31:0] data11={24'b0,mem[addr1+1]};
	wire[31:0] data12={24'b0,mem[addr1+2]};
	wire[31:0] data13={24'b0,mem[addr1+3]};

    wire[31:0] data20={24'b0,mem[addr2+0]};
	wire[31:0] data21={24'b0,mem[addr2+1]};
	wire[31:0] data22={24'b0,mem[addr2+2]};
	wire[31:0] data23={24'b0,mem[addr2+3]};
	assign rdata1 = (data10)|(data11<<8)|(data12<<16)|(data13<<24);
    assign rdata2 = (data20)|(data21<<8)|(data22<<16)|(data23<<24);
    
	localparam CODE_FILE="/home/bob/RISC_V/RISC-V/firmware/build/af_led.code.hex";
	initial
	begin
		$readmemh(CODE_FILE,mem);
	end
`endif

endmodule
