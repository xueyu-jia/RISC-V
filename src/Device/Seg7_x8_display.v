`include"Macro.v"

module SEG7_x8_display(
    input clk,
    input rst,
    input  [7 :0] SEG7_en,
    input  [31:0] SEG7_data,
    //IO
    output [3 :0] SEG7_0_en_pin    ,
    output [7 :0] SEG7_0_data_pin   ,
    output [3 :0] SEG7_1_en_pin     ,
    output [7 :0] SEG7_1_data_pin   
);
    reg [3 :0] SEG7_1_en_r,SEG7_0_en_r;
    reg [7 :0] SEG7_1_data_r,SEG7_0_data_r;
    assign SEG7_1_en_pin = SEG7_1_en_r & SEG7_en[7:4];
    assign SEG7_0_en_pin = SEG7_0_en_r & SEG7_en[3:0];
    assign SEG7_1_data_pin = SEG7_1_data_r;
    assign SEG7_0_data_pin = SEG7_0_data_r;
    //logic
    wire [7 :0] SEG7_1_LED_r [3:0];
    wire [7 :0] SEG7_0_LED_r [3:0];
    reg  [31:0] count;
    reg  [1 :0] SEG_count;
    always@(posedge clk or negedge rst) begin
        if(rst==`RST)begin
            SEG7_1_en_r <= 4'h0;
            SEG7_0_en_r <= 4'h0;
            count       <= 32'b0;
            SEG_count   <= 2'd0;
        end
        else if(count < 32'd10000) begin count <= count +1; end
        else begin
            count       <= 32'b0;
            SEG_count <= SEG_count + 2'd1;
            SEG7_1_en_r[0] <= (SEG_count == 2'b00) ? 1'b1 : 1'b0; SEG7_0_en_r[0] <= (SEG_count == 2'b00) ? 1'b1 : 1'b0;
            SEG7_1_en_r[1] <= (SEG_count == 2'b01) ? 1'b1 : 1'b0; SEG7_0_en_r[1] <= (SEG_count == 2'b01) ? 1'b1 : 1'b0;
            SEG7_1_en_r[2] <= (SEG_count == 2'b10) ? 1'b1 : 1'b0; SEG7_0_en_r[2] <= (SEG_count == 2'b10) ? 1'b1 : 1'b0;
            SEG7_1_en_r[3] <= (SEG_count == 2'b11) ? 1'b1 : 1'b0; SEG7_0_en_r[3] <= (SEG_count == 2'b11) ? 1'b1 : 1'b0;
            SEG7_1_data_r <= SEG7_1_LED_r [SEG_count];
            SEG7_0_data_r <= SEG7_0_LED_r [SEG_count];
        end
    end

    Hex2Seg7 SEG7_1_3(.HEX(SEG7_data[19:16]), .SEG7(SEG7_1_LED_r[3]));
    Hex2Seg7 SEG7_1_2(.HEX(SEG7_data[23:20]), .SEG7(SEG7_1_LED_r[2]));
    Hex2Seg7 SEG7_1_1(.HEX(SEG7_data[27:24]), .SEG7(SEG7_1_LED_r[1]));
    Hex2Seg7 SEG7_1_0(.HEX(SEG7_data[31:28]), .SEG7(SEG7_1_LED_r[0]));
    Hex2Seg7 SEG7_0_3(.HEX(SEG7_data[3:0]), .SEG7(SEG7_0_LED_r[3]));
    Hex2Seg7 SEG7_0_2(.HEX(SEG7_data[7:4]), .SEG7(SEG7_0_LED_r[2]));
    Hex2Seg7 SEG7_0_1(.HEX(SEG7_data[11: 8]), .SEG7(SEG7_0_LED_r[1]));
    Hex2Seg7 SEG7_0_0(.HEX(SEG7_data[15:12]), .SEG7(SEG7_0_LED_r[0]));
endmodule

