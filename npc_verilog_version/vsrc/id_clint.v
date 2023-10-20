`include "./defines.v"

module id_clint (
    input  wire       clk,
    input  wire       rst,
    input  wire       flush_flag_i, // from ctrl 
    input  wire       stall_flag_i, // from ctrl 
    input  wire[31:0] inst_i,    
    input  wire[63:0] inst_addr_i,    // pc
    output wire[31:0] inst_o,
    output wire[63:0] inst_addr_o
);

    dff_set #(32) dff1(clk, rst, flush_flag_i, stall_flag_i, `INST_NOP, inst_i, inst_o);

    dff_set #(64) dff2(clk, rst, flush_flag_i, stall_flag_i, 64'b0, inst_addr_i, inst_addr_o);

endmodule 
