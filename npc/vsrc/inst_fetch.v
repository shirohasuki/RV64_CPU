`timescale 1ns/10ps

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);

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
        pmem_read(pc_addr_i, inst_get);
    end

    assign inst_o = inst_get[31:0];
    
    always @(*) begin
        $display("1. pc_addr: %x\n2. inst: %x", pc_addr_i, inst_o);
        // $display("3. %b", inst_get);
        $display("===========================");
    end
    
endmodule