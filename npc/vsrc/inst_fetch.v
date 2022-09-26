`timescale 1ns/10ps
`include "./defines.v"

// import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void inst_fetch(input longint raddr, output longint rdata);
// import "DPI-C" function void get_regs(input logic [63:0] regs[]);
// import "DPI-C" function void get_pc(input longint pc);

module inst_fetch(
    // from pc
    input  wire[63:0] pc_addr_i,   
    
    // to if_id
    output wire[63:0] inst_addr_o,      
    output wire[31:0] inst_o       
);  

    reg[63:0] inst_get;


    assign inst_addr_o = pc_addr_i;

    always @(*) begin
        inst_fetch(pc_addr_i, inst_get); // 读指令
    // mem mem1(1'b1, 1'b0, pc_addr_i, inst_get, 64'b0, 64'b0, 8'b0);
    end

    assign inst_o = inst_get[31:0];
    
    always @(*) begin
        $display("IFU: 1. pc_addr: %x\nIFU: 2. inst: %x", pc_addr_i, inst_o);
        $display("===========================");
    end

    
endmodule