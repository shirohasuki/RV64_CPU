`timescale 1ns/1ps

module soc (
    input  wire clk, 
    input  wire rst 
);

    //riscv to ram 
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

    // riscv to rom
    wire[63:0]          riscv_rom_raddr_o;
    // rom to riscv
    wire[63:0]          rom_riscv_rdata_o;

    // riscv to axi
    wire[3:0]           riscv_axi_sid_o; 
    wire                riscv_axi_rwvalid_o; 

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
        // .sid_o        ( riscv_axi_sid_o     ),
        .rwvalid_o    ( riscv_axi_rwvalid_o ),
        
        .mem_ren_o    ( riscv_ram_ren  ),
        .mem_rdata_i  ( ram_riscv_rdata_o ),
        .mem_raddr_o  ( riscv_ram_raddr_o ),

        .mem_wen_o    ( riscv_ram_wen   ),
        .mem_waddr_o  ( riscv_ram_waddr_o ),
        .mem_wdata_o  ( riscv_ram_wdata_o ),
        .mem_wmask_o  ( riscv_ram_wmask  )
    );


    // axi axi_inst(
    //     .clk            ( clk            ),
    //     .rst            ( rst            ),
        
    //     .sid_i          ( riscv_axi_sid_o),
    //     .rwvalid_i      ( riscv_axi_rwvalid_o),
    //     .rwdata_i       ( rwdata_i       ),
    //     .rwaddr_i       ( rwaddr_i       ),
    //     .wmask_i        ( wmask_i        ),
    //     .rready_o       ( rready_o       ),
    //     .wready_o       ( wready_o       ),
    //     .rdata_o        ( rdata_o        ),
        
    //     .maxi_waready   ( maxi_waready   ),
    //     .maxi_wavalid   ( maxi_wavalid   ),
    //     .maxi_waddr     ( maxi_waddr     ),
        
    //     .maxi_wdata     ( maxi_wdata     ),
    //     .maxi_wstrb     ( maxi_wstrb     ),
    //     .maxi_wdready   ( maxi_wdready   ),
    //     .maxi_wdvalid   ( maxi_wdvalid   ),
        
    //     .maxi_raready   ( maxi_raready   ),
    //     .maxi_ravalid   ( maxi_ravalid   ),
    //     .maxi_raddr     ( maxi_raddr     ),
        
    //     .maxi_rdata     ( maxi_rdata     ),
    //     .maxi_rdvalid   ( maxi_rdvalid   ),
    //     .maxi_rlast     ( maxi_rlast     ),
    //     .maxi_rdready   ( maxi_rdready   )
    // );



    // mem mem_inst(
    //     .clk         ( clk               ),
    //     .rst         ( rst               ),
    //   //  .hold_flag_i ( riscv_ram_hold_flag_o ),
    //     .wen_i       ( riscv_ram_wen     ),
    //     .waddr_i     ( riscv_ram_waddr_o ),
    //     .wdata_i     ( riscv_ram_wdata_o ),
    //     .wmask_i     ( riscv_ram_wmask   ),
    //     .ren_i       ( riscv_ram_ren     ),
    //     .raddr_i     ( riscv_ram_raddr_o ),
    //     .rdata_o     ( ram_riscv_rdata_o )
    // );

endmodule //soc

    
