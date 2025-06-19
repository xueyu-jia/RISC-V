`include "Device_Macro.v"
`include "Macro.v"
`include "Mem_Macro.v"

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
    output wire[15:0] out_led,
    output wire[3:0] out_seg0_cs,
    output wire[7:0] out_seg0_data,
    output wire[3:0] out_seg1_cs,
    output wire[7:0] out_seg1_data
);
    localparam MEMRO_END=MEMRO_SIZE;

    //FPGA上switch、led、segment的接口实现
    reg[7:0] iomem[0:MEM_SIZE-1];

    wire[31:0] data0={24'b0,iomem[in_addr]};
	wire[31:0] data1={24'b0,iomem[in_addr+1]};
	wire[31:0] data2={24'b0,iomem[in_addr+2]};
	wire[31:0] data3={24'b0,iomem[in_addr+3]};
    
    assign out_rdata=(data0)|(data1<<8)|(data2<<16)|(data3<<24);
    
    /*外设映射规定：
      所有外设寄存器规定为32位
      LED_ADDR地址处的低16位表示16个led灯，为1时表示亮，为0时表示灭
      SEG0_ADDR地址处的低4位表示SEG0_CS，表示SEG0组四个数码管的片选信号
      SEG0_ADDR+1地址处的八位表示A-G、DP的亮灭，为1时表示亮，为0时表示灭
      SEG1_ADDR地址处的低4位表示SEG1_CS，表示SEG1组四个数码管的片选信号
      SEG1_ADDR+1地址处的八位表示A-G、DP的亮灭，为1时表示亮，为0时表示灭
      BUTTEN_ADDR地址处低五位表示五个按键，按下为1，松开为0
      SWITCH_ADDR地址处的八位表示开关0-7
      SWITCH_ADDR+1地址处的八位表示开关8-15
    */

    assign out_led={iomem[`LED_ADDR+1],iomem[`LED_ADDR]};
    assign out_seg0_cs=iomem[`SEG0_ADDR][3:0];
    assign out_seg0_data[7:0]=iomem[`SEG0_ADDR+1];
    assign out_seg1_cs=iomem[`SEG1_ADDR][3:0];
    assign out_seg1_data[7:0]=iomem[`SEG1_ADDR+1];

    integer i;
    always@(posedge clk or negedge rst)
        begin
            if(rst==`RST)
                for(i=0;i<MEM_SIZE;i=i+1)
                    iomem[i]<=8'h00;
            else
                begin
                iomem[`BUTTEN_ADDR]<={3'b000,in_butten};
                iomem[`SWITCH_ADDR]<=in_swi[7:0];
                iomem[`SWITCH_ADDR+1]<=in_swi[15:8];
                
                if(in_wen!=0 && in_addr>=MEMRO_END)
                    begin
                    if (in_wen[0]) iomem[in_addr]<=in_wdata[7:0];
                    if (in_wen[1]) iomem[in_addr+1]<=in_wdata[15:8];
                    if (in_wen[2]) iomem[in_addr+2]<=in_wdata[23:16];
                    if (in_wen[3]) iomem[in_addr+3]<=in_wdata[31:24];
                    end  
                end                      
        end
endmodule
