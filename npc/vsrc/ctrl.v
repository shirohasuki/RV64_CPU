module ctrl (
    // from ex 
    input wire[63:0] jump_addr_i,
    input wire       jump_en_i,
    input wire[2:0]  flush_flag_ex_i,
    input wire[2:0]  flush_flag_mem_i,
    input wire[2:0]  stall_flag_ex_i,
    input wire[2:0]  stall_flag_mem_i,

    // to pc_reg 
    output reg[63:0] jump_addr_o,
    output reg       jump_en_o,
    output reg       pc_stall_en_o,
    output reg       pc_flush_en_o,
    // to if_id
    output reg       if_id_stall_en_o,
    output reg       if_id_flush_en_o,
    // to id_ex
    output reg       id_ex_stall_en_o,
    output reg       id_ex_flush_en_o
);

    assign pc_flush_en_o    = flush_flag_ex_i[2];
    assign if_id_flush_en_o = flush_flag_ex_i[1];
    assign id_ex_flush_en_o = flush_flag_ex_i[0];

    assign jump_addr_o = jump_addr_i;
    assign jump_en_o   = jump_en_i; 

    always @(*) begin
        if (jump_en_i == 1'b1) begin
            assign pc_flush_en_o    = 1'b0;
            assign if_id_flush_en_o = 1'b1;
            assign id_ex_flush_en_o = 1'b1;
        end // 为跳转指令(flush_flag = 011)且跳转时
        else if (flush_flag_ex_i == 3'b001) begin
            assign pc_flush_en_o    = flush_flag_ex_i[2];
            assign if_id_flush_en_o = flush_flag_ex_i[1];
            assign id_ex_flush_en_o = flush_flag_ex_i[0];
        end // 为ex插入气泡(flush_flag = 001)时
        else if (flush_flag_mem_i == 3'b001) begin
            assign pc_flush_en_o    = flush_flag_mem_i[2];
            assign if_id_flush_en_o = flush_flag_mem_i[1];
            assign id_ex_flush_en_o = flush_flag_mem_i[0];
        end // 为ex插入气泡(flush_flag = 001)时
        else begin
            assign pc_flush_en_o    = 1'b0;
            assign if_id_flush_en_o = 1'b0;
            assign id_ex_flush_en_o = 1'b0;
        end
    end

    always @(*) begin
        if (stall_flag_ex_i != 3'b0) begin
            assign pc_stall_en_o    = stall_flag_ex_i[2];
            assign if_id_stall_en_o = stall_flag_ex_i[1];
            assign id_ex_stall_en_o = stall_flag_ex_i[0];
        end
        else begin
            assign pc_stall_en_o    = stall_flag_mem_i[2];
            assign if_id_stall_en_o = stall_flag_mem_i[1];
            assign id_ex_stall_en_o = stall_flag_mem_i[0];
        end
    end
    
    

/*
解决数据冲突使用的方式为最粗暴的暂停流水线
EXU发出信号：
    stall-> pc    = 1
        -> if_id = 1
        -> id_ex = 0
    flush-> pc    = 0
        -> if_id = 0
        -> id_ex = 1 (将写入NOP当作冲刷)
*/

    // always @(*) begin
    //     jump_addr_o = jump_addr_i;
    //     jump_en_o   = jump_en_i; 
    //     if (jump_en_i) begin
    //         if_id_flush_en_o = 1'b1; // 冲刷流水线
    //         id_ex_flush_en_o = 1'b1; // 冲刷流水线
    //     end
    //     else begin
    //         if_id_flush_en_o  = 1'b0;
    //         id_ex_flush_en_o  = 1'b0;
    //     end
        
    //     // assign flush_flag_o = jump_en_i || flush_flag_ex_i ? 1'b1 : 1'b0;
    // end

endmodule 