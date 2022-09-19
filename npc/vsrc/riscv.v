`timescale 1ns/1ps

module riscv (
    input  wire clk, 
    input  wire rst,

    // form rom
    input  wire [31:0] inst_i, 
    // to rom    
    output wire [63:0] inst_addr_o ,

    //read  mem
    input	wire [31:0]	  mem_r_data_i		,	
	output  wire 	   	  mem_r_req_o		,
	output  wire [11:0]   mem_r_addr_o		,
	
	//write mem
	output  wire	 	  mem_w_req_o		,
	output  wire  [11:0]  mem_w_addr_o		,
	output  wire  [31:0]  mem_w_data_o
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
        .pc_o           ( pc_reg_pc_o       )
        // .pc_reg_o       (pc_reg_reg_o) 
    );

    // if 2 if_id
    wire[63:0] if_inst_addr_o;
    wire[31:0] if_inst_o;

    inst_fetch inst_fetch_inst (
        .pc_addr_i     ( pc_reg_pc_o   ),
        // .rom2if_inst_i ( inst_i        ),
        // .if2rom_addr_o ( inst_addr_o   ),
        .inst_addr_o   ( if_inst_addr_o),
        .inst_o        ( if_inst_o     )
    );

    // if_id 2 id
    wire[63:0] if_id_inst_addr_o;
    wire[31:0] if_id_inst_o;
    
    if_id if_id_inst (
        .clk         ( clk               ),
        .rst         ( rst               ),
        .hold_flag_i ( ctrl_hold_flag_o  ),
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
        .reg_waddr_i ( ex_rd_addr_o    ),
        .reg_wdata_i ( ex_rd_data_o    ),
        .reg_wen     ( ex_reg_wen_o    ),
        .inst_addr_i ( ex_reg_inst_addr_o  ) 
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
        .hold_flag_i ( ctrl_hold_flag_o   ),
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

    // ex 2 
	wire[63:0]  ex_rd_data_o;
	wire[4:0]   ex_rd_addr_o;
	wire        ex_reg_wen_o;
    wire[63:0]  ex_reg_inst_addr_o; // pc 传递

    // // ex 2 ex_wb
    // wire[63:0]  ex_ex_wb_o;

    // ex 2 ctrl
    wire[63:0]  ex_jump_addr_o;    
    wire        ex_jump_en_o;      
    wire        ex_hold_flag_o; 

    ex ex_inst(
        .inst_i      ( id_ex_inst_o     ),
        .inst_addr_i ( id_ex_inst_addr_o),
        .op1_i       ( id_ex_op1_o      ),
        .op2_i       ( id_ex_op2_o      ),
        .rd_addr_i   ( id_ex_rd_addr_o  ),
        .reg_wen_i   ( id_ex_reg_wen    ),
        .base_addr_i    ( id_ex_base_addr_o   ),
        .offset_addr_i  ( id_ex_offset_addr_o ),
        .rd_wdata_o  ( ex_rd_data_o     ),
        .rd_waddr_o  ( ex_rd_addr_o     ),
        .reg_wen_o   ( ex_reg_wen_o     ),
        .inst_addr_o ( ex_reg_inst_addr_o     ),
        .jump_addr_o ( ex_jump_addr_o      ),
        .jump_en_o   ( ex_jump_en_o        ),
        .hold_flag_o ( ex_hold_flag_o   )
    );
    
    // ctrl 2 regs
    wire[63:0]  ctrl_jump_addr_o;
    wire        ctrl_jump_en_o;
    // ctrl 2 if_id/id_ex
    wire        ctrl_hold_flag_o;

    ctrl ctrl_inst(
        .jump_addr_i    ( ex_jump_addr_o    ),
        .jump_en_i      ( ex_jump_en_o      ),
        .hold_flag_ex_i ( ex_hold_flag_o ),
        .jump_addr_o    ( ctrl_jump_addr_o   ),
        .jump_en_o      ( ctrl_jump_en_o     ),
        .hold_flag_o    ( ctrl_hold_flag_o   )
    );  


    // reg 2 traceregs
    // wire[63:0]  reg_2_trace;    

    // traceregs traceregs_inst(
    //     .regs    ( reg_2_trace )
    // );

    // wire[63:0]  ex_wb_wb_addr_o;

    // ex_wb ex_wb_inst(
    // .clk            ( clk         ),
    // .rst            ( rst         ),
    // .inst_addr_i    ( ex_ex_wb_o  ),
    // .inst_addr_o    ( ex_wb_wb_addr_o  )
    // );




endmodule 