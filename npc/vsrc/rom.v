module rom(
    input wire[31:0] inst_addr_i,
    output reg[31:0] inst_o
);
    
    reg[31:0] rom_mem[0:4095]; // 4096个32b的空间,深度为4096
    
    always @(*) begin
        inst_o = rom_mem[inst_addr_i >> 2]; // inst_addr_i除以4
    end
    
endmodule
