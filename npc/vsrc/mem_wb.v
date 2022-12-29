`include "./defines.v"

module mem_wb(
    input  wire       clk,
    input  wire       rst,
 
    input  wire[63:0]   inst_addr_i,    
    output wire[63:0]   inst_addr_o,

   // input reg[63:0]    rd_wdata_i,
    input reg[4:0]     rd_waddr_i,
    input reg          reg_wen_i,  // to wb

    //output reg[63:0]    rd_wdata_o,
    output reg[4:0]     rd_waddr_o,
    output reg          reg_wen_o  // to wb
);

    // dff_set #(32) dff1(clk, rst, 1'b0, `INST_NOP, inst_i, inst_o);

    dff_set #(64) dff1(clk, rst, 1'b0, 64'b0, inst_addr_i, inst_addr_o);


 //   dff_set #(64) dff6(clk, rst, 1'b0, 64'b0, rd_wdata_i, rd_wdata_o);

    dff_set #(5)  dff2(clk, rst, 1'b0, 5'b0, rd_waddr_i, rd_waddr_o);

    dff_set #(1)  dff3(clk, rst, 1'b0, 1'b0, reg_wen_i, reg_wen_o);


endmodule 
