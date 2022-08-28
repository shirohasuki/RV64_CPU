module rom(
    input wire[63:0] inst_addr_i,
    output reg[63:0] inst_o
);
    
    reg[63:0] rom_mem[0:4095]; // 4096个64b的空间,深度为4096
    
    always @(*) begin
        inst_o = rom_mem[inst_addr_i >> 2]; // inst_addr_i除以4
    end
    
endmodule
