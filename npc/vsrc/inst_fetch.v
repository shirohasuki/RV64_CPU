// `timescale 1ns/10ps
`include "./defines.v"

// import "DPI-C" function void inst_fetch(input longint raddr, output longint rdata);

module inst_fetch(
    // from pc
    input  wire[63:0] pc_addr_i,   
     // from ram
    input  wire[63:0] ram_inst_i,  
    // to if_id and rom
    output wire[63:0] inst_addr_o,  
    // to if_id     
    output wire[31:0] inst_o,
    output wire       ren_o
);  

    reg[63:0] inst_get = ram_inst_i;
    assign ren_o = 1'b1; 

    assign inst_addr_o = pc_addr_i;

    // always @(*) begin
    //     // inst_fetch(pc_addr_i, inst_get); // 读指令
    //     // $display("hello");
    // end

    assign inst_o = inst_get[31:0];
    
    always @(*) begin
        $display("[inst_fetch] pc_addr: %x inst: %x", pc_addr_i[31:0], inst_o);
    end

    
endmodule