// import "DPI-C" function void get_pc(input longint pc);

module pc_reg(
    input  wire       rst,
    input  wire       clk,
    input  wire[63:0] jump_addr_i, 
    input  wire       jump_en_i, 
    input  wire       flush_en_i,
    input  wire       stall_en_i,
    output reg[63:0]  pc_o
    // output reg[63:0]  pc_reg_o
);  
    // reg[63:0] pc_reg;
    
    always @(posedge clk) begin
        if (rst == 1'b0)    // 如果复位（默认低电平复位）
            pc_o <= 64'h80000000;  // PC指向0x80000000
        else if (jump_en_i)
            pc_o <= jump_addr_i;
        else if (stall_en_i) begin
            pc_o <= pc_o;
            // $display("pc = %h", pc_o);
        end

        else
            pc_o <= pc_o + 64'd4;
        // pc_o <= ~rst ? 64'h80000000: // 如果复位(默认低电平复位，PC指向0x80000000)
        //         jump_en_i ? jump_addr_i : 
        //         pc_o + 64'h4;

    end
    
endmodule