`timescale 1ns/1ps

module riscv (
    input  wire clk, 
    input  wire rst,

    // from mem
    input	wire[63:0]	  mem_rdata_i,	
	// to mem
    output  wire 	   	  mem_ren_o,
	output  wire[63:0]    mem_raddr_o,
	
	// write mem
	output  wire	 	  mem_wen_o,
	output  wire[63:0]    mem_waddr_o,
	output  wire[63:0]    mem_wdata_o,
    output  wire[7:0]     mem_wmask_o,

    // to axi (flush sign) 
    output wire           flush_flag_o,
    // output wire[3:0]      sid_o,
    output wire           rwvalid_o
);
    // pc 2 if and reg(for trace)
    wire[63:0] pc_reg_pc_o;
    // pc 2 regs
    // wire[63:0] pc_reg_reg_o;

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

    // if from rom
    wire[63:0]    rom_if_inst_o;
    // if to if_id and rom
    wire[31:0]    if_inst_o;
    wire[63:0]    if_inst_addr_o; 
    
    inst_fetch inst_fetch_inst (
        .pc_addr_i     (   pc_reg_pc_o      ),
        .rom_inst_i    ( rom_if_inst_o      ),
        .inst_addr_o   ( if_inst_addr_o     ),
        .inst_o        ( if_inst_o          )
    );

    rom rom_inst (
        .inst_addr_i   (   if_inst_addr_o   ),
        .inst_o        (   rom_if_inst_o    )
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
        .inst_addr_i ( if_inst_addr_o    ),
        .inst_addr_o ( if_id_inst_addr_o ),
        .inst_o      ( if_id_inst_o      )
    );

    // id 2 regs
    wire[4:0] id_rs1_addr_o;
    wire[4:0] id_rs2_addr_o;
    
    // id 2 id_ex
    wire[31:0]  id_inst_o;  
    wire[63:0]  id_inst_addr_o; 
    wire[63:0]  id_op1_o; 
    wire[63:0]  id_op2_o;
    wire[4:0]   id_rd_addr_o; 
    wire        id_reg_wen; 
    wire[63:0]  id_base_addr_o; 
    wire[63:0]  id_offset_addr_o;

    // id 2 mem 
    // wire        id_mem_ren_o;
    // wire[63:0]  id_mem_raddr_o;

    id id_inst (
        .inst_i         ( if_id_inst_o     ), // if_id 2 id
        .inst_addr_i    ( if_id_inst_addr_o), // if_id 2 id
        .rs1_addr_o     ( id_rs1_addr_o    ), 
        .rs2_addr_o     ( id_rs2_addr_o    ), 
        .rs1_data_i     ( regs_rs1_rdata_o ) ,
        .rs2_data_i     ( regs_rs2_rdata_o ), 
        .inst_o         ( id_inst_o        ),
        .inst_addr_o    ( id_inst_addr_o   ),
        .op1_o          ( id_op1_o         ),
        .op2_o          ( id_op2_o         ),
        .rd_addr_o      ( id_rd_addr_o     ),
        .reg_wen        ( id_reg_wen       ),
        .base_addr_o    ( id_base_addr_o   ),
        .offset_addr_o  ( id_offset_addr_o )
        // .mem_ren        ( mem_ren_o        ), // to mem
        // .mem_raddr_o    ( mem_raddr_o       )  // to mem
    );

    //reges 2 id
    wire[63:0] regs_rs1_rdata_o;
    wire[63:0] regs_rs2_rdata_o;

    regs regs_inst (
        .clk         ( clk             ),
        .rst         ( rst             ),
        .rs1_raddr_i ( id_rs1_addr_o   ),
        .rs2_raddr_i ( id_rs2_addr_o   ),
        .rs1_rdata_o ( regs_rs1_rdata_o ),
        .rs2_rdata_o ( regs_rs2_rdata_o ),
        .reg_waddr_i ( wb_reg_rd_waddr_o),   // from wb
        .reg_wdata_i ( wb_reg_rd_wdata_o ),   // from wb
        .reg_wen     ( wb_reg_reg_wen_o ),   // from wb
        .inst_addr_i ( wb_inst_addr_o  ) 
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

    id_ex id_ex_inst (
        .clk         ( clk               ),
        .rst         ( rst               ),
        .flush_flag_i ( ctrl_id_ex_flush_en_o ),
        .stall_flag_i ( ctrl_id_ex_stall_en_o  ),
        .inst_i      ( id_inst_o         ),
        .inst_addr_i ( id_inst_addr_o ),
        .op1_i       ( id_op1_o       ),
        .op2_i       ( id_op2_o       ),
        .rd_addr_i   ( id_rd_addr_o   ),
        .reg_wen_i   ( id_reg_wen     ),
        .base_addr_i    ( id_base_addr_o   ),
        .offset_addr_i  ( id_offset_addr_o ),
        .inst_o      ( id_ex_inst_o      ),
        .inst_addr_o ( id_ex_inst_addr_o ),
        .op1_o       ( id_ex_op1_o       ),
        .op2_o       ( id_ex_op2_o       ),
        .rd_addr_o   ( id_ex_rd_addr_o   ),
        .reg_wen_o   ( id_ex_reg_wen     ),
        .base_addr_o    ( id_ex_base_addr_o   ),
        .offset_addr_o  ( id_ex_offset_addr_o ) 
    );

    // ex 2 ex_mem
	wire[63:0]  ex_ex_mem_rd_wdata_o;
	wire[4:0]   ex_ex_mem_rd_waddr_o;
	wire        ex_ex_mem_reg_wen_o;

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

    // ex 2 ctrl
    wire[63:0]  ex_jump_addr_o;    
    wire        ex_jump_en_o;      
    wire[2:0]   ex_stall_flag_o; 
    wire[2:0]   ex_flush_flag_o; 


    ex ex_inst(
        .inst_i      ( id_ex_inst_o     ),
        .inst_addr_i ( id_ex_inst_addr_o),
        .op1_i       ( id_ex_op1_o      ),
        .op2_i       ( id_ex_op2_o      ),
        .rd_addr_i   ( id_ex_rd_addr_o  ),
        .reg_wen_i   ( id_ex_reg_wen    ),
        .base_addr_i    ( id_ex_base_addr_o   ),
        .offset_addr_i  ( id_ex_offset_addr_o ),
        .rd_wdata_o  ( ex_ex_mem_rd_wdata_o    ),
        .rd_waddr_o  ( ex_ex_mem_rd_waddr_o     ),
        .reg_wen_o   ( ex_ex_mem_reg_wen_o     ),
        .inst_o      (  ex_ex_mem_inst_o  ),
        .inst_addr_o ( ex_inst_addr_o     ),
        .jump_addr_o ( ex_jump_addr_o      ),
        .jump_en_o   ( ex_jump_en_o        ),
        .flush_flag_o ( ex_flush_flag_o   ),
        .stall_flag_o ( ex_stall_flag_o   ),
        // .mem_rdata_i   ( mem_ex_rdata_o ),
        .mem_ren_o     ( ex_ex_mem_ren_o ),     // to ram
        .mem_raddr_o   ( ex_ex_mem_raddr_o ),   // to ram
        .mem_wen_o     ( ex_ex_mem_wen_o     ), // to ram
        .mem_waddr_o   ( ex_ex_mem_waddr_o   ), // to ram
        .mem_wdata_o   ( ex_ex_mem_wdata_o   ), // to ram
        .mem_wmask     ( ex_ex_mem_wmask_o     )  // to ram
        // .mem_ren_o      ( ex_ex_mem_ren_o        ), // to mem
        // .mem_raddr_o    ( ex_ex_mem_raddr_o       )  // to mem
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

    ctrl ctrl_inst(
        .jump_addr_i      ( ex_jump_addr_o    ),
        .jump_en_i        ( ex_jump_en_o      ),
        .jump_addr_o      ( ctrl_jump_addr_o   ),
        .jump_en_o        ( ctrl_jump_en_o     ),
        .flush_flag_ex_i  ( ex_flush_flag_o ),
        .stall_flag_ex_i  ( ex_stall_flag_o  ),
        .stall_flag_mem_i ( mem_stall_flag_o  ), 
        .pc_stall_en_o    ( ctrl_pc_stall_en_o),
        .pc_flush_en_o    ( ctrl_pc_flush_en_o),
        .if_id_stall_en_o ( ctrl_if_id_stall_en_o ),
        .if_id_flush_en_o ( ctrl_if_id_flush_en_o ),
        .id_ex_stall_en_o ( ctrl_id_ex_stall_en_o ),
        .id_ex_flush_en_o ( ctrl_id_ex_flush_en_o  )
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

    ex_mem ex_mem_inst (
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_i      ( ex_ex_mem_inst_o ),
        .inst_addr_i ( ex_inst_addr_o ),
        .stall_flag_i( ex_stall_flag_o    ),
        .ex_ren_i    ( ex_ex_mem_ren_o    ),
        .ex_raddr_i  ( ex_ex_mem_raddr_o  ),
        .ex_wen_i    ( ex_ex_mem_wen_o    ),
        .ex_waddr_i  ( ex_ex_mem_waddr_o  ),
        .ex_wdata_i  ( ex_ex_mem_wdata_o  ),
        .ex_wmask_i  ( ex_ex_mem_wmask_o  ),
        .rd_wdata_i  ( ex_ex_mem_rd_wdata_o   ),
        .rd_waddr_i  ( ex_ex_mem_rd_waddr_o  ),
        .reg_wen_i   ( ex_ex_mem_reg_wen_o   ),
        .inst_o      ( ex_mem_mem_inst_o ),
        .inst_addr_o ( ex_mem_inst_addr_o ),
        .stall_flag_o( ex_mem_mem_stall_flag_o ),
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

    // mem to mem_wb
    wire[63:0]  mem_inst_addr_o;
    
    wire[63:0]  mem_mem_wb_rd_wdata_o;
    wire[4:0]   mem_mem_wb_rd_waddr_o;
    wire        mem_mem_wb_reg_wen_o;

    // mem to ex
    wire[63:0]  mem_ex_rdata_o;

    // mem to ctrl
    wire[2:0] mem_stall_flag_o;

    mem mem_inst(
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_i      ( ex_mem_mem_inst_o  ),
        .inst_addr_i ( ex_mem_inst_addr_o ),
        .inst_addr_o ( mem_inst_addr_o),
        .stall_flag_i( ex_mem_mem_stall_flag_o),
        .stall_flag_o( mem_stall_flag_o     ),
        .ren_i       ( ex_mem_mem_ren_o       ),
        .wen_i       ( ex_mem_mem_wen_o       ),
        .raddr_i     ( ex_mem_mem_raddr_o     ),
        .rdata_o     ( mem_ex_rdata_o         ),   // 从内存读出，要写入reg的数据
        .waddr_i     ( ex_mem_mem_waddr_o     ),
        .wdata_i     ( ex_mem_mem_wdata_o     ),
        .wmask_i     ( ex_mem_mem_wmask_o     ),
        .rd_wdata_i  ( ex_mem_mem_rd_wdata_o  ),
        .rd_waddr_i  ( ex_mem_mem_rd_waddr_o  ),
        .reg_wen_i   ( ex_mem_mem_reg_wen_o   ),
        .rd_wdata_o  ( mem_mem_wb_rd_wdata_o  ),
        .rd_waddr_o  ( mem_mem_wb_rd_waddr_o  ),
        .reg_wen_o   ( mem_mem_wb_reg_wen_o   )
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
        .rd_wdata_i  ( mem_mem_wb_rd_wdata_o  ),
        .rd_waddr_i  ( mem_mem_wb_rd_waddr_o  ),
        .reg_wen_i   ( mem_mem_wb_reg_wen_o   ),
        .rd_wdata_o  ( mem_wb_wb_rd_wdata_o  ),
        .rd_waddr_o  ( mem_wb_wb_rd_waddr_o  ),
        .reg_wen_o   ( mem_wb_wb_reg_wen_o   )
    );
     
    // wb to reg 
    wire[63:0]  wb_inst_addr_o;
    wire[63:0]  wb_reg_rd_wdata_o; 
    wire[4:0]   wb_reg_rd_waddr_o; 
    wire        wb_reg_reg_wen_o;  

    wb wb_inst(
        .clk         ( clk         ),
        .rst         ( rst         ),
        .inst_addr_i ( mem_wb_inst_addr_o),
        .inst_addr_o ( wb_inst_addr_o),
        .reg_waddr_i ( mem_wb_wb_rd_waddr_o ),
        .reg_wdata_i ( mem_wb_wb_rd_wdata_o ),
        .reg_wen_i   ( mem_wb_wb_reg_wen_o ),
        .reg_waddr_o ( wb_reg_rd_waddr_o ),
        .reg_wdata_o ( wb_reg_rd_wdata_o ),
        .reg_wen_o   ( wb_reg_reg_wen_o   )
    );



endmodule 