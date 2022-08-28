module pc_reg(
    input wire  rst,
    input wire  clk,
    input wire[63:0] jump_addr_i, 
    input wire       jump_en_i, 
    output reg[63:0] pc_o
);

    always @(posedge clk) begin
        // if (rst == 1'b0)    // 如果复位（默认低电平复位）
        //     pc_o <= 64'b0;  // PC指向64'b0
        // else if (jump_en_i)
        //     pc_o <= jump_addr_i;
        // else
        //     pc_o <= pc_o + 64'd4;
        pc_o <= ~rst ? 64'b0 :  // 如果复位(默认低电平复位，PC指向64'b0)
                jump_en_i ? jump_addr_i : 
                pc_o + 64'd4;
end

endmodule