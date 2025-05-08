`include "Device_Macro.v"
`include "Macro.v"

module Device_port#(
    parameter MEMRO_SIZE = `IOMEMRO_SIZE,
    parameter MEM_SIZE = `IOMEM_SIZE  
)(
    input wire clk,
    input wire rst,
    input wire[31:0] in_addr,
    output wire[31:0] out_rdata,
    input wire[3:0] in_wen,
    input wire[31:0] in_wdata,

    input wire[4:0] in_butten,
    input wire[15:0] in_swi,
    output reg[15:0] out_led,
    output reg[3:0] out_seg0_cs,
    output reg[7:0] out_seg0_data,
    output reg[3:0] out_seg1_cs,
    output reg[7:0] out_seg1_data
);
    parameter MEMRO_END=MEM_SIZE;

    //FPGA上switch、led、segment的接口实现
    reg[7:0] iomem[0:MEM_SIZE-1];

    wire[31:0] data0={24'b0,iomem[in_addr]};
	wire[31:0] data1={24'b0,iomem[in_addr+1]};
	wire[31:0] data2={24'b0,iomem[in_addr+2]};
	wire[31:0] data3={24'b0,iomem[in_addr+3]};
    
    assign out_rdata=(data0)|(data1<<8)|(data2<<16)|(data3<<24);

    assign out_led[7:0]=iomem[`LED0_7_ADDR];
    assign out_led[15:8]=iomem[`LED8_15_ADDR];
    assign out_seg0_cs=iomem[`SEG0CS_ADDR][3:0];
    assign out_seg0_data[7:0]=iomem[`SEG0DATA_ADDR];
    assign out_seg1_cs=iomem[`SEG1CS_ADDR][3:0];
    assign out_seg1_data[7:0]=iomem[`SEG1DATA_ADDR];

    integer i;
    always@(posedge clk or posedge rst)
        begin
            if(rst==`RST)
                for(i=0;i<MEM_SIZE;i=i+1)
                    iomem[i]<=8'h00;
            else
                begin
                iomem[`BUTTEN_ADDR]<={3'b000,in_butten};
                iomem[`SWITCH0_7_ADDR]<=in_swi[7:0];
                iomem[`SWITCH8_15_ADDR]<=in_swi[15:8];
                if(in_wen!=0 && in_addr>=MEMRO_END)
                    begin
                    iomem[in_addr]<=in_wdata[7:0];
                    iomem[in_addr]<=in_wdata[15:8];
                    iomem[in_addr]<=in_wdata[23:16];
                    iomem[in_addr]<=in_wdata[31:24];
                    end  
                end                      
        end
endmodule
