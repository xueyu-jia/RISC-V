module Hex2Seg7(
    input  [3:0] HEX,
    output reg [7:0] SEG7
);
    always@(*)begin
        case(HEX)          //hgfe_dcba
            4'h0 : SEG7 = 8'b0011_1111;
            4'h1 : SEG7 = 8'b0000_0110;
            4'h2 : SEG7 = 8'b0101_1011;
            4'h3 : SEG7 = 8'b0100_1111;
            4'h4 : SEG7 = 8'b0110_0110;
            4'h5 : SEG7 = 8'b0110_1101;
            4'h6 : SEG7 = 8'b0111_1101;
            4'h7 : SEG7 = 8'b0000_0111;
            4'h8 : SEG7 = 8'b0111_1111;
            4'h9 : SEG7 = 8'b0110_0111;
            4'ha : SEG7 = 8'b0111_0111;
            4'hb : SEG7 = 8'b0111_1100;
            4'hc : SEG7 = 8'b0011_1001;
            4'hd : SEG7 = 8'b0101_1110;
            4'he : SEG7 = 8'b0111_1001;
            4'hf : SEG7 = 8'b0111_0001;
        endcase
    end
endmodule

