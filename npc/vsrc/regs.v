module regs (
    input  wire clk,    
    input  wire rst,    

    // from id 
    input  wire[4:0] rs1_raddr_i,    
    input  wire[4:0] rs2_raddr_i,    
    // to id
    output  reg[31:0] rs1_rdata_o,    
    output  reg[31:0] rs2_rdata_o, 

    // from ex
    input wire[4:0] reg_waddr_i,
	input wire[31:0] reg_wdata_i,
	input wire reg_wen
    // r:read, w:write
);

    reg[31:0] regs[0:31];

    always @(*) begin
        if (rst == 1'b0) 
            rs1_rdata_o = 32'b0;  
        else if (rs1_raddr_i == 5'b0)
            rs1_rdata_o = 32'b0; // x0恒为0
        else if (reg_wen && reg_waddr_i == rs1_raddr_i)
            rs1_rdata_o = reg_wdata_i; // 防止指令相关性冲突
        else
            rs1_rdata_o = regs[rs1_raddr_i];
    end // 读取rs1

    always @(*) begin
        if (rst == 1'b0) 
            rs2_rdata_o = 32'b0;  
        else if (rs1_raddr_i == 5'b0)
            rs2_rdata_o = 32'b0; // x0恒为0
        else if (reg_wen && reg_waddr_i == rs2_raddr_i)
            rs2_rdata_o = reg_wdata_i; // 防止指令相关性冲突
        else
            rs2_rdata_o = regs[rs2_raddr_i];
    end // 读取rs2

    always @(posedge clk) begin
        if (rst == 1'b0) begin
            for (integer i = 0; i < 31; i = i + 1) begin
                regs[i] <= 32'b0;
            end // 初始化寄存器
        end
        else if (reg_wen && reg_waddr_i != 5'b0) begin // x0不准写
            regs[reg_waddr_i] <= reg_wdata_i;
        end 
        // 组合逻辑要补全else，时序不需要
    end // 回写rd

endmodule 

// 时序：非阻塞：<=
// 组合：阻塞：=