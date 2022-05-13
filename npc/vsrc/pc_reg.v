module pc_reg(
    input wire  rst,
    input wire  clk,
    output reg[31:0] pc_o
);

always @(posedge clk) begin
    if (rst == 1'b0)    // 如果复位（默认低电平复位）
        pc_o <= 32'b0;  // PC指向32'b0
    else
        pc_o <= pc_o + 32'd4;

end

endmodule