`timescale 1ns/1ps

module soc (
    input  wire clk, 
    input  wire rst 
);
    // riscv 2 rom
    wire[31:0] riscv_inst_addr_o;
    // rom 2 riscv
    wire[31:0] rom_inst_o;
    // riscv 2 ram
    wire riscv_w_en;
    wire[11:0] riscv_w_addr_o;
    wire[31:0] riscv_w_data_o;
    wire riscv_r_en;   
    wire[11:0] riscv_r_addr_o;
    // ram 2 riscv
    wire[31:0] ram_r_data_o;  
    /*
    riscv riscv_inst (
        .clk          ( clk             ),
        .rst          ( rst             ),
        .inst_i       ( rom_inst_o      ),
        .inst_addr_o  ( riscv_inst_addr_o)
    );*/
    
    riscv riscv_inst(
        .clk            ( clk            ),
        .rst            ( rst            ),
        .inst_i         ( rom_inst_o         ),
        .inst_addr_o    ( riscv_inst_addr_o    ),
        .mem_r_data_i  ( ram_r_data_o  ),
        .mem_r_req_o   ( riscv_r_en    ),
        .mem_r_addr_o  ( riscv_r_addr_o  ),
        .mem_w_req_o   ( riscv_w_en  ),
        .mem_w_addr_o  ( riscv_w_addr_o  ),
        .mem_w_data_o  (riscv_w_data_o  )
    );


    rom rom_inst (
        .inst_addr_i  (riscv_inst_addr_o),
        .inst_o       ( rom_inst_o      )
    );

    ram ram_inst(
        .clk      ( clk           ),
        .rst      ( rst           ),
        .w_en     ( riscv_w_en      ),
        .w_addr_i ( riscv_w_addr_o  ),
        .w_data_i ( riscv_w_data_o  ),
        .r_en     ( riscv_r_en      ),
        .r_addr_i ( riscv_r_addr_o  ),
        .r_data_o ( ram_r_data_o  )
    );

endmodule //soc

    
