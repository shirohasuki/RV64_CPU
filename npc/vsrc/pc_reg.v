import "DPI-C" function void get_pc(input longint pc);

module pc_reg(
    input  wire       rst,
    input  wire       clk,
    input  wire[63:0] jump_addr_i, 
    input  wire       jump_en_i, 
    output reg[63:0]  pc_o
);  
    // reg[63:0] pc_reg;
    
    always @(posedge clk) begin
        // if (rst == 1'b0)    // 如果复位（默认低电平复位）
        //     pc_o <= 32'b0;  // PC指向32'b0
        // else if (jump_en_i)
        //     pc_o <= jump_addr_i;
        // else
        //     pc_o <= pc_o + 32'd4;
        pc_o <= ~rst ? 64'h80000000: // 如果复位(默认低电平复位，PC指向0x80000000)
                jump_en_i ? jump_addr_i : 
                pc_o + 64'h4;
        // $display("%x", pc_o);
        // $display("rst = %d", rst);
        get_pc(pc_o);
    end

    // assign pc_reg = pc_o;
    // always @(*) begin
    //     $display("pc_reg:%x", pc_reg);
    //     get_pc(pc_reg);
    // end

endmodule