`include "/home/shiroha/Code/ysyx/ysyx-workbench/npc/vsrc/defines.v"

module if_id (
    input wire clk,
    input wire rst,
    input wire[31:0] inst_i,    
    input wire[31:0] inst_addr_i,    
    output wire[31:0] inst_addr_o,    
    output wire[31:0] inst_o
);

    dff_set #(32) dff1(clk, rst, `INST_NOP_OP, inst_i, inst_o);

    dff_set #(32) dff2(clk, rst, 32'b0, inst_addr_i, inst_addr_o);

endmodule 


