`include "./defines.v"

module ex_mem (
    input               clk,
    input               rst,
    
    // from ex
    input reg[63:0]    inst_addr_i, // 用于验证每级传递的pc

    input wire          ex_wen_i,
    input reg[63:0]     ex_waddr_i,
    input reg[63:0]     ex_wdata_i,
    input reg[7:0]      ex_wmask_i, // to mem

    input reg[63:0]    rd_wdata_i,
    input reg[4:0]     rd_waddr_i,
    input reg          reg_wen_i,  // to wb
    
    // to mem
    output reg[63:0]    inst_addr_o, // 用于验证每级传递的pc
    
    output              ren_o,
    output  reg[63:0]   raddr_o,
    output              wen_o,
    output  reg[63:0]   waddr_o,
    output  reg[63:0]   wdata_o,
    output  reg[7:0]    wmask_o,    // mem use

    output reg[63:0]    rd_wdata_o,
    output reg[4:0]     rd_waddr_o,
    output reg          reg_wen_o   // wb use
);

    // mem use
    dff_set #(64) dff1(clk, rst, 1'b0, 64'b0, inst_addr_i, inst_addr_o);

    dff_set #(1)  dff2(clk, rst, 1'b0, 1'b0, ex_wen_i, wen_o);

    dff_set #(64) dff3(clk, rst, 1'b0, 64'b0, ex_waddr_i, waddr_o);

    dff_set #(64) dff4(clk, rst, 1'b0, 64'b0, ex_wdata_i, wdata_o);

    dff_set #(8)  dff5(clk, rst, 1'b0, 8'b0, ex_wmask_i, wmask_o);

    // wb use
    dff_set #(64) dff6(clk, rst, 1'b0, 64'b0, rd_wdata_i, rd_wdata_o);

    dff_set #(5)  dff7(clk, rst, 1'b0, 5'b0, rd_waddr_i, rd_waddr_o);

    dff_set #(1)  dff8(clk, rst, 1'b0, 1'b0, reg_wen_i, reg_wen_o);

endmodule
// mem和wb模块中hold_flag_i固定为0，不进行冲刷