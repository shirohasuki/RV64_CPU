`include "./defines.v"

module ctrl (
    // from ex 
    input wire[63:0] typej_jump_addr_i,
    input wire       typej_jump_en_i,
    // from clint 
    input wire[63:0] intr_jump_addr_i,
    input wire       intr_jump_en_i,
    // from ex
    input wire       ex_inst_isload_i,
    input wire       ex_inst_isstore_i,
    // from mem 
    input wire       mem_inst_isload_i,
    input wire       mem_inst_isstore_i,
    //from rename
    input wire       rs_id_ex_hit_i, 
    // from axi 
    input wire       axi_busy_i,
    input wire       axi_busy_end_i,

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
    output reg       id_ex_flush_en_o,
    // to id_clint
    output reg       id_clint_stall_en_o,
    output reg       id_clint_flush_en_o,
    // to ex_mem
    output reg       ex_mem_stall_en_o,
    output reg       ex_mem_flush_en_o,
    // to mem_wb
    output reg       mem_wb_stall_en_o,
    output reg       mem_wb_flush_en_o
);

    assign jump_addr_o = typej_jump_addr_i | intr_jump_addr_i;
    assign jump_en_o   = typej_jump_en_i | intr_jump_en_i; 
    always @(*) begin
        if ((typej_jump_en_i & intr_jump_en_i) | (typej_jump_addr_i != 64'b0 && intr_jump_addr_i != 64'b0)) begin
            $display("JUMP conflict!\n"); // 防跳转冲突检测,按道理不应该出现
        end 
    end

    reg load_data_hit; // flush 001 stall 110
    reg jump;          // flush 011 stall 无
    reg busy;          // flush 001 stall 110
    reg load_inst;     // flush 001 stall 110
    reg store_inst;    // flush 001 stall 110
 
    assign load_data_hit =  (rs_id_ex_hit_i & ex_inst_isload_i) ? 1'b1: 1'b0;
    assign jump          =  typej_jump_en_i | intr_jump_en_i  ? 1'b1: 1'b0;
    assign busy          =  axi_busy_i ? 1'b1: 1'b0;
    assign load_inst     =  (ex_inst_isload_i  | mem_inst_isload_i) ? 1'b1: 1'b0;
    assign store_inst    =  (ex_inst_isstore_i | mem_inst_isstore_i) ? 1'b1: 1'b0;

    always @(*) begin
        if (jump == 1'b1) begin
            pc_flush_en_o    = 1'b0;
            if_id_flush_en_o = 1'b1;
            id_ex_flush_en_o = 1'b1;
            ex_mem_flush_en_o = 1'b0;
            mem_wb_flush_en_o = 1'b0;
        end    
        else if (busy) begin
            pc_flush_en_o     = 1'b0;
            if_id_flush_en_o  = 1'b0;
            id_ex_flush_en_o  = 1'b1 & ~axi_busy_end_i;
            ex_mem_flush_en_o = 1'b0;
            mem_wb_flush_en_o = 1'b0;
            // $display("HERE");
        end
        else if (load_inst) begin
            pc_flush_en_o     = 1'b0;
            if_id_flush_en_o  = 1'b0;
            id_ex_flush_en_o  = 1'b1; // 只要load_inst还在mem模块EX就一直flush
            ex_mem_flush_en_o = 1'b0;
            mem_wb_flush_en_o = 1'b0;
            // $display("HERE");
        end
        else if (store_inst) begin
            pc_flush_en_o     = 1'b0;
            if_id_flush_en_o  = 1'b0;
            id_ex_flush_en_o  = 1'b1;
            ex_mem_flush_en_o = 1'b0;
            mem_wb_flush_en_o = 1'b0;
            // $display("HERE");
        end  // 和load_inst情况可以合并
        else if (load_data_hit) begin
            pc_flush_en_o     = 1'b0;
            if_id_flush_en_o  = 1'b0;
            id_ex_flush_en_o  = 1'b1;
            ex_mem_flush_en_o = 1'b0;
            mem_wb_flush_en_o = 1'b0;
        end
        else begin
            pc_flush_en_o     = 1'b0;
            if_id_flush_en_o  = 1'b0;
            id_ex_flush_en_o  = 1'b0; 
            ex_mem_flush_en_o = 1'b0;
            mem_wb_flush_en_o = 1'b0;       
        end 
    end

    always @(*) begin
        if (busy) begin
            pc_stall_en_o     = 1'b1 & ~axi_busy_end_i;
            if_id_stall_en_o  = 1'b1 & ~axi_busy_end_i;
            id_ex_stall_en_o  = 1'b0;//1'b1 & ~axi_busy_end_i;
            ex_mem_stall_en_o = 1'b1 & ~axi_busy_end_i;
            mem_wb_stall_en_o = 1'b0;
        end
        else if (load_inst) begin
            pc_stall_en_o     = 1'b1;
            if_id_stall_en_o  = 1'b1;
            id_ex_stall_en_o  = 1'b0;
            ex_mem_stall_en_o = mem_inst_isload_i;
            mem_wb_stall_en_o = 1'b0;
        end
        else if (store_inst) begin
            pc_stall_en_o     = 1'b1;
            if_id_stall_en_o  = 1'b1;
            id_ex_stall_en_o  = 1'b0;
            ex_mem_stall_en_o = mem_inst_isstore_i ;//&& ~ex_inst_isstore_i);
            mem_wb_stall_en_o = 1'b0;
        end
        else if (load_data_hit) begin
            pc_stall_en_o     = 1'b1;
            if_id_stall_en_o  = 1'b1;
            id_ex_stall_en_o  = 1'b0;
            ex_mem_stall_en_o = 1'b0;
            mem_wb_stall_en_o = 1'b0;
        end
        else begin
            pc_stall_en_o     = 1'b0;
            if_id_stall_en_o  = 1'b0;
            id_ex_stall_en_o  = 1'b0;
            ex_mem_stall_en_o = 1'b0;
            mem_wb_stall_en_o = 1'b0;        
        end 
    end

    

/*
解决数据冲突使用的方式为最粗暴的暂停流水线(老版本，现已更新为方案4)
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