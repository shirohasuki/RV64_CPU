// module wb (
//     input  wire clk,    
//     input  wire rst,  

//     input wire[4:0]  reg_waddr_i,
// 	input wire[63:0] reg_wdata_i,
// 	input wire       reg_wen

// );






//     always @(posedge clk) begin
//         if (rst == 1'b0) begin
//             for (integer i = 0; i < 32; i = i + 1) begin
//                 regs[i] <= 64'b0;
//             end // 初始化寄存器
//         end
//         else if (reg_wen && reg_waddr_i != 5'b0) begin // x0不准写
//             regs[reg_waddr_i] <= reg_wdata_i;
//         end 
//         // 组合逻辑要补全else，时序不需要
//     end // 回写rd



// endmodule