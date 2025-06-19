module soc_datamem#(
	parameter MEM_SIZE = `DATAMEM_BASE)(
	input wire clk,
	input wire [3:0] wen,
	input wire [31:0] addr,
	input wire[31:0] wdata,
	output wire [31:0] rdata
);

`ifdef TEST
	reg [7:0] mem[0:MEM_SIZE-1];
	wire[31:0] data0={24'b0,mem[addr+0]};
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

`else 
//dist_datamem0 dist_datamem0_0(
//    .clk(clk),
//    .we(wen[0]),
//    .dpra(addr[9:2]),
//    .d(wdata[7:0]),
//    .a(addr[9:2]),
//    .dpo(rdata[7:0])
//);

//dist_datamem1 dist_datamem1_0(
//    .clk(clk),
//    .we(wen[1]),
//    .dpra(addr[9:2]),
//    .d(wdata[15:8]),
//    .a(addr[9:2]),
//    .dpo(rdata[15:8])
//);

//dist_datamem2 dist_datamem2_0(
//    .clk(clk),
//    .we(wen[2]),
//    .dpra(addr[9:2]),
//    .d(wdata[23:16]),
//    .a(addr[9:2]),
//    .dpo(rdata[23:16])
//);

//dist_datamem3 dist_datamem3_0(
//    .clk(clk),
//    .we(wen[3]),
//    .dpra(addr[9:2]),
//    .d(wdata[31:24]),
//    .a(addr[9:2]),
//    .dpo(rdata[31:24])
//);


	reg [7:0] mem[0:MEM_SIZE-1];
	wire[31:0] data0={24'b0,mem[addr+0]};
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

	localparam DATA_FILE="/home/bob/RISC_V/RISC-V/firmware/build/af_led.data.hex";
	initial
	begin
		$readmemh(DATA_FILE,mem);
	end
`endif

endmodule
