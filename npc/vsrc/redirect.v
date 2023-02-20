module redirect (
	//from id
	input wire [4 :0] rs1_addr_i       ,
	input wire [4 :0] rs2_addr_i       ,
    
	//from ex                          
	input wire [4 :0] ex_rd_addr_i     ,
	input wire [63:0] ex_rd_data_i     ,
	input wire        ex_rd_wen_i      ,

	//from mem                     
	input wire [4 :0] mem_rd_addr_i    ,
	input wire [63:0] mem_rd_data_i    ,
	input wire        mem_rd_wen_i     ,

    // from wb                     
	input wire [4 :0] wb_rd_addr_i    ,
	input wire [63:0] wb_rd_data_i    ,
	input wire        wb_rd_wen_i     ,
    
    // from regs
    input reg[63:0] rs1_rdata_i,
    input reg[63:0] rs2_rdata_i,

    // to regs 
    output wire [4 :0] rs1_addr_o       ,
	output wire [4 :0] rs2_addr_o       ,

	//to id 
	output reg [63:0] rs1_data_o       ,
	output reg [63:0] rs2_data_o       ,

    // to ctrl
    output reg        rs_id_ex_hit_o          
);

    assign rs1_addr_o = rs1_addr_i;
    assign rs2_addr_o = rs2_addr_i;

    // ================  碰撞检测
    reg rs1_id_ex_hit ; assign rs1_id_ex_hit  = ((rs1_addr_i == ex_rd_addr_i) && (ex_rd_wen_i == 1'b1) && (rs1_addr_i != 5'b0));
    reg rs1_id_mem_hit; assign rs1_id_mem_hit = ((rs1_addr_i == mem_rd_addr_i) && mem_rd_wen_i == 1'b1 && rs1_addr_i != 5'b0);
    reg rs1_id_wb_hit ; assign rs1_id_wb_hit  = ((rs1_addr_i == wb_rd_addr_i) && wb_rd_wen_i == 1'b1 && rs1_addr_i != 5'b0);

    reg rs2_id_ex_hit ; assign rs2_id_ex_hit  = ((rs2_addr_i == ex_rd_addr_i) && ex_rd_wen_i == 1'b1 && rs2_addr_i != 5'b0);
    reg rs2_id_mem_hit; assign rs2_id_mem_hit = ((rs2_addr_i == mem_rd_addr_i) && mem_rd_wen_i == 1'b1 && rs2_addr_i != 5'b0);
    reg rs2_id_wb_hit ; assign rs2_id_wb_hit  = ((rs2_addr_i == wb_rd_addr_i) && wb_rd_wen_i == 1'b1 && rs2_addr_i != 5'b0);
	
    assign rs_id_ex_hit_o = (rs1_id_ex_hit | rs2_id_ex_hit);

	// rs1_addr_i数据冲突
	always @(*) begin
		if (rs1_id_ex_hit) begin
			rs1_data_o = ex_rd_data_i;
		end
		else if(rs1_id_mem_hit) begin
			rs1_data_o = mem_rd_data_i;
		end
		else if(rs1_id_wb_hit) begin
			rs1_data_o = wb_rd_data_i;
		end
		else begin
			rs1_data_o = rs1_rdata_i;
		end
	end
		
	// rs2_addr_i数据冲突
	always @(*) begin
		if (rs2_id_ex_hit) begin
			rs2_data_o = ex_rd_data_i;
		end
		else if(rs2_id_mem_hit) begin
			rs2_data_o = mem_rd_data_i;
		end
		else if(rs2_id_wb_hit) begin
			rs2_data_o = wb_rd_data_i;
		end
		else begin
			rs2_data_o = rs2_rdata_i; // rs2合法 
		end
	end

endmodule
