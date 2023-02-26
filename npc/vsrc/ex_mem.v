`include "./defines.v"

module ex_mem (
    input               clk,
    input               rst,
    
    // from ctrl
    input wire      stall_flag_i,
    input wire      flush_flag_i,

    input reg[31:0]     inst_i,
    input reg[63:0]     inst_addr_i, // 用于验证每级传递的pc

    input reg           ex_ren_i,
    input reg[63:0]     ex_raddr_i,

    input reg           ex_wen_i,
    input reg[63:0]     ex_waddr_i,
    input reg[63:0]     ex_wdata_i,
    input reg[7:0]      ex_wmask_i, // mem use

    input reg[63:0]     rd_wdata_i,
    input reg[4:0]      rd_waddr_i,
    input reg           reg_wen_i,  // wb use

    input reg           load_inst_i,  // mem use
    output reg           load_inst_o,  // mem use
    input reg           save_inst_i,  // mem use
    output reg           save_inst_o,  // mem use

    // input wire[63:0] csr_data_i,
    // input wire[11:0] csr_waddr_i,
    // input wire       csr_wen_i,
    
    // to mem
    // output reg[2:0]     stall_flag_o, // stall 信号
    // output reg[2:0]     flush_flag_o,

    output reg[31:0]    inst_o,
    output reg[63:0]    inst_addr_o, // 用于验证每级传递的pc
    
    output  reg         ren_o,
    output  reg[63:0]   raddr_o,
    output  reg         wen_o,
    output  reg[63:0]   waddr_o,
    output  reg[63:0]   wdata_o,
    output  reg[7:0]    wmask_o,    // mem use

    output reg[63:0]    rd_wdata_o,
    output reg[4:0]     rd_waddr_o,
    output reg          reg_wen_o   // wb use

    // output wire[63:0] csr_data_o,
    // output wire[11:0] csr_waddr_o,
    // output wire       csr_wen_o
);

    // mem use
    dff_set #(32) dff0(clk, rst, flush_flag_i, stall_flag_i, `INST_NOP, inst_i, inst_o);

    dff_set #(64) dff1(clk, rst, flush_flag_i, stall_flag_i, 64'b0, inst_addr_i, inst_addr_o);

    dff_set #(1)  dff2(clk, rst, flush_flag_i, stall_flag_i, 1'b0, ex_ren_i, ren_o);

    dff_set #(64) dff3(clk, rst, flush_flag_i, stall_flag_i, 64'b0, ex_raddr_i, raddr_o);

    dff_set #(1)  dff4(clk, rst, flush_flag_i, stall_flag_i, 1'b0, ex_wen_i, wen_o);

    dff_set #(64) dff5(clk, rst, flush_flag_i, stall_flag_i, 64'b0, ex_waddr_i, waddr_o);

    dff_set #(64) dff6(clk, rst, flush_flag_i, stall_flag_i, 64'b0, ex_wdata_i, wdata_o);

    dff_set #(8)  dff7(clk, rst, flush_flag_i, stall_flag_i, 8'b0, ex_wmask_i, wmask_o);

    // wb use
    dff_set #(64) dff8(clk, rst, flush_flag_i, stall_flag_i, 64'b0, rd_wdata_i, rd_wdata_o);

    dff_set #(5)  dff9(clk, rst, flush_flag_i, stall_flag_i, 5'b0,  rd_waddr_i, rd_waddr_o);

    dff_set #(1)  dff10(clk, rst, flush_flag_i, stall_flag_i, 1'b0, reg_wen_i, reg_wen_o);

    // others
    // dff_set #(3)  dff11(clk, rst, 1'b0, 1'b0, 3'b0, stall_flag_i, stall_flag_o);
    dff_set #(1)  dff11(clk, rst, flush_flag_i, stall_flag_i, 1'b0, load_inst_i, load_inst_o);
    dff_set #(1)  dff12(clk, rst, flush_flag_i, stall_flag_i, 1'b0, save_inst_i, save_inst_o);
    // dff_set #(3)  dff12(clk, rst, 1'b0, 1'b0, 3'b0, flush_flag_i, flush_flag_o);

    // dff_set #(64) dff13(clk, rst, flush_flag_i, stall_flag_i,  64'b0, csr_data_i, csr_data_o);

    // dff_set #(12) dff14(clk, rst, flush_flag_i, stall_flag_i,  12'b0, csr_waddr_i, csr_waddr_o);

    // dff_set #(1) dff15(clk, rst, flush_flag_i, stall_flag_i,  1'b0, csr_wen_i, csr_wen_o);

endmodule
// mem和wb模块中flush_flag_i固定为0，不进行冲刷