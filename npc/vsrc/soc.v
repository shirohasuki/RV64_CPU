module soc (
    input  wire clk, 
    input  wire rst 
);
    // riscv 2 rom
    wire[31:0] riscv_inst_addr_o;
    // rom 2 top
    wire[31:0] rom_inst_o;

    riscv riscv_inst (
        .clk          ( clk             ),
        .rst          ( rst             ),
        .inst_i       ( rom_inst_o      ),
        .inst_addr_o  (riscv_inst_addr_o)
    );
    rom rom_inst (
        .inst_addr_i  (riscv_inst_addr_o),
        .inst_o       ( rom_inst_o      )
    );

endmodule //soc

    
