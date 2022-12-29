module wb (
    input  wire clk,    
    input  wire rst,  

    // from mem_wb 
    input reg[63:0]  inst_addr_i,
    input reg[63:0]  inst_addr_o,

    input wire[4:0]  reg_waddr_i,
	input wire[63:0] reg_wdata_i,
	input wire       reg_wen_i,

    output wire[4:0]  reg_waddr_o,
	output wire[63:0] reg_wdata_o,
	output wire       reg_wen_o
);

    assign reg_waddr_o = reg_waddr_i;
	assign reg_wdata_o = reg_wdata_i;
	assign reg_wen_o   = reg_wen_i;

endmodule