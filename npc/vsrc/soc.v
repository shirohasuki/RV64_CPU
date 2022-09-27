`timescale 1ns/1ps

module soc (
    input  wire clk, 
    input  wire rst 
);

    // riscv to ram 
    //  write
    wire               riscv_ram_wen;
    wire[63:0]         riscv_ram_waddr_o;
    wire[63:0]         riscv_ram_wdata_o;
    wire[7:0]          riscv_ram_wmask;
    // read
    wire                riscv_ram_ren;
    wire[63:0]          riscv_ram_raddr_o; 
    // flush 
    wire                riscv_ram_hold_flag_o;


    // ram to riscv
    wire[63:0]          ram_riscv_rdata_o;




    /*
    riscv riscv_inst (
        .clk          ( clk             ),
        .rst          ( rst             ),
        .inst_i       ( rom_inst_o      ),
        .inst_addr_o  ( riscv_inst_addr_o)
    );*/
    
    riscv riscv_inst(
        .clk          ( clk         ),
        .rst          ( rst         ),
        .hold_flag_o  ( riscv_ram_hold_flag_o ),
        .mem_rdata_i  ( ram_riscv_rdata_o ),
        .mem_ren_o    ( riscv_ram_ren  ),
        .mem_raddr_o  ( riscv_ram_raddr_o ),
        .mem_wen_o    ( riscv_ram_wen   ),
        .mem_waddr_o  ( riscv_ram_waddr_o ),
        .mem_wdata_o  ( riscv_ram_wdata_o ),
        .mem_wmask_o  ( riscv_ram_wmask  )
    );


    ram ram_inst(
        .clk         ( clk               ),
        .rst         ( rst               ),
        .hold_flag_i ( riscv_ram_hold_flag_o ),
        .mem_wen     ( riscv_ram_wen     ),
        .mem_waddr_i ( riscv_ram_waddr_o ),
        .mem_wdata_i ( riscv_ram_wdata_o ),
        .mem_wmask   ( riscv_ram_wmask   ),
        .mem_ren     ( riscv_ram_ren     ),
        .mem_raddr_i ( riscv_ram_raddr_o ),
        .mem_rdata_o  ( ram_riscv_rdata_o )
    );



    // rom rom_inst (
    //     .inst_addr_i   (riscv_inst_addr_o),
    //     .inst_o        ( rom_inst_o      )
    // );


endmodule //soc

    
