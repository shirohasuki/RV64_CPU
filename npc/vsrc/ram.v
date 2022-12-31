
// module ram (
//     input wire              clk,
//     input wire              rst,

//     input wire              flush_flag_i,

//     // from ex
//     input wire              mem_wen,
//     input reg[63:0]         mem_waddr_i,
//     input reg[63:0]         mem_wdata_i,
//     input reg[7:0]          mem_wmask,

//     // from id
//     input wire              mem_ren,
//     input reg[63:0]         mem_raddr_i, 
    
//     // to ex
//     output reg[63:0]        mem_rdata_o 
// );
  
//     mem mem1(clk, rst, flush_flag_i, mem_ren, mem_wen, mem_raddr_i, mem_rdata_o, mem_waddr_i, mem_wdata_i, mem_wmask);

// endmodule


module ram (
    input wire              clk,
    input wire              rst,

    input wire              flush_flag_i,

    // from ex
    input wire              ram_wen_i,
    input reg[63:0]         ram_waddr_i,
    input reg[63:0]         ram_wdata_i,
    input reg[7:0]          ram_wmask_i,

    // from id
    input wire              ram_ren_i,
    input reg[63:0]         ram_raddr_i, 
    
    // to ex
    output reg[63:0]        ram_rdata_o 
);
  
   

endmodule