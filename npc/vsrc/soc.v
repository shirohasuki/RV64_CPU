module soc (
    input  wire clk, 
    input  wire rst 
);
    // top 2 rom
    wire[31:0] top_inst_addr_o;
    // rom 2 top
    wire[31:0] rom_inst_o;

    top top_inst (
        .clk          ( clk             ),
        .rst          ( rst             ),
        .inst_i       ( rom_inst_o      ),
        .inst_addr_o  ( top_inst_addr_o )
    );
    rom rom_inst (
        .inst_addr_i ( top_inst_addr_o ),
        .inst_o      ( rom_inst_o      )
    );

endmodule //soc

    
