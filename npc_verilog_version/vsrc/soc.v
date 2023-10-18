// `timescale 1ns/1ps

module soc (
    input  wire clk, 
    input  wire rst 
);



    // flush 
    wire[2:0]                axi_core_stall_flag_o;
    wire[2:0]                axi_core_flush_flag_o;

    
    // core to axi to ram
    wire                core_axi_ren_o;
    wire[63:0]          core_axi_raddr_o; 

    wire                core_axi_wen_o;
    wire[63:0]          core_axi_waddr_o;
    wire[63:0]          core_axi_wdata_o;
    wire[63:0]          core_axi_wmask_o;

    wire[63:0]          core_axi_inst_addr_o;  // 用于调试的


    // core to ram
    wire[63:0]          core_ram_inst_addr_o; // 用于IF的

    wire                core_ram_if_ren_o;


    core core_inst(
        .clk            ( clk                   ),
        .rst            ( rst                   ),
        // .mem_axi_inst_addr_o( core_axi_inst_addr_o ),
          
        .axi_stall_flag_i ( axi_core_stall_flag_o ),
        .axi_flush_flag_i ( axi_core_flush_flag_o ),
          
        .mem_ren_o      ( core_axi_ren_o        ),
        .mem_rdata_i    ( axi_core_rdata_o      ),
        .mem_raddr_o    ( core_axi_raddr_o      ),
  
        .mem_wen_o      ( core_axi_wen_o        ),
        .mem_waddr_o    ( core_axi_waddr_o      ),
        .mem_wdata_o    ( core_axi_wdata_o      ),
        .mem_wmask_o    ( core_axi_wmask_o      ),
  
        .if_inst_i      ( ram_core_inst_o       ),
        .if_inst_addr_o ( core_ram_inst_addr_o  ),
        .if_ren_o       ( core_ram_if_ren_o     ),

        .axi_busy_i     (  axi_core_busy_o      ),
        .axi_busy_end_i (  axi_core_busy_end_o  )
    );

    // axi to ram
    wire[31:0]          axi_ram_raddr_o;
    wire                axi_ram_ren_o;

    wire[31:0]          axi_ram_waddr_o;
    wire[63:0]          axi_ram_wdata_o;
    wire[63:0]          axi_ram_wmask_o;
    wire                axi_ram_wen_o;
    wire[63:0]          axi_ram_inst_addr_o;


    //axi to core
    wire[63:0]          axi_core_rdata_o;
    wire                axi_core_busy_o;
    wire                axi_core_busy_end_o;
    
    

    axi axi_inst(
        .clk             ( clk                 ),
        .rst             ( rst                 ),
        // .inst_addr_i     ( core_axi_inst_addr_o),
        // .inst_addr_o     ( axi_ram_inst_addr_o ),
        .axi_busy_o      ( axi_core_busy_o     ),
        .axi_busy_end_o  ( axi_core_busy_end_o ),
        .core_ren_i      ( core_axi_ren_o      ),
        .core_raddr_i    ( core_axi_raddr_o    ),
        .core_rdata_o    ( axi_core_rdata_o    ),
        .ram_rready_i    ( ram_axi_rready_o    ),
        .ram_rdata_i     ( ram_axi_rdata_o     ),
        .ram_raddr_o     ( axi_ram_raddr_o     ),
        .ram_ren_o       ( axi_ram_ren_o       ),

        .core_wen_i          ( core_axi_wen_o ),  
        .core_waddr_i        ( core_axi_waddr_o ),
        .core_wdata_i        ( core_axi_wdata_o ),
        .core_wmask_i        ( core_axi_wmask_o ),
        .ram_wready_i        ( ram_axi_wready_o ), 
        .ram_wen_o           ( axi_ram_wen_o   ),
        .ram_waddr_o         ( axi_ram_waddr_o ), 
        .ram_wdata_o         ( axi_ram_wdata_o ),
        .ram_wmask_o         ( axi_ram_wmask_o ),
        .ram_bvalid_i        ( ram_axi_bvalid_o )
    );


    // ram to axi to core
    wire[63:0]          ram_axi_rdata_o;
    wire                ram_axi_rready_o;
    wire                ram_axi_wready_o;
    wire                ram_axi_bvalid_o;
    // ram to core
    wire[63:0]          ram_core_inst_o;

    ram ram_inst(
        .clk         ( clk                  ),
        .rst         ( rst                  ),
        // .inst_addr_i_from_mem (axi_ram_inst_addr_o),
        .ram_waddr_i ( axi_ram_waddr_o     ),
        .ram_wdata_i ( axi_ram_wdata_o     ),
        .ram_wmask_i ( axi_ram_wmask_o     ),

        .ram_raddr_i ( axi_ram_raddr_o     ),
        .ram_rdata_o ( ram_axi_rdata_o     ),

        .ram_ren_i   ( axi_ram_ren_o       ),
        .ram_wen_i   ( axi_ram_wen_o      ),

        .ram_rready_o ( ram_axi_rready_o   ),
        .ram_wready_o ( ram_axi_wready_o   ),
        .ram_bvalid_o ( ram_axi_bvalid_o   ),

        .inst_addr_i ( core_ram_inst_addr_o ),
        .inst_o      ( ram_core_inst_o      )

    );

    
endmodule // soc

    
