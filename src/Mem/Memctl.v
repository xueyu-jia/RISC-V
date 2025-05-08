`include"Mem_Macro.v"
//存储器控制器
//目前只完成物理地址的偏移映射
module Memctl#(
    parameter CODEMEM_BEGIN=`CODEMEM_BASE,
    parameter CODEMEM_END=`CODEMEM_BASE + `CODEMEM_SIZE,
    parameter DATAMEM_BEGIN=`DATAMEM_BASE,
    parameter DATAMEM_END=`DATAMEM_BASE + `DATAMEM_SIZE,
    parameter IOMEM_BEGIN=`IOMEM_BASE,
    parameter IOMEM_END=`IOMEM_BASE + `IOMEM_SIZE
)(
    //与RV之间的信号
    input wire[31:0] in_codemem_addr,
    output wire[31:0] out_codemem_rdata,
    input wire[31:0] in_codemem_ne_addr,
    output wire[31:0] out_codemem_ne_rdata,
    
    input wire[31:0] in_datamem_addr,
    output wire[31:0] out_datamem_rdata,
    input wire[31:0] in_datamem_wdata,
	input wire[ 3:0] in_datamem_wen,

    //与存储器及外设接口之间的信号
    output wire[31:0] out_codemem_addr,
    input wire[31:0] in_codemem_rdata,
    output wire[31:0] out_codemem_ne_addr,
    input wire[31:0] in_codemem_ne_rdata,
    
    output wire[31:0] out_datamem_addr,
    input wire[31:0] in_datamem_rdata,
    output wire[31:0] out_datamem_wdata,
	output wire[ 3:0] out_datamem_wen,

    output wire[31:0] out_iomem_addr,
    input wire[31:0] in_iomem_rdata,
    output wire[31:0] out_iomem_wdata,
	output wire[ 3:0] out_iomem_wen
);

    assign out_codemem_addr = in_codemem_addr - CODEMEM_BEGIN;
    assign out_codemem_ne_addr = in_codemem_ne_addr - CODEMEM_BEGIN;
    assign out_codemem_rdata=in_codemem_rdata;
    assign out_codemem_ne_rdata=in_codemem_ne_rdata;

    wire is_iomem=(in_datamem_addr>=IOMEM_BEGIN) && (in_datamem_addr<IOMEM_END);
    wire is_datamem=(in_datamem_addr>=DATAMEM_BEGIN) && (in_datamem_addr<DATAMEM_END);

    assign out_datamem_addr=in_datamem_addr-DATAMEM_BEGIN;
    assign out_iomem_addr=in_datamem_addr-IOMEM_BEGIN;
    
    assign out_datamem_rdata=({32{is_iomem}}&in_iomem_rdata)|({32{is_datamem}}&in_datamem_rdata);

    assign out_datamem_wdata=in_datamem_wdata;
    assign out_datamem_wen={4{is_datamem}}&in_datamem_wen;
    assign out_iomem_wdata=in_datamem_wdata;
    assign out_iomem_wen={4{is_iomem}}&in_datamem_wen;
endmodule