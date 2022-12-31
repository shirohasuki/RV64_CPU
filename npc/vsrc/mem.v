
// import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
// import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte mask);


// module mem (clk, rst, hold_flag_i, ren_i, wen_i, raddr_i, rdata_o, waddr_i, wdata_i, wmask_i);
//     input             clk;
//     input             rst;

//     input             hold_flag_i;

//     input             ren_i;
//     input             wen_i;
//     input  reg[63:0]  raddr_i;
//     output reg[63:0]  rdata_o;

//     input  reg[63:0]  waddr_i;
//     input  reg[63:0]  wdata_i;
//     input  reg[7:0]   wmask_i;

//     always @(posedge clk) begin
//         // if (ren || rst == 1'b1 || hold_flag_i == 1'b0) pmem_read(raddr, rdata);
//         if (ren_i) pmem_read(raddr_i, rdata_o); 
//         else rdata_o = 64'b0;

//         if (wen_i) pmem_write(waddr_i, wdata_i, wmask_i);

//         if ((ren_i && wen_i) && (raddr_i == waddr_i)) begin
//             //$display("nb");
//             rdata_o = wdata_i;  // 处理读写冲突
//         end
        
//         //if (ren && wen) $display("nb");
//     end
// endmodule

    
import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte mask);


module mem (
    input               clk,
    input               rst,

    // input             hold_flag_i,
    input reg[63:0]     inst_addr_i, // 用于验证每级传递的pc
    output reg[63:0]    inst_addr_o, // 用于验证每级传递的pc

    //from ex_mem
    input reg[2:0]      stall_flag_i,

    input               ren_i,
    input               wen_i,
    input  reg[63:0]    raddr_i,
    output reg[63:0]    rdata_o,

    input  reg[63:0]    waddr_i,
    input  reg[63:0]    wdata_i,
    input  reg[7:0]     wmask_i,

    input reg[63:0]     rd_wdata_i,
    input reg[4:0]      rd_waddr_i,
    input reg           reg_wen_i,  // to wb

    // to mem_wb
    output reg[63:0]    rd_wdata_o,
    output reg[4:0]     rd_waddr_o,
    output reg          reg_wen_o,  // to wb

    // to ctrl 
    output reg[2:0]     stall_flag_o
);

    assign inst_addr_o = inst_addr_i;
    assign reg_wen_o  = reg_wen_i;
    assign rd_wdata_o = rd_wdata_i;
    assign rd_waddr_o = rd_waddr_i;

    assign stall_flag_o = stall_flag_i; // 再给ctrl一个周期的stall信号

    always @(posedge clk) begin
        // if (ren || rst == 1'b1 || hold_flag_i == 1'b0) pmem_read(raddr, rdata);
        if (ren_i) pmem_read(raddr_i, rdata_o); 
        else rdata_o = 64'b0;

        if (wen_i) pmem_write(waddr_i, wdata_i, wmask_i);

        if ((ren_i && wen_i) && (raddr_i == waddr_i)) begin
            rdata_o = wdata_i;  // 处理读写冲突
        end
        

        //if (ren && wen) $display("nb");
    end

endmodule