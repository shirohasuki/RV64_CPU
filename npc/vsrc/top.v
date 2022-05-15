module top (
    input  wire clk, 
    input  wire rst,

    // form rom
    input  wire [31:0] inst_i, 
    // to rom    
    output wire [31:0] inst_addr_o 
);
    // pc 2 if
    wire[31:0] pc_reg_pc_o;

    pc_reg pc_reg_inst (
        .rst    ( rst ),
        .clk    ( clk ),
        .pc_o   ( pc_reg_pc_o)
    );

    // if 2 if_id
    wire[31:0] if_inst_addr_o;
    wire[31:0] if_inst_o;

    inst_fetch inst_fetch_inst (
        .pc_addr_i     ( pc_reg_pc_o   ),
        .rom2if_inst_i ( inst_i        ),
        .if2rom_addr_o ( inst_addr_o   ),
        .inst_addr_o   ( if_inst_addr_o),
        .inst_o        ( if_inst_o     )
    );

    // if_id 2 id
    wire[31:0] if_id_inst_addr_o;
    wire[31:0] if_id_inst_o;
    
    if_id if_id_inst (
        .clk         ( clk               ),
        .rst         ( rst               ),
        .inst_i      ( inst_i            ),
        .inst_addr_i ( if_inst_o         ),
        .inst_addr_o ( if_id_inst_addr_o ),
        .inst_o      ( if_id_inst_o      )
    );

    // id 2 regs
    wire[4:0] id_rs1_addr_o;
    wire[4:0] id_rs2_addr_o;
    
    // id 2 id_ex
    wire[31:0]  id_inst_o;  
    wire[31:0]  id_inst_addr_o; 
    wire[31:0]  id_op1_o; 
    wire[31:0]  id_op2_o;
    wire[4:0]   id_rd_addr_o; 
    wire        id_reg_wen; 

    id id_inst (
        .inst_i      ( if_id_inst_o     ), // if_id 2 id
        .inst_addr_i ( if_id_inst_addr_o), // if_id 2 id
        .rs1_data_i  ( regs_rs1_data_o  ),
        .rs2_data_i  ( regs_rs2_data_o  ), 
        .rs1_addr_o  ( id_rs1_addr_o    ), 
        .rs2_addr_o  ( id_rs2_addr_o    ), 
        .inst_o      ( id_inst_o        ),
        .inst_addr_o ( id_inst_addr_o   ),
        .op1_o       ( id_op1_o         ),
        .op2_o       ( id_op2_o         ),
        .rd_addr_o   ( id_rd_addr_o     ),
        .reg_wen     ( id_reg_wen       )
    );

    //reges 2 id
    wire[31:0] regs_rs1_data_o;
    wire[31:0] regs_rs2_data_o;

    regs regs_inst (
        .clk         ( clk             ),
        .rst         ( rst             ),
        .rs1_raddr_i ( id_rs1_addr_o   ),
        .rs2_raddr_i ( id_rs2_addr_o   ),
        .rs1_rdata_o ( regs_rs1_data_o ),
        .rs2_rdata_o ( regs_rs2_data_o ),
        .reg_waddr_i ( ex_rd_addr_o    ),
        .reg_wdata_i ( ex_rd_data_o    ),
        .reg_wen     ( ex_reg_wen_o    )	
    );

    // id_ex 2 ex
    wire[31:0]  id_ex_inst_o;  
    wire[31:0]  id_ex_inst_addr_o; 
    wire[31:0]  id_ex_op1_o; 
    wire[31:0]  id_ex_op2_o;
    wire[4:0]   id_ex_rd_addr_o; 
    wire        id_ex_reg_wen; 

    id_ex id_ex_inst (
        .clk         ( clk               ),
        .rst         ( rst               ),
        .inst_i      ( id_inst_o         ),
        .inst_addr_i ( id_ex_inst_addr_o ),
        .op1_i       ( id_ex_op1_o       ),
        .op2_i       ( id_ex_op2_o       ),
        .rd_addr_i   ( id_ex_rd_addr_o   ),
        .reg_wen_i   ( id_ex_reg_wen     ),
        .inst_o      ( id_ex_inst_o      ),
        .inst_addr_o ( id_ex_inst_addr_o ),
        .op1_o       ( id_ex_op1_o       ),
        .op2_o       ( id_ex_op2_o       ),
        .rd_addr_o   ( id_ex_rd_addr_o   ),
        .reg_wen_o   ( id_ex_reg_wen     )
    );

    // ex 2 reg

	wire[31:0] ex_rd_data_o;
	wire[4:0]  ex_rd_addr_o;
	wire       ex_reg_wen_o;

    ex ex_inst(
        .inst_i      ( inst_i          ),
        .inst_addr_i ( id_ex_inst_o    ),
        .op1_i       ( id_ex_op1_o     ),
        .op2_i       ( id_ex_op2_o     ),
        .rd_addr_i   ( id_ex_rd_addr_o ),
        .reg_wen_i   ( id_ex_reg_wen   ),
        .rd_wdata_o  ( ex_rd_data_o    ),
        .rd_waddr_o  ( ex_rd_addr_o    ),
        .reg_wen_o   ( ex_reg_wen_o   )
    );


endmodule 