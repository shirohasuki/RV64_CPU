module ram #(
    parameter DW = 32, // 数据位宽
    parameter AW = 12, // 地址位宽
    parameter MEM_NUM = 4096 // 深度 
)
(
    input wire              clk,
    input wire              rst,
    input wire              w_en,
    input wire[AW-1:0]      w_addr_i,
    input wire[DW-1:0]      w_data_i,
    input wire              r_en,
    input wire[AW-1:0]      r_addr_i,
    output reg[DW-1:0]      r_data_o
);

    reg rd_wr_equ_flag;
    reg[31:0] w_data_reg;
    wire[31:0] r_data_write;
    assign r_data_o = rd_wr_equ_flag ? w_data_i : r_data_write; // 二选一选择器 
    // 若同时读写同一地址(冲突)，则读的数据为写的数据(w_data_i)
    // 若不冲突,则连至ram_template

    always @(posedge clk ) begin
        w_data_reg <= w_data_i; // 保存旧值，否则读数据时w_data已经清空
    end


    always @(posedge clk ) begin
        if (rst && w_en && r_en && (r_addr_i == w_addr_i))begin
            rd_wr_equ_flag <= 1'b1;
        end
        else begin
            rd_wr_equ_flag <= 1'b0;
        end   
    end

    ram_template#(
    .DW       ( DW ),
    .AW       ( AW ),
    .MEM_NUM  ( MEM_NUM )
    )ram_template_inst
    (
    .clk      ( clk      ),
    .rst      ( rst      ),
    .w_en     ( w_en     ),
    .w_addr_i ( w_addr_i ),
    .w_data_i ( w_data_i ),
    .r_en     ( r_en     ),
    .r_addr_i ( r_addr_i ),
    .r_data_o ( r_data_write  )
);


endmodule





module ram_template #(
    parameter DW = 32, // 数据位宽
    parameter AW = 12, // 地址位宽
    parameter MEM_NUM = 4096 // 深度 
)
(
    input wire              clk,
    input wire              rst,
    input wire              w_en,
    input wire[AW-1:0]      w_addr_i,
    input wire[DW-1:0]      w_data_i,
    input wire              r_en,
    input wire[AW-1:0]      r_addr_i,
    output reg[DW-1:0]      r_data_o
);

    reg[DW-1:0] memory[0:MEM_NUM-1];

    always @(posedge clk ) begin
        if (rst && r_en) begin
            r_data_o <= memory[r_addr_i];
        end
    end
    always @(posedge clk ) begin
        if (rst && w_en) begin
            memory[w_addr_i] <= w_data_i;
        end
    end

endmodule