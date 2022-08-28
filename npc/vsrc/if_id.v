`include "./vsrc/defines.v"

module if_id (
    input wire clk,
    input wire rst,
    input wire hold_flag_i, // from ctrl 
    input wire[63:0] inst_i,    
    input wire[63:0] inst_addr_i,    
    output wire[63:0] inst_addr_o,    
    output wire[63:0] inst_o
);

    dff_set #(64) dff1(clk, rst, hold_flag_i, `INST_NOP, inst_i, inst_o);

    dff_set #(64) dff2(clk, rst, hold_flag_i, 64'b0, inst_addr_i, inst_addr_o);

endmodule 


