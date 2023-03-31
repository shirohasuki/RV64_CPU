// =================  version 1 ==================//
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


// `define MTRACE 1

// =================  version 2 ==================//
module ram (
    input wire              clk,
    input wire              rst,

    // from AXI
    // input wire              ram_ravalid_i,
    // input wire              ram_rdready_i,

    // input wire              ram_wavalid_i,
    // input wire              ram_wdvalid_i,

    input [31:0]            ram_waddr_i,
    input [63:0]            ram_wdata_i,
    input [63:0]            ram_wmask_i,

    input [31:0]            ram_raddr_i,

    input ram_ren_i,
    input ram_wen_i,

    // to AXI
    // output wire              ram_raready_o,
    // output wire              ram_rdready_o,

    // output wire              ram_waready_o,
    // output wire              ram_wdready_o,

    output reg[63:0]            ram_rdata_o,
    output reg                  ram_rready_o,
    output reg                  ram_wready_o,
    output reg                  ram_bvalid_o,

    // from if
    input  [63:0]   inst_addr_i,
    output [63:0]   inst_o
);
  
    // reg[63:0]  ram_mem[0:4095]; // 4096个64b的空间,深度为4096
    reg[63:0]  ram_mem[0:1048575]; // 1048576个64b的空间,深度为1048576(2^20)


    reg[31:0]  waddr = ram_waddr_i;
    reg[31:0]  raddr = ram_raddr_i;

    assign ram_rready_o = 1'b1;
    assign ram_wready_o = 1'b1;

// =========== if 取指
    always @(*) begin
        case (inst_addr_i[2])
            1'b0: begin
                inst_o = {32'b0, ram_mem[inst_addr_i[22:3]][31:0]};
                `ifdef MTRACE $display("raddr:%h  rstart: 00, rdata:%x[IF]", inst_addr_i[22:0], inst_o);  `endif
            end
            1'b1: begin
                inst_o = {32'b0, ram_mem[inst_addr_i[22:3]][63:32]};                
                `ifdef MTRACE $display("raddr:%h  rstart: 01, rdata:%x[IF]", inst_addr_i[22:0], inst_o);  `endif
            end
        endcase
    end

// =========== 读ram
    always @(*) begin
        if (ram_ren_i == 1'b1) begin
            // ram_rready_o <= 1'b1;
            case (raddr[2:0]) 
                3'b000: begin
                    ram_rdata_o = ram_mem[raddr[22:3]];
                    `ifdef MTRACE $display("raddr:%h  rstart:000, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b001: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][7:0], ram_mem[raddr[22:3]][63:8]};
                    `ifdef MTRACE $display("raddr:%h  rstart:001, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b010: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][15:0], ram_mem[raddr[22:3]][63:16]};
                    `ifdef MTRACE $display("raddr:%h  rstart:010, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b011: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][23:0], ram_mem[raddr[22:3]][63:24]};
                    `ifdef MTRACE $display("raddr:%h  rstart:011, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b100: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][31:0], ram_mem[raddr[22:3]][63:32]};
                    `ifdef MTRACE $display("raddr:%h  rstart:100, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b101: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][39:0], ram_mem[raddr[22:3]][63:40]};
                    `ifdef MTRACE $display("raddr:%h  rstart:101, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b110: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][47:0], ram_mem[raddr[22:3]][63:48]};
                    `ifdef MTRACE $display("raddr:%h  rstart:110, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
                3'b111: begin
                    ram_rdata_o = {ram_mem[raddr[22:3]+1][55:0], ram_mem[raddr[22:3]][63:56]};
                    `ifdef MTRACE $display("raddr:%h  rstart:111, rdata:%x", raddr[22:0], ram_rdata_o); `endif
                end
            endcase
        end
        else begin
            ram_rdata_o  = 64'b0;
            // ram_rready_o <= 1'b0;
        end
    end

// =========== 写ram
    always @(posedge clk) begin
        if (ram_wen_i) begin
            ram_bvalid_o <= 1'b1;
            case (waddr[2:0]) 
                3'b000: begin
                    ram_mem[waddr[22:3]] <= ram_wdata_i | (ram_mem[waddr[22:3]] & ~ram_wmask_i); // 参考ram_mem[A[13:2]] <= (D & bwen) | (ram_mem[A[13:2]] & ~bwen); 
                    `ifdef MTRACE $display("waddr:%h  wstart:000, wdata:%x", waddr[22:3], ram_wdata_i);  `endif
                end
                3'b001: begin
                    {ram_mem[raddr[22:3]+1][7:0], ram_mem[waddr[22:3]][63:8]} <= ram_wdata_i | ({ram_mem[raddr[22:3]+1][7:0], ram_mem[waddr[22:3]][63:8]} & ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:001, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
                3'b010: begin
                    {ram_mem[waddr[22:3]+1][15:0], ram_mem[waddr[22:3]][63:16]} <= ram_wdata_i | ({ram_mem[waddr[22:3]+1][15:0], ram_mem[waddr[22:3]][63:16]} & ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:010, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
                3'b011: begin
                    {ram_mem[waddr[22:3]+1][23:0], ram_mem[waddr[22:3]][63:24]} <= ram_wdata_i | ({ram_mem[waddr[22:3]+1][23:0], ram_mem[waddr[22:3]][63:24]} & ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:011, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
                3'b100: begin
                    {ram_mem[waddr[22:3]+1][31:0], ram_mem[waddr[22:3]][63:32]} <= ram_wdata_i | ({ram_mem[waddr[22:3]+1][31:0], ram_mem[waddr[22:3]][63:32]} & ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:100, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
                3'b101: begin
                    {ram_mem[raddr[22:3]+1][39:0], ram_mem[waddr[22:3]][63:40]} <= ram_wdata_i | ({ram_mem[waddr[22:3]+1][39:0], ram_mem[waddr[22:3]][63:40]}& ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:101, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
                3'b110: begin
                    {ram_mem[waddr[22:3]+1][47:0], ram_mem[waddr[22:3]][63:48]} <= ram_wdata_i | ({ram_mem[waddr[22:3]+1][47:0], ram_mem[waddr[22:3]][63:48]}& ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:110, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
                3'b111: begin
                    {ram_mem[waddr[22:3]+1][55:0], ram_mem[waddr[22:3]][63:56]} <= ram_wdata_i | ({ram_mem[waddr[22:3]+1][55:0], ram_mem[waddr[22:3]][63:56]}& ~ram_wmask_i);
                    `ifdef MTRACE $display("waddr:%h  wstart:111, wdata:%x", waddr[22:0], ram_wdata_i);  `endif
                end
            endcase
        end
        else begin
            ram_bvalid_o <= 1'b0;
        end
    end

    always @(posedge clk) begin 
`ifdef MTRACE
        // $display("======= ram list ==========");
        // for (integer i = 0; i < 1000; i++) begin
        //     if (ram_mem[i] != 'b0) begin
        //         $display("rom[%4d] | %8x", i, ram_mem[i]);
        //     end
        // end
        // $display("===========================");
`endif
    end
endmodule



// =================  version 3 ==================//
// 宽度为64b，深度为4096

// module ram #(
//     parameter Bits = 64,
//     parameter Word_Depth = 4096,
//     parameter Add_Width = 64,//12, // 2^12 = 4096
//     parameter Wen_Width = 64
// )
// ( 
//     input                 CLK,  // 时钟
    
//     // from mem
//     input                 CEN,  // 使能信号, 低电平有效
//     input                 WEN,  // 写使能信号, 低电平有效
//     input [Wen_Width-1:0] BWEN, // 写掩码信号, 掩码粒度为1bit, 低电平有效
//     input [Add_Width-1:0] A,    // 读写地址
//     input [Bits-1:0]      D,    // 写数据
//     output reg [Bits-1:0] Q,    // 读数据

//     // from if
//     input  [63:0]   inst_addr_i,
//     output [63:0]   inst_o
// );

//     wire cen  = ~CEN;
//     wire wen  = ~WEN;
//     wire [Wen_Width-1:0] bwen = ~BWEN;

//     reg [Bits-1:0] ram_mem [0:Word_Depth-1];

//     always @(*) begin
//         inst_o = ram_mem[inst_addr_i[13:2]];
//     end // if

//     always @(posedge CLK) begin
//         if(cen && wen) begin
//             ram_mem[A[13:2]] <= (D & bwen) | (ram_mem[A[13:2]] & ~bwen); // 写入数据
//         end
//         Q <= cen && !wen ? ram_mem[A[13:2]] : {2{$random}}; // 读数据 如果使能且非写入，则读出ram[A]，否则随机数
//     end // mem

// endmodule