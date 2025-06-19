`include"Mem_Macro.v"

module Soc(
    input clk,
    input rst,
    input[4:0] butten,
    input[15:0] swi,
    output[15:0] led,
    output[3:0] seg0_cs,
    output[7:0] seg0_data,
    output[3:0] seg1_cs,
    output[7:0] seg1_data
);

wire clk_div;
frediv frediv0(
    .clk(clk),
    .rst(rst),
    .clk_out(clk_div)
);

wire[31:0] Rv32_out_codemem_addr;
wire[31:0] Rv32_in_codemem_rdata;
wire[31:0] Rv32_out_codemem_ne_addr;
wire[31:0] Rv32_in_codemem_ne_rdata;

wire[31:0] Rv32_out_datamem_addr;
wire[31:0] Rv32_in_datamem_rdata;
wire[31:0] Rv32_out_datamem_wdata;
wire[3:0]  Rv32_out_datamem_wen;

RV32I Rv32(
    .clk(clk_div),
    .rst(rst),
	.codemem_addr(Rv32_out_codemem_addr),
	.codemem_rdata(Rv32_in_codemem_rdata),
	.codemem_ne_addr(Rv32_out_codemem_ne_addr),
    .codemem_ne_rdata(Rv32_in_codemem_ne_rdata),

	.datamem_addr(Rv32_out_datamem_addr),
	.datamem_rdata(Rv32_in_datamem_rdata),
	.datamem_wdata(Rv32_out_datamem_wdata),
	.datamem_wen(Rv32_out_datamem_wen)
);


wire[31:0] Rv32_Memclt_in_codemem_addr=Rv32_out_codemem_addr;
wire[31:0] Rv32_Memclt_out_codemem_rdata;
wire[31:0] Rv32_Memclt_in_codemem_ne_addr=Rv32_out_codemem_ne_addr;
wire[31:0] Rv32_Memclt_out_codemem_ne_rdata;
wire[31:0] Rv32_Memclt_in_datamem_addr=Rv32_out_datamem_addr;
wire[31:0] Rv32_Memclt_out_datamem_rdata;
wire[31:0] Rv32_Memclt_in_datamem_wdata=Rv32_out_datamem_wdata;
wire[3:0] Rv32_Memclt_in_datamem_wen=Rv32_out_datamem_wen;
wire[31:0] Rv32_Memclt_out_codemem_addr;
wire[31:0] Rv32_Memclt_in_codemem_rdata;
wire[31:0] Rv32_Memclt_out_codemem_ne_addr;
wire[31:0] Rv32_Memclt_in_codemem_ne_rdata;
wire[31:0] Rv32_Memclt_out_datamem_addr;
wire[31:0] Rv32_Memclt_in_datamem_rdata;
wire[31:0] Rv32_Memclt_out_datamem_wdata;
wire[3:0] Rv32_Memclt_out_datamem_wen;
wire[31:0] Rv32_Memclt_out_iomem_addr;
wire[31:0] Rv32_Memclt_in_iomem_rdata;
wire[31:0] Rv32_Memclt_out_iomem_wdata;
wire[3:0] Rv32_Memclt_out_iomem_wen;

Memctl#(.CODEMEM_BEGIN(`CODEMEM_BASE),.CODEMEM_END(`CODEMEM_BASE+`CODEMEM_SIZE),
        .DATAMEM_BEGIN(`DATAMEM_BASE),.DATAMEM_END(`DATAMEM_BASE+`DATAMEM_SIZE),
        .IOMEM_BEGIN(`IOMEM_BASE),.IOMEM_END(`IOMEM_BASE+`IOMEM_SIZE))Rv32_Memclt(
    .in_codemem_addr(Rv32_Memclt_in_codemem_addr),
    .out_codemem_rdata(Rv32_Memclt_out_codemem_rdata),
    .in_codemem_ne_addr(Rv32_Memclt_in_codemem_ne_addr),
    .out_codemem_ne_rdata(Rv32_Memclt_out_codemem_ne_rdata),

    .in_datamem_addr(Rv32_Memclt_in_datamem_addr),
    .out_datamem_rdata(Rv32_Memclt_out_datamem_rdata),
    .in_datamem_wdata(Rv32_Memclt_in_datamem_wdata),
    .in_datamem_wen(Rv32_Memclt_in_datamem_wen),

    .out_codemem_addr(Rv32_Memclt_out_codemem_addr),
    .in_codemem_rdata(Rv32_Memclt_in_codemem_rdata),
    .out_codemem_ne_addr(Rv32_Memclt_out_codemem_ne_addr),
    .in_codemem_ne_rdata(Rv32_Memclt_in_codemem_ne_rdata),

    .out_datamem_addr(Rv32_Memclt_out_datamem_addr),
    .in_datamem_rdata(Rv32_Memclt_in_datamem_rdata),
    .out_datamem_wdata(Rv32_Memclt_out_datamem_wdata),
    .out_datamem_wen(Rv32_Memclt_out_datamem_wen),

    .out_iomem_addr(Rv32_Memclt_out_iomem_addr),
    .in_iomem_rdata(Rv32_Memclt_in_iomem_rdata),
    .out_iomem_wdata(Rv32_Memclt_out_iomem_wdata),
    .out_iomem_wen(Rv32_Memclt_out_iomem_wen)
);
assign Rv32_in_codemem_rdata=Rv32_Memclt_out_codemem_rdata;
assign Rv32_in_codemem_ne_rdata=Rv32_Memclt_out_codemem_ne_rdata;
assign Rv32_in_datamem_rdata=Rv32_Memclt_out_datamem_rdata;


//codemem
wire[31:0] Rv32_codemem_in_addr1=Rv32_Memclt_out_codemem_addr;
wire[31:0] Rv32_codemem_out_rdata1;
assign Rv32_Memclt_in_codemem_rdata=Rv32_codemem_out_rdata1;

wire[31:0] Rv32_codemem_in_addr2=Rv32_Memclt_out_codemem_ne_addr;
wire[31:0] Rv32_codemem_out_rdata2;
assign Rv32_Memclt_in_codemem_ne_rdata=Rv32_codemem_out_rdata2;

soc_codemem#(.MEM_SIZE(`CODEMEM_SIZE)) Rv32_codemem(
	.clk(clk_div),

	.addr1(Rv32_codemem_in_addr1),
	.rdata1(Rv32_codemem_out_rdata1),
	.addr2(Rv32_codemem_in_addr2),
	.rdata2(Rv32_codemem_out_rdata2)
);

//datamem
wire[3:0] Rv32_datamem_in_wen=Rv32_Memclt_out_datamem_wen;
wire[31:0] Rv32_datamem_in_addr=Rv32_Memclt_out_datamem_addr;
wire[31:0] Rv32_datamem_in_wdata=Rv32_Memclt_out_datamem_wdata;
wire[31:0] Rv32_datamem_out_rdata;
assign Rv32_Memclt_in_datamem_rdata=Rv32_datamem_out_rdata;

soc_datamem#(.MEM_SIZE(`DATAMEM_SIZE)) Rv32_datamem(
	.clk(clk_div),
	.wen(Rv32_datamem_in_wen),
	.addr(Rv32_datamem_in_addr),
	.wdata(Rv32_datamem_in_wdata),
	.rdata(Rv32_datamem_out_rdata)
);


wire[31:0] Rv32_devport_in_addr=Rv32_Memclt_out_iomem_addr;
wire[31:0] Rv32_devport_out_rdata;
wire[3:0] Rv32_devport_in_wen=Rv32_Memclt_out_iomem_wen;
wire[31:0] Rv32_devport_in_wdata=Rv32_Memclt_out_iomem_wdata;
wire[4:0] Rv32_devport_in_butten=butten;
wire[15:0] Rv32_devport_in_switch=swi;
wire[15:0] Rv32_devport_out_led;
wire[3:0] Rv32_devport_out_seg0_cs;
wire[7:0] Rv32_devport_out_seg0_data;
wire[3:0] Rv32_devport_out_seg1_cs;
wire[7:0] Rv32_devport_out_seg1_data;
assign Rv32_Memclt_in_iomem_rdata=Rv32_devport_out_rdata;
Device_port#(.MEMRO_SIZE(`IOMEMRO_SIZE),.MEM_SIZE(`IOMEM_SIZE)) Rv32_devport(
    .clk(clk_div),
    .rst(rst),
    .in_addr(Rv32_devport_in_addr),
    .out_rdata(Rv32_devport_out_rdata),
    .in_wen(Rv32_devport_in_wen),
    .in_wdata(Rv32_devport_in_wdata),

    .in_butten(Rv32_devport_in_butten),
    .in_swi(Rv32_devport_in_switch),
    .out_led(Rv32_devport_out_led),
    .out_seg0_cs(Rv32_devport_out_seg0_cs),
    .out_seg0_data(Rv32_devport_out_seg0_data),
    .out_seg1_cs(Rv32_devport_out_seg1_cs),
    .out_seg1_data(Rv32_devport_out_seg1_data)
);
assign led=Rv32_devport_out_led;
assign seg0_cs=Rv32_devport_out_seg0_cs;
assign seg0_data=Rv32_devport_out_seg0_data;
assign seg1_cs=Rv32_devport_out_seg1_cs;
assign seg1_data=Rv32_devport_out_seg1_data;

endmodule
