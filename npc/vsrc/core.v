// `timescale 1ns/1ps

module core (
    input  wire clk, 
    input  wire rst,

    // from mem
    input	wire[63:0]	  mem_rdata_i,	
    input	wire[63:0]	  if_inst_i,
    // output  wire[63:0]    mem_axi_inst_addr_o, // 传给axi和ram用于调试
	// to mem
    output  wire 	   	  mem_ren_o,
	output  wire[63:0]    mem_raddr_o,
	
	output  wire	 	  mem_wen_o,
	output  wire[63:0]    mem_waddr_o,
	output  wire[63:0]    mem_wdata_o,
    output  wire[63:0]    mem_wmask_o,

    output  wire[63:0]    if_inst_addr_o,
    output  wire 	   	  if_ren_o,
    // from axi 
    input wire[2:0]           axi_stall_flag_i, // flush sign
    input wire[2:0]           axi_flush_flag_i, // flush sign
    input wire                axi_busy_i,
    input wire                axi_busy_end_i
);
    // pc 2 if and reg(for trace)
    wire[63:0] pc_reg_pc_o;

// mem to ram 
    assign  mem_wdata_o  = mem_ram_wdata_o;
    assign  mem_waddr_o  = mem_ram_waddr_o;
    assign  mem_wmask_o  = mem_ram_wmask_o;
    assign  mem_raddr_o  = mem_ram_raddr_o;
    assign  mem_ren_o    = mem_ram_ren_o;
    assign  mem_wen_o    = mem_ram_wen_o;  
// ram to mem 
    wire[63:0]    ram_mem_rdata_o;
    assign  ram_mem_rdata_o = mem_rdata_i;
// if to ram
    assign  if_inst_addr_o = if_if_id_inst_addr_o ;
    assign  if_ren_o       = if_ram_ren_o;
// ram to if
    wire[63:0]    ram_if_inst_o;
    assign  ram_if_inst_o = if_inst_i;



    pc_reg pc_reg_inst (
        .rst            ( rst               ),
        .clk            ( clk               ),
        .jump_addr_i    ( ctrl_jump_addr_o  ), 
        .jump_en_i      ( ctrl_jump_en_o    ), 
        .flush_en_i     ( ctrl_pc_flush_en_o ),
        .stall_en_i     ( ctrl_pc_stall_en_o ),
        .pc_o           ( pc_reg_pc_o       )
        // .pc_reg_o       (pc_reg_reg_o) 
    );


    // if to if_id and ram
    wire[31:0]    if_inst_o;
    wire[63:0]    if_if_id_inst_addr_o; 
    wire          if_ram_ren_o;
    
    inst_fetch inst_fetch_inst (
        .pc_addr_i     (   pc_reg_pc_o      ),
        .ram_inst_i    ( ram_if_inst_o      ),
        .inst_addr_o   ( if_if_id_inst_addr_o     ),
        .inst_o        ( if_inst_o          ),
        .ren_o         ( if_ram_ren_o           )
    );


    // if_id 2 id
    wire[63:0] if_id_inst_addr_o;
    wire[31:0] if_id_inst_o;
    
    if_id if_id_inst (
        .clk         ( clk               ),
        .rst         ( rst               ),
        .flush_flag_i ( ctrl_if_id_flush_en_o  ),
        .stall_flag_i ( ctrl_if_id_stall_en_o  ),
        .inst_i      ( if_inst_o         ),
        .inst_addr_i ( if_if_id_inst_addr_o     ),
        .inst_addr_o ( if_id_inst_addr_o ),
        .inst_o      ( if_id_inst_o      )
    );

    // id 2 regs
    wire[4:0] id_re_rs1_addr_o;
    wire[4:0] id_re_rs2_addr_o;
    
    // id 2 id_ex
    wire[31:0]  id_id_ex_inst_o;  
    wire[63:0]  id_id_ex_inst_addr_o; 
    wire[63:0]  id_id_ex_op1_o; 
    wire[63:0]  id_id_ex_op2_o;
    wire[4:0]   id_id_ex_rd_addr_o; 
    wire        id_id_ex_reg_wen; 
    wire[63:0]  id_id_ex_base_addr_o; 
    wire[63:0]  id_id_ex_offset_addr_o;
    wire[11:0]  id_id_ex_csr_waddr_o; 
    wire[63:0]  id_id_ex_csr_wdata_o; 
    wire        id_id_ex_csr_wen_o; 

    // id 2 id_clint
    wire[31:0]  id_id_clint_inst_o;  
    wire[63:0]  id_id_clint_inst_addr_o; 

    // id 2 csr_regs 
    wire[11:0]  id_csr_raddr_o;

    id id_inst (
        .inst_i         ( if_id_inst_o          ), // if_id 2 id
        .inst_addr_i    ( if_id_inst_addr_o     ), // if_id 2 id
        
        .rs1_addr_o     ( id_re_rs1_addr_o      ), 
        .rs2_addr_o     ( id_re_rs2_addr_o      ), 

        .rs1_data_i     ( re_id_rs1_rdata_o     ),
        .rs2_data_i     ( re_id_rs2_rdata_o     ), 

        .csr_data_i     ( csr_id_rdata_o        ), // Read
        .csr_addr_o     ( id_csr_raddr_o        ), // Read

        .inst_o         ( id_id_ex_inst_o             ),
        .inst_addr_o    ( id_id_ex_inst_addr_o        ),
        .op1_o          ( id_id_ex_op1_o              ),
        .op2_o          ( id_id_ex_op2_o              ),
        .rd_addr_o      ( id_id_ex_rd_addr_o          ),
        .reg_wen        ( id_id_ex_reg_wen            ),
        .base_addr_o    ( id_id_ex_base_addr_o        ),
        .offset_addr_o  ( id_id_ex_offset_addr_o      ),
        // .csr_data_o     ( id_id_ex_csr_wdata_o  ),
        .csr_waddr_o    ( id_id_ex_csr_waddr_o  ),
        .csr_wen_o      ( id_id_ex_csr_wen_o    )
    );

    //reges 2 rename
    wire[63:0] regs_re_rs1_rdata_o;
    wire[63:0] regs_re_rs2_rdata_o;

    regs regs_inst (
        .clk         ( clk                 ),
        .rst         ( rst                 ),
        .rs1_raddr_i ( re_reg_rs1_raddr_o  ),
        .rs2_raddr_i ( re_reg_rs2_raddr_o  ),
        .rs1_rdata_o ( regs_re_rs1_rdata_o ),
        .rs2_rdata_o ( regs_re_rs2_rdata_o ),
        .reg_waddr_i ( wb_rd_waddr_o       ),   // from wb
        .reg_wdata_i ( wb_rd_wdata_o       ),   // from wb
        .reg_wen     ( wb_reg_wen_o        ),   // from wb
        .inst_addr_i ( wb_inst_addr_o      ) 
    );

    // id_clint 2 clint
    wire[31:0]  id_clint_clint_inst_o;  
    wire[63:0]  id_clint_clint_inst_addr_o; 

    id_clint id_clint_inst(
        .clk          ( clk                       ),
        .rst          ( rst                       ),
        .flush_flag_i ( ctrl_id_clint_flush_en_o  ),
        .stall_flag_i ( ctrl_id_clint_stall_en_o  ),
        .inst_i       ( id_id_ex_inst_o           ),
        .inst_addr_i  ( id_id_ex_inst_addr_o      ),
        .inst_o       ( id_clint_clint_inst_o     ),
        .inst_addr_o  ( id_clint_clint_inst_addr_o)
    );

    // clint 2 ctrl
    wire[63:0]  clint_ctrl_intr_jump_addr_o;  
    wire        clint_ctrl_intr_jump_en_o; 

        // clint 2 csr_regs
    wire[63:0]  clint_csr_mepc_o;  
    wire[63:0]  clint_csr_mcause_o;
    wire[63:0]  clint_csr_mstatus_o;
    wire        clint_csr_wen_o;

    clint clint_inst(
        .clk              ( clk                         ),
        .rst              ( rst                         ),
        .inst_i           ( id_clint_clint_inst_o       ),
        .inst_addr_i      ( id_clint_clint_inst_addr_o  ),
        .intr_jump_addr_o ( clint_ctrl_intr_jump_addr_o ),
        .intr_jump_en_o   ( clint_ctrl_intr_jump_en_o   ),
        .mepc_i           ( csr_clint_mepc_o          ),
        .mtvec_i          ( csr_clint_mtvec_o                     ),
        .mstatus_i        ( csr_clint_mstatus_o                   ),
        .csr_wen_o        ( clint_csr_wen_o                   ),
        .mepc_o           ( clint_csr_mepc_o                      ),
        .mcause_o         ( clint_csr_mcause_o                    ),
        .mstatus_o        ( clint_csr_mstatus_o                   )
    );

    // csr 2 id
    wire[63:0]  csr_id_rdata_o;
    
    // csr 2 clint
    wire[63:0]  csr_clint_mepc_o;  
    wire[63:0]  csr_clint_mtvec_o;  
    wire[63:0]  csr_clint_mstatus_o;

    csr_regs csr_regs_inst(
        .clk             ( clk                       ),
        .rst             ( rst                       ),
        .id_csr_raddr_i  ( id_csr_raddr_o            ),
        .id_csr_rdata_o  ( csr_id_rdata_o            ),
        .ex_csr_wdata_i  ( ex_csr_wdata_o            ),
        .ex_csr_waddr_i  ( ex_csr_waddr_o            ),
        .ex_csr_wen_i    ( ex_csr_wen_o              ),
        .clint_csr_wen_i ( clint_csr_wen_o           ),
        .mepc_i          ( clint_csr_mepc_o          ),
        .mcause_i        ( clint_csr_mcause_o        ),
        .mstatus_i       ( clint_csr_mstatus_o       ),
        .mepc_o          ( csr_clint_mepc_o          ),
        .mtvec_o         ( csr_clint_mtvec_o         ),
        .mstatus_o       ( csr_clint_mstatus_o       )
    );

    // rename to id
    wire[63:0] re_id_rs1_rdata_o;
    wire[63:0] re_id_rs2_rdata_o;
    // rename to ctrl
    wire       rs_id_ex_hit_o;
    // rename to reg
    wire[4:0] re_reg_rs1_raddr_o;
    wire[4:0] re_reg_rs2_raddr_o;

    rename rename_inst (
        .rs1_addr_i     ( id_re_rs1_addr_o     ),
        .rs2_addr_i     ( id_re_rs2_addr_o     ),
        .rs1_addr_o     ( re_reg_rs1_raddr_o   ),
        .rs2_addr_o     ( re_reg_rs2_raddr_o   ),
        .ex_rd_addr_i   ( ex_rd_waddr_o    ),
        .ex_rd_data_i   ( ex_rd_wdata_o    ),
        .ex_rd_wen_i    ( ex_reg_wen_o     ),
        .mem_rd_addr_i  ( mem_rd_waddr_o  ),
        .mem_rd_data_i  ( mem_rd_wdata_o  ),
        .mem_rd_wen_i   ( mem_reg_wen_o   ),
        .wb_rd_addr_i   ( wb_rd_waddr_o   ),
        .wb_rd_data_i   ( wb_rd_wdata_o   ),
        .wb_rd_wen_i    ( wb_reg_wen_o    ),
        .rs1_rdata_i    ( regs_re_rs1_rdata_o   ),
        .rs2_rdata_i    ( regs_re_rs2_rdata_o   ),
        .rs1_data_o     ( re_id_rs1_rdata_o     ),
        .rs2_data_o     ( re_id_rs2_rdata_o     ),
        .rs_id_ex_hit_o ( rs_id_ex_hit_o   )
    );


    // id_ex 2 ex
    wire[31:0]  id_ex_inst_o;  
    wire[63:0]  id_ex_inst_addr_o; 
    wire[63:0]  id_ex_op1_o; 
    wire[63:0]  id_ex_op2_o;
    wire[4:0]   id_ex_rd_addr_o; 
    wire        id_ex_reg_wen; 
    wire[63:0]  id_ex_base_addr_o; 
    wire[63:0]  id_ex_offset_addr_o;
    wire[63:0]  id_ex_ex_csr_wdata_o;
    wire[11:0]  id_ex_ex_csr_waddr_o;
    wire        id_ex_ex_csr_wen_o;  

    id_ex id_ex_inst (
        .clk            ( clk               ),
        .rst            ( rst               ),
        .flush_flag_i   ( ctrl_id_ex_flush_en_o ),
        .stall_flag_i   ( ctrl_id_ex_stall_en_o  ),
        .inst_i         ( id_id_ex_inst_o         ),
        .inst_addr_i    ( id_id_ex_inst_addr_o ),
        .op1_i          ( id_id_ex_op1_o       ),
        .op2_i          ( id_id_ex_op2_o       ),
        .rd_addr_i      ( id_id_ex_rd_addr_o   ),
        .reg_wen_i      ( id_id_ex_reg_wen     ),
        .base_addr_i    ( id_id_ex_base_addr_o   ),
        .offset_addr_i  ( id_id_ex_offset_addr_o ),
        // .csr_data_i  ( id_id_ex_csr_wdata_o ),
        .csr_waddr_i    ( id_id_ex_csr_waddr_o ),  
        .csr_wen_i      ( id_id_ex_csr_wen_o   ),
        .inst_o         ( id_ex_inst_o      ),
        .inst_addr_o    ( id_ex_inst_addr_o ),
        .op1_o          ( id_ex_op1_o       ),
        .op2_o          ( id_ex_op2_o       ),
        .rd_addr_o      ( id_ex_rd_addr_o   ),
        .reg_wen_o      ( id_ex_reg_wen     ),
        .base_addr_o    ( id_ex_base_addr_o   ),
        .offset_addr_o  ( id_ex_offset_addr_o ),
        // .csr_data_o  (  id_ex_ex_csr_wdata_o ),
        .csr_waddr_o    (  id_ex_ex_csr_waddr_o),  
        .csr_wen_o      (  id_ex_ex_csr_wen_o)
    );

    // ex 2 ex_mem and rename
	wire[63:0]  ex_rd_wdata_o;
	wire[4:0]   ex_rd_waddr_o;
	wire        ex_reg_wen_o;

    wire[63:0]  ex_inst_addr_o; // pc 传递
    wire[31:0]  ex_ex_mem_inst_o;

    wire        ex_ex_mem_ren_o;
    wire[63:0]  ex_ex_mem_raddr_o;

    wire[63:0]  ex_ex_mem_waddr_o;
    wire[63:0]  ex_ex_mem_wdata_o;
    wire        ex_ex_mem_wen_o;
    wire[7:0]   ex_ex_mem_wmask_o;

    wire[63:0]  ex_ex_mem_raddr_o;
    wire        ex_ex_mem_ren_o;

    wire[63:0]  ex_csr_wdata_o;
    wire[11:0]  ex_csr_waddr_o;
    wire        ex_csr_wen_o;

    // ex 2 ctrl
    wire[63:0]  ex_ctrl_typej_jump_addr_o;    
    wire        ex_ctrl_typej_jump_en_o;      
    // wire[2:0]   ex_stall_flag_o; 
    // wire[2:0]   ex_flush_flag_o; 
    wire        ex_isload_o; 
    wire        ex_isstore_o; 

    ex ex_inst(
        .clk           ( clk ),
        .inst_i        ( id_ex_inst_o     ),
        .inst_addr_i   ( id_ex_inst_addr_o),
        .op1_i         ( id_ex_op1_o      ),
        .op2_i         ( id_ex_op2_o      ),
        .rd_addr_i     ( id_ex_rd_addr_o  ),
        .reg_wen_i     ( id_ex_reg_wen    ),
        .base_addr_i   ( id_ex_base_addr_o   ),
        .offset_addr_i ( id_ex_offset_addr_o ),
        .rd_wdata_o    ( ex_rd_wdata_o       ),
        .rd_waddr_o    ( ex_rd_waddr_o       ),
        .reg_wen_o     ( ex_reg_wen_o        ),
        .inst_o        ( ex_ex_mem_inst_o   ),
        .inst_addr_o   ( ex_inst_addr_o      ),
        .typej_jump_addr_o   ( ex_ctrl_typej_jump_addr_o      ),
        .typej_jump_en_o     ( ex_ctrl_typej_jump_en_o        ),
        // .csr_data_i    ( id_ex_ex_csr_wdata_o ),
        .csr_waddr_i   ( id_ex_ex_csr_waddr_o ),
        .csr_wen_i     ( id_ex_ex_csr_wen_o   ),
        .mem_ren_o     ( ex_ex_mem_ren_o      ),     // to ram
        .mem_raddr_o   ( ex_ex_mem_raddr_o    ),   // to ram
        .mem_wen_o     ( ex_ex_mem_wen_o      ), // to ram
        .mem_waddr_o   ( ex_ex_mem_waddr_o    ), // to ram
        .mem_wdata_o   ( ex_ex_mem_wdata_o    ), // to ram
        .mem_wmask_o   ( ex_ex_mem_wmask_o    ),  // to ram
        .isload_o      ( ex_isload_o          ),
        .isstore_o      ( ex_isstore_o          ),
        .csr_data_o    ( ex_csr_wdata_o       ),
        .csr_waddr_o   ( ex_csr_waddr_o       ),
        .csr_wen_o     ( ex_csr_wen_o         )
    );

    // ctrl 2 pc_reg
    wire[63:0]  ctrl_jump_addr_o;
    wire        ctrl_jump_en_o;
    
    wire        ctrl_pc_flush_en_o;
    wire        ctrl_pc_stall_en_o;
    // ctrl 2 if_id
    wire        ctrl_if_id_flush_en_o;
    wire        ctrl_if_id_stall_en_o;
    // ctrl 2 id_ex
    wire        ctrl_id_ex_flush_en_o;
    wire        ctrl_id_ex_stall_en_o;
    // ctrl 2 id_ex
    wire        ctrl_id_clint_flush_en_o;
    wire        ctrl_id_clint_stall_en_o;
    // ctrl 2 ex_mem
    wire        ctrl_ex_mem_flush_en_o;
    wire        ctrl_ex_mem_stall_en_o;
        // ctrl 2 mem_wb
    wire        ctrl_mem_wb_flush_en_o;
    wire        ctrl_mem_wb_stall_en_o;

    ctrl ctrl_inst(
        .typej_jump_addr_i  ( ex_ctrl_typej_jump_addr_o    ),
        .typej_jump_en_i    ( ex_ctrl_typej_jump_en_o      ),
        .intr_jump_addr_i   ( clint_ctrl_intr_jump_addr_o    ),
        .intr_jump_en_i     ( clint_ctrl_intr_jump_en_o      ),
        .jump_addr_o        ( ctrl_jump_addr_o   ),
        .jump_en_o          ( ctrl_jump_en_o     ),
        .ex_inst_isload_i   ( ex_isload_o ),
        .ex_inst_isstore_i  ( ex_isstore_o ),
        .mem_inst_isload_i  ( mem_isload_o ),
        .mem_inst_isstore_i ( mem_isstore_o ),
        .rs_id_ex_hit_i     ( rs_id_ex_hit_o    ),
        .axi_busy_i         ( axi_busy_i        ),
        .axi_busy_end_i     ( axi_busy_end_i ),
        .pc_stall_en_o      ( ctrl_pc_stall_en_o),
        .pc_flush_en_o      ( ctrl_pc_flush_en_o),
        .if_id_stall_en_o   ( ctrl_if_id_stall_en_o ),
        .if_id_flush_en_o   ( ctrl_if_id_flush_en_o ),
        .id_clint_stall_en_o( ctrl_id_clint_stall_en_o ),
        .id_clint_flush_en_o( ctrl_id_clint_flush_en_o ),
        .id_ex_stall_en_o   ( ctrl_id_ex_stall_en_o ),
        .id_ex_flush_en_o   ( ctrl_id_ex_flush_en_o  ),
        .ex_mem_stall_en_o  ( ctrl_ex_mem_stall_en_o ),
        .ex_mem_flush_en_o  ( ctrl_ex_mem_flush_en_o  ),
        .mem_wb_stall_en_o  ( ctrl_mem_wb_stall_en_o ),
        .mem_wb_flush_en_o  ( ctrl_mem_wb_flush_en_o  )    
    );  

    // ex_mem to mem
    wire[63:0]  ex_mem_inst_addr_o;
    wire[31:0]  ex_mem_mem_inst_o;
    wire        ex_mem_mem_ren_o;
    wire[63:0]  ex_mem_mem_raddr_o;
    wire        ex_mem_mem_wen_o;
    wire[63:0]  ex_mem_mem_waddr_o;
    wire[63:0]  ex_mem_mem_wdata_o;
    wire[7:0]   ex_mem_mem_wmask_o;
    wire[63:0]  ex_mem_mem_rd_wdata_o;
    wire[4:0]   ex_mem_mem_rd_waddr_o;
    wire        ex_mem_mem_reg_wen_o;
    wire[2:0]   ex_mem_mem_stall_flag_o;
    wire[2:0]   ex_mem_mem_flush_flag_o; 
    wire        ex_mem_isload_o;
    wire        ex_mem_isstore_o;

    ex_mem ex_mem_inst (
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_i      ( ex_ex_mem_inst_o   ),
        .inst_addr_i ( ex_inst_addr_o     ),
        .load_inst_i ( ex_isload_o ),
        .load_inst_o ( ex_mem_isload_o ),
        .store_inst_i ( ex_isstore_o ),
        .store_inst_o ( ex_mem_isstore_o ),
        .stall_flag_i( ctrl_ex_mem_stall_en_o    ),
        .flush_flag_i( ctrl_ex_mem_flush_en_o    ),
        .ex_ren_i    ( ex_ex_mem_ren_o        ),
        .ex_raddr_i  ( ex_ex_mem_raddr_o      ),
        .ex_wen_i    ( ex_ex_mem_wen_o        ),
        .ex_waddr_i  ( ex_ex_mem_waddr_o      ),
        .ex_wdata_i  ( ex_ex_mem_wdata_o      ),
        .ex_wmask_i  ( ex_ex_mem_wmask_o      ),
        .rd_wdata_i  ( ex_rd_wdata_o          ),
        .rd_waddr_i  ( ex_rd_waddr_o          ),
        .reg_wen_i   ( ex_reg_wen_o           ),
        .inst_o      ( ex_mem_mem_inst_o      ),
        .inst_addr_o ( ex_mem_inst_addr_o     ),
        // .stall_flag_o( ex_mem_mem_stall_flag_o ),
        // .flush_flag_o( ex_mem_mem_flush_flag_o ),
        .ren_o       ( ex_mem_mem_ren_o       ),
        .raddr_o     ( ex_mem_mem_raddr_o     ),
        .wen_o       ( ex_mem_mem_wen_o       ),
        .waddr_o     ( ex_mem_mem_waddr_o     ),
        .wdata_o     ( ex_mem_mem_wdata_o     ),
        .wmask_o     ( ex_mem_mem_wmask_o     ),
        .rd_wdata_o  ( ex_mem_mem_rd_wdata_o  ),
        .rd_waddr_o  ( ex_mem_mem_rd_waddr_o  ),
        .reg_wen_o   ( ex_mem_mem_reg_wen_o   )
    );

    // mem to mem_wb and rename
    wire[63:0]  mem_inst_addr_o;
    
    wire[63:0]  mem_rd_wdata_o;
    wire[4:0]   mem_rd_waddr_o;
    wire        mem_reg_wen_o;

    // mem to ex
    // wire[63:0]  mem_ex_rdata_o;

    // mem to ctrl
    wire         mem_isload_o;
    wire         mem_isstore_o;
    // wire[2:0] mem_stall_flag_o;
    // wire[2:0] mem_flush_flag_o;

    // mem to ram
    wire[63:0]    mem_ram_wdata_o;
    wire[63:0]    mem_ram_waddr_o;
    wire[63:0]    mem_ram_wmask_o;  
    wire[63:0]    mem_ram_raddr_o;

    wire          mem_ram_ren_o; 
    wire          mem_ram_wen_o; 

    // assign mem_axi_inst_addr_o = mem_inst_addr_o;

    mem mem_inst(
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_i      ( ex_mem_mem_inst_o  ),
        .inst_addr_i ( ex_mem_inst_addr_o ),
        .inst_addr_o ( mem_inst_addr_o),
        .isload_i    ( ex_mem_isload_o ),
        .isload_o    ( mem_isload_o ),
        .isstore_i   ( ex_mem_isstore_o ),
        .isstore_o   ( mem_isstore_o ),
        // .stall_flag_i( ex_mem_mem_stall_flag_o),
        // .stall_flag_o( mem_stall_flag_o     ),
        // .flush_flag_i( ex_mem_mem_flush_flag_o),
        // .flush_flag_o( mem_flush_flag_o     ),
        .axi_busy_i  ( axi_busy_i ),
        
        .ren_i       ( ex_mem_mem_ren_o       ),
        .wen_i       ( ex_mem_mem_wen_o       ),
        .raddr_i     ( ex_mem_mem_raddr_o     ),
        // .rdata_o     ( mem_ex_rdata_o         ),   // 从内存读出，要写入reg的数据
        .waddr_i     ( ex_mem_mem_waddr_o     ),
        .wdata_i     ( ex_mem_mem_wdata_o     ),
        .wmask_i     ( ex_mem_mem_wmask_o     ),
        .ram_wdata_o ( mem_ram_wdata_o ),
        .ram_waddr_o ( mem_ram_waddr_o ),
        .ram_wmask_o ( mem_ram_wmask_o ),
        .ram_raddr_o ( mem_ram_raddr_o ),
        .ram_rdata_i ( ram_mem_rdata_o ),
        .ram_ren_o   ( mem_ram_ren_o ),
        .ram_wen_o   ( mem_ram_wen_o ),
        .rd_wdata_i  ( ex_mem_mem_rd_wdata_o  ),
        .rd_waddr_i  ( ex_mem_mem_rd_waddr_o  ),
        .reg_wen_i   ( ex_mem_mem_reg_wen_o   ),
        .rd_wdata_o  ( mem_rd_wdata_o  ),
        .rd_waddr_o  ( mem_rd_waddr_o  ),
        .reg_wen_o   ( mem_reg_wen_o   )
    );

    // mem_wb to wb
    wire[63:0]  mem_wb_inst_addr_o;
    wire[63:0]  mem_wb_wb_rd_wdata_o; 
    wire[4:0]   mem_wb_wb_rd_waddr_o; 
    wire        mem_wb_wb_reg_wen_o;  

    mem_wb mem_wb_inst(
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_addr_i ( mem_inst_addr_o),
        .inst_addr_o ( mem_wb_inst_addr_o ),
        .stall_flag_i( ctrl_mem_wb_stall_en_o),
        .flush_flag_i( ctrl_mem_wb_flush_en_o),
        .rd_wdata_i  ( mem_rd_wdata_o  ),
        .rd_waddr_i  ( mem_rd_waddr_o  ),
        .reg_wen_i   ( mem_reg_wen_o   ),
        .rd_wdata_o  ( mem_wb_wb_rd_wdata_o  ),
        .rd_waddr_o  ( mem_wb_wb_rd_waddr_o  ),
        .reg_wen_o   ( mem_wb_wb_reg_wen_o   )
    );
     
    // wb to reg and rename
    wire[63:0]  wb_inst_addr_o;
    wire[63:0]  wb_rd_wdata_o; 
    wire[4:0]   wb_rd_waddr_o; 
    wire        wb_reg_wen_o;  

    wb wb_inst(
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_addr_i ( mem_wb_inst_addr_o),
        .inst_addr_o ( wb_inst_addr_o    ),
        .reg_waddr_i ( mem_wb_wb_rd_waddr_o ),
        .reg_wdata_i ( mem_wb_wb_rd_wdata_o ),
        .reg_wen_i   ( mem_wb_wb_reg_wen_o ),
        .reg_waddr_o ( wb_rd_waddr_o ),
        .reg_wdata_o ( wb_rd_wdata_o ),
        .reg_wen_o   ( wb_reg_wen_o   )
    );





    // ram#(
    //     .Bits        ( 64 ),
    //     .Word_Depth  ( 4096 ),
    //     .Add_Width   ( 64 ),
    //     .Wen_Width   ( 64 )
    // )ram_inst(
    //     .CLK         ( clk         ),
    //     .CEN         ( rst         ),
    //     .WEN         ( WEN         ),
    //     .BWEN        ( BWEN        ),
    //     .A           ( mem_ram_waddr_o ),
    //     .D           ( mem_ram_wdata_o ),
    //     .Q           ( ram_mem_rdata_o ),
    //     .inst_addr_i ( if_inst_addr_o ),
    //     .inst_o      ( ram_if_inst_o )
    // );

    // ram ram_inst(
    //     .clk         ( clk         ),
    //     .rst         ( rst         ),
    //     .ram_waddr_i ( mem_ram_waddr_o ),
    //     .ram_wdata_i ( mem_ram_wdata_o  ),
    //     .ram_wmask_i ( mem_ram_wmask_o  ),
    //     .ram_raddr_i ( mem_ram_raddr_o  ),
    //     .ram_rdata_o ( ram_mem_rdata_o  ),
    //     .ram_ren_i   (mem_ram_ren_o ),
    //     .ram_wen_i   (mem_ram_wen_o ),
    //     .inst_addr_i ( if_inst_addr_o  ),
    //     .inst_o      ( ram_if_inst_o     )
    // );



endmodule 