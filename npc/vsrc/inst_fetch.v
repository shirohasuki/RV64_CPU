`timescale 1ns/10ps
module inst_fetch(
    // from pc
    input wire[63:0] pc_addr_i,   

    // from rom      
    input wire[63:0] rom2if_inst_i,  
    // to rom      
    output wire[63:0] if2rom_addr_o,    
    
    // to if_id
    output wire[63:0] inst_addr_o,      
    output wire[63:0] inst_o            
); 

    assign if2rom_addr_o = pc_addr_i;

    assign inst_addr_o = pc_addr_i;
    
    assign inst_o = rom2if_inst_i;

endmodule