//回写模块，将数据写入寄存器中
module Wbu(
    input wire[4:0] in_rd_id,
    input wire in_rd_we,
    input wire[31:0] in_data,

    output wire[31:0] out_data,
    output wire[4:0] out_rd_id,
    output wire out_rd_we
);
    assign out_data=in_data;
    assign out_rd_id=in_rd_id;

    assign out_rd_we=in_rd_we;
endmodule