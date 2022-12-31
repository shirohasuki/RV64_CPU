`include "./defines.v"

import "DPI-C" function void ebreak();

module ex (
    // from id_ex // 
    input wire[31:0]  inst_i,
	input wire[63:0]  inst_addr_i, // pc
	input wire[63:0]  op1_i,	
	input wire[63:0]  op2_i,
	input wire[4:0]   rd_addr_i,	
	input wire        reg_wen_i,	 
 
    input wire[63:0]  base_addr_i, // 基地址
    input wire[63:0]  offset_addr_i, // 偏移地址
     
    // to wb  
    output reg[63:0]  rd_wdata_o,
    output reg[4:0]   rd_waddr_o,
    output reg        reg_wen_o,
    output reg[63:0]  inst_addr_o, // 用于验证每级传递的pc

    // to ctrl
    output reg[63:0]  jump_addr_o,
    output reg        jump_en_o,
    output reg[2:0]   flush_flag_o,
    output reg[2:0]   stall_flag_o,

    // from mem
    input reg[63:0]   mem_rdata_i, 
    // TODO：设想改为读取到的数据给wb模块，不给ex，但是目前没理清 

    // to mem
    output wire       mem_ren_o,
    output reg[63:0]  mem_raddr_o,

    output wire       mem_wen_o,
    output reg[63:0]  mem_waddr_o,
    output reg[63:0]  mem_wdata_o,
    output reg[7:0]   mem_wmask
);

    wire[6:0] opcode; // 7byte (6~0)
    wire[4:0] rd; // 5byte (11~7)
    wire[2:0] func3;
    wire[4:0] rs1;
    wire[4:0] rs2;
    //wire[11:0] imm;
    wire[6:0] func7;
    //wire[4:0] shamt;
    

    assign opcode = inst_i[6:0];
    assign rd     = inst_i[11:7];
    assign func3  = inst_i[14:12];
    assign rs1    = inst_i[19:15];
    assign rs2    = inst_i[24:20];
    //assign shamt= inst_i[24:20];
    assign func7  = inst_i[31:25];
    //assign imm  = inst_i[31:20];


    // ALU
    wire[63:0] op1_i_add_op2_i;
    wire[63:0] op1_i_sub_op2_i;
    wire[63:0] op1_i_mul_op2_i;
    wire[63:0] op1_i_and_op2_i;
    wire[63:0] op1_i_xor_op2_i;
    wire[63:0] op1_i_or_op2_i;
    wire[63:0] op1_i_rem_op2_i;
    wire[63:0] op1_i_rem_op2_i_unsigned;
    wire[63:0] op1_i_div_op2_i;
    wire[63:0] op1_i_div_op2_i_unsigned; 
    wire[63:0] op1_i_shift_left_op2_i_unsigned;
    wire[63:0] op1_i_shift_right_op2_i_unsigned;
    wire[63:0] op1_i_shift_right_op2_i_signed;
    wire[63:0] base_addr_add_addr_offset; // 偏移地址计算
    wire op1_i_equal_op2_i; // 判断分支标志位
    wire op1_i_less_op2_i_signed;
    wire op1_i_less_op2_i_unsigned;

    assign op1_i_add_op2_i                  = op1_i + op2_i;               // 加法器
    assign op1_i_sub_op2_i                  = op1_i - op2_i;               // 减(待改进)
    assign op1_i_mul_op2_i                  = op1_i * op2_i;               // 乘
    assign op1_i_and_op2_i                  = op1_i & op2_i;               // 与
    assign op1_i_xor_op2_i                  = op1_i ^ op2_i;               // 异或
    assign op1_i_or_op2_i                   = op1_i | op2_i;               // 或
    assign op1_i_rem_op2_i                  = $signed(op1_i) % $signed(op2_i);               // 取余
    assign op1_i_rem_op2_i_unsigned         = op1_i % op2_i;
    assign op1_i_div_op2_i                  = $signed(op1_i) / $signed(op2_i);               // 除
    assign op1_i_div_op2_i_unsigned         = op1_i / op2_i;               // 除
    assign op1_i_shift_left_op2_i_unsigned  = op1_i << op2_i;              // 逻辑左移 sll
    assign op1_i_shift_right_op2_i_unsigned = op1_i >> op2_i;              // 逻辑右移 srl
    assign op1_i_shift_right_op2_i_signed   = $signed(op1_i) >>> op2_i;    // 算术右移 sra                            
    assign base_addr_add_addr_offset        = base_addr_i + offset_addr_i; // 计算地址单元
    assign op1_i_equal_op2_i                = (op1_i == op2_i)? 1'b1 : 1'b0;
    assign op1_i_less_op2_i_signed          = ($signed(op1_i) < $signed(op2_i))? 1'b1 : 1'b0;
    assign op1_i_less_op2_i_unsigned        = (op1_i < op2_i)? 1'b1 : 1'b0;
    
    // compress to 32
    wire[63:0] compress_add;
    wire[63:0] compress_sub;
    wire[63:0] compress_mul;
    wire[63:0] compress_and;
    wire[63:0] compress_xor;
    wire[63:0] compress_or;
    wire[63:0] compress_rem;
    wire[63:0] compress_div;
    wire[63:0] compress_shift_left_unsigned;
    wire[63:0] compress_shift_right_unsigned;
    wire[63:0] compress_shift_right_signed;
    wire[63:0] compress_addr_offset; // 偏移地址计算

    assign compress_add                  = {{32{op1_i_add_op2_i[31]}}, op1_i_add_op2_i[31:0]};                  // 加法器       
    assign compress_sub                  = {{32{op1_i_sub_op2_i[31]}}, op1_i_sub_op2_i[31:0]};                  // 减(待改进)
    assign compress_mul                  = {{32{op1_i_mul_op2_i[31]}}, op1_i_mul_op2_i[31:0]};                  // 乘
    assign compress_and                  = {{32{op1_i_and_op2_i[31]}}, op1_i_and_op2_i[31:0]};                  // 与
    assign compress_xor                  = {{32{op1_i_xor_op2_i[31]}}, op1_i_xor_op2_i[31:0]};                  // 异或
    assign compress_or                   = {{32{op1_i_or_op2_i[31]}}, op1_i_or_op2_i[31:0]};                    // 或
    assign compress_rem                  = {{32{{op1_i[31:0] % op2_i[31:0]}[31]}}, {op1_i[31:0] % op2_i[31:0]}[31:0]};
    assign compress_div                  = {{32{op1_i_div_op2_i[31]}}, op1_i_div_op2_i[31:0]};
    assign compress_shift_left_unsigned  = {{32{{op1_i[31:0] << op2_i[31:0]}[31]}}, {op1_i[31:0] << op2_i[31:0]}[31:0]};  // 逻辑左移
    assign compress_shift_right_unsigned = {{32{{op1_i[31:0] >> op2_i[31:0]}[31]}}, {op1_i[31:0] >> op2_i[31:0]}[31:0]};// 逻辑右移
    assign compress_shift_right_signed   = {{32{{$signed(op1_i[31:0]) >>> op2_i[4:0]}[31]}}, {$signed(op1_i[31:0]) >>> op2_i[4:0]}[31:0]};    // 算术右移
    assign compress_addr_offset          = {{32{base_addr_add_addr_offset[31]}}, base_addr_add_addr_offset[31:0]};  // 计算地址单元
    // assign op1_i_equal_op2_i         = (op1_i == op2_i)? 1'b1 : 1'b0;
    // assign op1_i_less_op2_i_signed   = ($signed(op1_i) < $signed(op2_i))? 1'b1 : 1'b0;
    // assign op1_i_less_op2_i_unsigned = (op1_i < op2_i)? 1'b1 : 1'b0;


    // type I
    // wire[63:0]  SRA_mask;
    // assign      SRA_mask = (64'hffff_ffff) >> op2_i[4:0];// 为了保持复用，不用shmat
    // 通过掩码移位
    
    // always @(*) begin
    //     $display("[ex] mem_rdata_i= %x", mem_rdata_i); 
    // end


    always @(*) begin
        inst_addr_o = inst_addr_i; // pc传递
        if (inst_i == `INST_EBREAK) begin 
            ebreak();
        end 
        case (opcode) 
            `INST_TYPE_I:begin
                jump_addr_o = 64'b0;
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b0; // 设置初值，防止出现锁存器
                stall_flag_o = 3'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;
                case (func3)
                    `INST_ADDI:begin
                        rd_wdata_o = op1_i_add_op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end
                    `INST_SLTI:begin
                        rd_wdata_o = {63'b0, op1_i_less_op2_i_signed};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    `INST_SLTIU:begin
                        rd_wdata_o = {63'b0, op1_i_less_op2_i_unsigned}; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    `INST_XORI:begin
                        rd_wdata_o = op1_i_xor_op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    `INST_ORI:begin
                        rd_wdata_o = op1_i_or_op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    `INST_ANDI:begin
                        rd_wdata_o = op1_i_and_op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    `INST_SLLI:begin
                        rd_wdata_o = op1_i_shift_left_op2_i_unsigned; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end // 逻辑左移
                    `INST_SRI:begin // SRI包含srli和srai
                        if (func7[5] == 1'b1) begin // SRAI
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            // rd_wdata_o = 64'b0; 
                            rd_wdata_o = op1_i_shift_right_op2_i_signed; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else begin // SRLI 逻辑右移
                            rd_wdata_o = op1_i_shift_right_op2_i_unsigned; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end                         
                    end 
                    default:begin
                        rd_wdata_o = 64'b0; 
                        rd_waddr_o = 5'b0;
                        reg_wen_o  = 1'b0;
                    end 
                endcase
            end

            `INST_TYPE_I_W: begin
                jump_addr_o = 64'b0;
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b0; // 设置初值，防止出现锁存器
                stall_flag_o = 3'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;
                case (func3)
                    `INST_ADDIW: begin
                        rd_wdata_o = compress_add; // compress to 32
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end
                    `INST_SLLIW:begin
                        rd_wdata_o = compress_shift_left_unsigned; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end // 逻辑左移
                    `INST_SRIW:begin // SRI包含srli和srai
                        if (func7[5] == 1'b1) begin // SRAIW
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            rd_wdata_o = compress_shift_right_signed; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else begin // SRLIW 逻辑右移
                            rd_wdata_o = compress_shift_right_unsigned; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end                         
                    end 
                    default:begin
                        rd_wdata_o = 64'b0; 
                        rd_waddr_o = 5'b0;
                        reg_wen_o  = 1'b0;
                    end 
                endcase
            end

            `INST_TYPE_R_M:begin
                jump_addr_o = 64'b0;
                jump_en_o = 1'b0;
                flush_flag_o = 3'b0;// 设置初值，防止出现锁存器
                stall_flag_o = 3'b0;
                mem_wen_o = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask = 8'b0;
                case (func3)
                    `INST_ADD_SUB_MUL: begin //ADD和SUB的func3相同，func7不同
                        if (func7 == 7'b0000000) begin // add
                            rd_wdata_o = op1_i_add_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else if (func7 == 7'b0000001) begin // mul
                            rd_wdata_o = op1_i_mul_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else begin // sub
                            rd_wdata_o = op1_i_sub_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end
                    `INST_SLL: begin 
                            rd_wdata_o = op1_i_shift_left_op2_i_unsigned; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                    end // 逻辑左移
                    `INST_SLT: begin 
                            rd_wdata_o = {63'b0, op1_i_less_op2_i_signed}; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                    end 
                    `INST_SLTU: begin 
                            rd_wdata_o = {63'b0, op1_i_less_op2_i_unsigned}; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                    end 
                    `INST_XOR: begin 
                            rd_wdata_o = op1_i_xor_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                    end 
                    `INST_SR_DIVU: begin 
                        if (func7 == 7'b010000) begin // SRA 算术右移
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            rd_wdata_o = op1_i_shift_right_op2_i_signed;
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else if (func7 == 7'b000000) begin // SRL 逻辑右移
                            rd_wdata_o = op1_i_shift_right_op2_i_unsigned; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else begin // divu
                            rd_wdata_o = op1_i_div_op2_i_unsigned; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end  
                    `INST_OR_REM: begin 
                        if (func7[6] == 1'b0) begin // or
                            rd_wdata_o = op1_i_or_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else begin // rem
                            rd_wdata_o = op1_i_rem_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end 
                    `INST_AND_REMU: begin 
                        if (func7 == 7'b0000000) begin // AND
                            rd_wdata_o = op1_i_and_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else begin // remu
                            rd_wdata_o = op1_i_rem_op2_i_unsigned;
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end 
                    default: begin
                        rd_wdata_o = 64'b0; 
                        rd_waddr_o = 5'b0;
                        reg_wen_o  = 1'b0;
                    end 
                endcase
            end

            `INST_TYPE_R_M_W:begin
                jump_addr_o = 64'b0;
                jump_en_o = 1'b0;
                flush_flag_o = 3'b0;// 设置初值，防止出现锁存器
                stall_flag_o = 3'b0;
                mem_wen_o = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask = 8'b0;
                case (func3)
                    `INST_ADDW_SUBW_MULW: begin //ADD和SUB的func3相同，func7不同
                        if (func7 == 7'b0000000) begin // add
                            rd_wdata_o = compress_add; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else if (func7 == 7'b0000001) begin // mul
                            rd_wdata_o = compress_mul; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else begin // sub
                            rd_wdata_o = compress_sub; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end
                    `INST_SLLW:begin
                        rd_wdata_o = compress_shift_left_unsigned; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end // 逻辑左移
                    `INST_SRW:begin // SR包含srl和sra
                        if (func7[5] == 1'b1) begin // SRAW
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            rd_wdata_o = compress_shift_right_signed; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else begin // SRLW 逻辑右移
                            rd_wdata_o = compress_shift_right_unsigned; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end                         
                    end 
                    `INST_REMW: begin 
                        rd_wdata_o = compress_rem; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    `INST_DIVW: begin 
                        rd_wdata_o = compress_div; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end  
                    default: begin
                        rd_wdata_o = 64'b0; 
                        rd_waddr_o = 5'b0;
                        reg_wen_o  = 1'b0;
                    end 
                endcase
            end

            `INST_TYPE_B:begin
                rd_wdata_o = 64'b0; 
                rd_waddr_o = 5'b0;
                reg_wen_o  = 1'b0; 
                mem_wen_o = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask = 8'b0;
                stall_flag_o = 3'b000;
                flush_flag_o = 3'b111;
                case (func3)
                    `INST_BNE: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = ~op1_i_equal_op2_i;
                        // flush_flag_o = 1'b0;
                    end // 不等跳转
                    `INST_BEQ: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = op1_i_equal_op2_i;
                        // flush_flag_o = 1'b0;
                    end // 相等跳转
                    `INST_BLT: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = op1_i_less_op2_i_signed;
                        // flush_flag_o = 1'b0;
                    end // 小于跳转(有符号)
                    `INST_BLTU: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = op1_i_less_op2_i_unsigned;
                        // flush_flag_o = 1'b0;
                    end //小于跳转(无符号)
                    `INST_BGE: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = ~op1_i_less_op2_i_signed;
                        // flush_flag_o = 1'b0;
                    end // 大于等于跳转(有符号)
                    `INST_BGEU: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = ~op1_i_less_op2_i_unsigned;
                        // flush_flag_o = 1'b0;
                    end // 大于等于跳转(无符号)
                    default: begin
                        jump_addr_o = 64'b0;
                        jump_en_o   = 1'b0;
                        // flush_flag_o = 1'b0;
                    end 
                endcase
            end
            // L:mem->reg
            `INST_TYPE_L: begin
                jump_addr_o = 64'b0;
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b001;// 设置初值，防止出现锁存器 // 给id_exNOP此处当作冲刷该级流水线
                stall_flag_o = 3'b110; // 流水线延迟用于访存
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;
                case (func3)
                    `INST_LB: begin 
                        rd_wdata_o = {{56{mem_rdata_i[7]}}, mem_rdata_i[7:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end
                    `INST_LH: begin 
                        rd_wdata_o = {{48{mem_rdata_i[15]}}, mem_rdata_i[15:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1; 
                    end
                    `INST_LW: begin
                        rd_wdata_o = {{32{mem_rdata_i[31]}}, mem_rdata_i[31:0]};
                        // rd_wdata_o = {32'b0, mem_rdata_i[31:0]};  
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                        // $display("EX: lw_data = %l", rd_wdata_o);
                    end
                    `INST_LD: begin
                        rd_wdata_o = {mem_rdata_i[63:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                        // $display("mem_rdata_i = %x", mem_rdata_i);
                    end
                    `INST_LBU: begin 
                        rd_wdata_o = {56'b0,mem_rdata_i[7:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                        // $display("here");
                    end
                    `INST_LHU: begin
                        rd_wdata_o = {48'b0,mem_rdata_i[15:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end
                    `INST_LWU: begin
                        rd_wdata_o = {32'b0,mem_rdata_i[31:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end
                    default begin
                        rd_wdata_o  = 64'b0; 
                        rd_waddr_o  = 5'b0;
                        reg_wen_o   = 1'b0;
                    end
                endcase
            end
            // S:reg->mem
            `INST_TYPE_S: begin
                jump_addr_o = 64'b0;
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b001; // 设置初值，防止出现锁存器
                stall_flag_o = 3'b110; // 流水线延迟用于访存
                rd_wdata_o  = 64'b0; 
                rd_waddr_o  = 5'b0;
                reg_wen_o   = 1'b0;
                case (func3)
                    `INST_SB: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        // mem_wdata_o = op2_i; 
                        mem_wdata_o = {56'b0, op2_i[7:0]}; 
                        mem_wmask   = 8'b00000001;
                        // mem_wmask   = 8'b11111111;
                        // $display("SB: mem_wdata_o = %l", op2_i);
                    end
                    `INST_SH: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        // mem_wdata_o = op2_i;
                        mem_wdata_o = {48'b0, op2_i[15:0]};
                        mem_wmask   = 8'b00000011;
                    end
                    `INST_SW: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        // mem_wdata_o = op2_i;
                        mem_wdata_o = {32'b0, op2_i[31:0]};
                        // mem_wdata_o = {op2_i[31:0], 32'b0};
                        mem_wmask   = 8'b00001111;
                        //$display("SW: mem_wdata_o = %l", op2_i);
                    end
                    `INST_SD: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        mem_wdata_o = op2_i;
                        mem_wmask   = 8'b11111111;
                        // 11111111 11111111 11111111 11111111
                    end
                    default begin
                        mem_wen_o   = 1'b0;
                        mem_waddr_o = 64'b0;
                        mem_wdata_o = 64'b0;
                        mem_wmask   = 8'b00000000;
                    end
                endcase
            end

            `INST_JAL: begin
                rd_wdata_o  = op1_i_add_op2_i; // rd = PC + 4
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                jump_addr_o = base_addr_add_addr_offset; // PC = PC + imm
                jump_en_o   = 1'b1;
                flush_flag_o = 3'b111;
                stall_flag_o = 3'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;
                //$display("here2");
                //$display("%llx", jump_addr_o );
            end // Jump And Link (PC += imm, rd = PC + 4)
            `INST_JALR: begin
                rd_wdata_o  = op1_i_add_op2_i; // rd = PC + 4
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                jump_addr_o = base_addr_add_addr_offset; // PC = rs1 + imm
                jump_en_o   = 1'b1;
                flush_flag_o = 3'b111;
                stall_flag_o = 3'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;
            end // Jump And Link Reg (PC = rs1 + imm, rd = PC + 4)		
            `INST_LUI: begin
                rd_wdata_o  = op2_i; 
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                jump_addr_o = 64'b0; //不跳转 
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b0;
                stall_flag_o = 3'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;      
            end // Load Upper Imm (rd = imm << 12)
            `INST_AUIPC: begin
                rd_wdata_o  = op1_i_add_op2_i; 
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                jump_addr_o = 64'b0; //不跳转 
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b001;
                stall_flag_o = 3'b110;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;      
            end // Add Upper Imm to PC
            default: begin
                jump_addr_o = 64'b0;
                jump_en_o   = 1'b0;
                flush_flag_o = 3'b0;// 设置初值，防止出现锁存器
                stall_flag_o = 3'b0;
                rd_wdata_o  = 64'b0; 
                rd_waddr_o  = 5'b0;
                reg_wen_o   = 1'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask   = 8'b0;
            end 
        endcase
    end
endmodule 