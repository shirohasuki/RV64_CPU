
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

    // from AXI
    // input wire              ram_ravalid_i,
    // input wire              ram_rdready_i,

    // input wire              ram_wavalid_i,
    // input wire              ram_wdvalid_i,

    input [63:0]            ram_waddr_i,
    input [63:0]            ram_wdata_i,

    input [63:0]            ram_raddr_i,

    // to AXI
    // output wire              ram_raready_o,
    // output wire              ram_rdready_o,

    // output wire              ram_waready_o,
    // output wire              ram_wdready_o,

    output reg[63:0]            ram_rdata_o
);
  
    reg[63:0]  ram_mem[0:4095]; // 4096个64b的空间,深度为4096


    reg[63:0]  waddr = ram_waddr_i;
    reg[63:0]  raddr = ram_raddr_i;

        

// =========== 写ram
    always @(*) begin
        ram_mem[waddr[13:2]] = ram_wdata_i;
    end

        
// =========== 读ram
    always @(*) begin
        ram_rdata_o = ram_mem[raddr[13:2]];
        // $display("ram_rdata_o: %x", ram_rdata_o);
        // $display("raddr_i: %x", ram_raddr_i);
        // $display("raddr: %d", raddr[13:2]);
    end

    // always @(posedge clk) begin 
        // $display("======= ram list ==========");
        // for (integer i = 0; i < 4095; i++) begin
        //     if (ram_mem[i] != 'b0) begin
        //         $display("rom[%4d] | %8x", i, ram_mem[i]);
        //     end
        // end
        // $display("===========================");
    // end
endmodule