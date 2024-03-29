import "DPI-C" function void get_gprs(input logic [63:0] regs[]);

module regs (
    input  wire clk,    
    input  wire rst,    

    // from id 
    input  wire[4:0] rs1_raddr_i,    
    input  wire[4:0] rs2_raddr_i,    
    // to redirect
    output  reg[63:0] rs1_rdata_o,    
    output  reg[63:0] rs2_rdata_o, 

    // from wb
    input wire[4:0]  reg_waddr_i,
	input wire[63:0] reg_wdata_i,
	input wire       reg_wen,
    input reg[63:0]  inst_addr_i,

    // output wire[63:0] a7_o
    // r:read, w:write
);

    reg[63:0] regs[0:31]; // 32个64位宽
    reg[63:0] pc_reg  = inst_addr_i;

    always @(*) begin
        if (rst == 1'b0) 
            rs1_rdata_o = 64'b0;  
        else if (rs1_raddr_i == 5'b0)
            rs1_rdata_o = 64'b0; // x0恒为0
        else if (reg_wen && reg_waddr_i == rs1_raddr_i)
            rs1_rdata_o = reg_wdata_i; // 防止指令相关性冲突
        else
            rs1_rdata_o = regs[rs1_raddr_i];
    end // 读取rs1

    always @(*) begin
        if (rst == 1'b0) 
            rs2_rdata_o = 64'b0;   
        else if (rs2_raddr_i == 5'b0)
            rs2_rdata_o = 64'b0; // x0恒为0
        else if (reg_wen && reg_waddr_i == rs2_raddr_i)
            rs2_rdata_o = reg_wdata_i; // 防止指令相关性冲突
        else
            rs2_rdata_o = regs[rs2_raddr_i];
    end // 读取rs2

/* 打拍版回写
    always @(posedge clk) begin
        if (rst == 1'b0) begin
            for (integer i = 0; i < 32; i = i + 1) begin
                regs[i] <= 64'b0;
            end // 初始化寄存器
        end
        else if (reg_wen && reg_waddr_i != 5'b0) begin // x0不准写
            regs[reg_waddr_i] <= reg_wdata_i;
        end 
        get_gprs(regs);
        // 组合逻辑要补全else，时序不需要
    end // 回写rd
*/


    always @(*) begin
        if (rst == 1'b0) begin
            for (integer i = 0; i < 32; i = i + 1) begin
                regs[i] = 64'b0;
            end // 初始化寄存器
        end
        else if (reg_wen && reg_waddr_i != 5'b0) begin // x0不准写
            regs[reg_waddr_i] = reg_wdata_i;
        end 
        else
            regs[reg_waddr_i] = 64'b0;  
        
        get_gprs(regs);
        
        // 组合逻辑要补全else，时序不需要
    end // 回写rd

    // reg [63:0] tmp;
    // always @(posedge clk) begin
    //     tmp = regs[17];
    // end
    // always @(posedge clk) begin
    //     a7_o = tmp;
    // end

//    assign a7_o = regs[17];

endmodule 

// 时序：非阻塞：<=
// 组合：阻塞：=