module frediv #(
    parameter DIV_RATIO = 2  // 分频比（偶数）
)(
    input  clk,      // 原时钟
    input  rst,    // 复位（低有效）
    output reg clk_out // 分频后时钟
);

reg [31:0] counter;  // 计数器

always @(posedge clk or negedge rst) begin
    if (rst==`RST) begin
        counter <= 0;
        clk_out <= 0;
    end
    else begin
        if (counter == (DIV_RATIO/2 - 1)) begin
            clk_out <= ~clk_out;  // 翻转时钟
            counter <= 0;
        end
        else begin
            counter <= counter + 1;
        end
    end
end

endmodule