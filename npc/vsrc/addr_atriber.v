// module addr_atriber (
//     input               clk,
//     input               rst,

//     input wire[31:0]    inst_i,
//     // input             hold_flag_i,
//     input reg[63:0]     inst_addr_i, // 用于验证每级传递的pc
//     output reg[63:0]    inst_addr_o, // 用于验证每级传递的pc

//     //from ex_mem
//     input reg[2:0]      stall_flag_i,
//     input reg[2:0]      flush_flag_i,

//     input               ren_i,
//     input               wen_i,
//     input  reg[63:0]    raddr_i,
//     output reg[63:0]    rdata_o,

//     input  reg[63:0]    waddr_i,
//     input  reg[63:0]    wdata_i,
//     input  reg[7:0]     wmask_i,

//     input reg[63:0]     rd_wdata_i,
//     input reg[4:0]      rd_waddr_i,
//     input reg           reg_wen_i,  // to wb

//     // to ram(测试)
//     output reg[63:0]    ram_wdata_o,
//     output reg[63:0]    ram_waddr_o,

//     output reg[63:0]    ram_raddr_o,
//     input  reg[63:0]    ram_rdata_i, 

//     // to mem_wb
//     output reg[63:0]    rd_wdata_o,
//     output reg[4:0]     rd_waddr_o,
//     output reg          reg_wen_o,  // to wb

//     // to ctrl 
//     output reg[2:0]     stall_flag_o,
//     output reg[2:0]     flush_flag_o
// );



// endmodule