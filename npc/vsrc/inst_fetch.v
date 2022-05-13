module inst_fetch(
    input wire[31:0] pc_addr_i,         // from pc
    input wire[31:0] rom_inst_i,        // from rom
    output wire[31:0] if2rom_addr_o,    // to rom
    output wire[31:0] inst_addr_o,      // to if_id
    output wire[31:0] inst_o            // to if_id
); 

assign if2rom_addr_o = pc_addr_i;
assign inst_addr_o = pc_addr_i;
assign inst_o = rom_inst_i;

endmodule