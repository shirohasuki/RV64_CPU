// module rom (
//     input clk,
//     input rst,

//     input  wire[63:0] inst_addr_i,
//     output reg[63:0]  inst_o,
    
//     output  wire[63:0] mem_rdata_o,
//     input   reg[63:0]  mem_raddr_i,

//     input wire          mem_w_cs, 
//     input wire[63:0]    mem_waddr_i,
//     input wire[63:0]    mem_wdata_i
// );
    
//     reg[63:0] rom_mem[0:4095]; // 4096个64b的空间,深度为4096

//     always @(*) begin
//         inst_o = rom_mem[inst_addr_i[13:2]]; // inst_addr_i除以8
//         // $display("%b, %d", inst_o, inst_addr_i >> 2);
//         // $display("%b, %d", inst_o, inst_addr_i[13:2]);
//         mem_rdata_o = rom_mem[mem_raddr_i[13:2]];

//     end

//     always @(posedge clk) begin
//         if (mem_w_cs == 1'b0) begin
//             rom_mem[mem_waddr_i[13:2]] <= mem_wdata_i;
//         end // mem写rom片选有效
//         else begin
//             rom_mem[mem_waddr_i[13:2]] <= rom_mem[mem_waddr_i[13:2]];
//         end
//     end

//     always @(*) begin
//             // $display("======= rom list ==========");
//         // for (integer i = 0; i < 4095; i++) begin
//         //     if (rom_mem[i] != 'b0) begin
//         //         $display("rom[%4d] | %8x", i, rom_mem[i]);
//         //     end
//         // end
//         // $display("===========================");
//     end
        

    
// endmodule

// module rom(
//     input wire[31:0] inst_addr_i,
//     output reg[31:0] inst_o
// );
    
//     reg[31:0] rom_mem[0:4095]; // 4096个64b的空间,深度为4096
    
//     always @(*) begin
//         inst_o = rom_mem[inst_addr_i >> 2]; // inst_addr_i除以4
//         //$display("%b, %d", inst_o, inst_addr_i >> 2);
//     end
    
// endmodule

// import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
// import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte mask);


// module rom (
//     input             ren,
//     input             wen,
//     input  reg [63:0] raddr,
//     output reg [63:0] rdata,
//     input  reg [63:0] waddr,
//     input  reg [63:0] wdata,
//     input  reg [7:0]  mask
// );

//     always @(*) begin
//         if (ren) pmem_read(raddr, rdata);
//         else rdata = 64'b0;
//         if (wen) pmem_write(waddr, wdata, mask);
//     end
// endmodule

// module rom(
//     input wire[63:0] addr_i,    // addr
//     output reg[31:0] data_o         // read data
// );

//     reg[63:0] rom_mem[0:4095];


//     always @ (*) begin
//         data_o = rom_mem[addr_i[31:2]][31:0];
//     end

// endmodule