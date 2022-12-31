module dff_set #(
    parameter DW = 64
)
(
    input wire         clk,
    input wire         rst,
    input wire         flush_flag_i,
    input wire         stall_flag_i,
    // input wire[DW-1:0] pre_data,    // 用于stall时，保持原先结果 
    input wire[DW-1:0] set_data,    
    input wire[DW-1:0] data_i,
    output reg[DW-1:0] data_o
);

    always @(posedge clk) begin
        if (rst == 1'b0 || flush_flag_i == 1'b1) 
            data_o <= set_data; 
        else if (stall_flag_i == 1'b1)
            data_o <= data_o; //保持原值
        else
            data_o <= data_i; 
    end

endmodule // D触发器
// 作用：在每个上跳沿写数据