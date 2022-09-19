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
     
    // to regs  
    output reg[63:0]  rd_wdata_o,
    output reg[4:0]   rd_waddr_o,
    output reg        reg_wen_o,
    output reg[63:0]  inst_addr_o, // 用于验证每级传递的pc

    // to ctrl
    output reg[63:0]  jump_addr_o,
    output reg        jump_en_o,
    output reg        hold_flag_o
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
    wire[63:0] op1_i_and_op2_i;
    wire[63:0] op1_i_xor_op2_i;
    wire[63:0] op1_i_or_op2_i;
    wire[63:0] op1_i_shift_left_op2_i;
    wire[63:0] op1_i_shift_right_op2_i;
    wire[63:0] base_addr_add_addr_offset; // 偏移地址计算
    wire op1_i_equal_op2_i; // 判断分支标志位
    wire op1_i_less_op2_i_signed;
    wire op1_i_less_op2_i_unsigned;

    assign op1_i_add_op2_i           = op1_i + op2_i;               // 加法器
    assign op1_i_sub_op2_i           = op1_i - op2_i;               // 减(待改进)
    assign op1_i_and_op2_i           = op1_i & op2_i;               // 与
    assign op1_i_xor_op2_i           = op1_i ^ op2_i;               // 异或
    assign op1_i_or_op2_i            = op1_i | op2_i;               // 或
    assign op1_i_shift_left_op2_i    = op1_i << op2_i;              // 左移
    assign op1_i_shift_right_op2_i   = op1_i >> op2_i;              // 右移
    assign base_addr_add_addr_offset = base_addr_i + offset_addr_i; // 计算地址单元
    assign op1_i_equal_op2_i         = (op1_i == op2_i)? 1'b1 : 1'b0;
    assign op1_i_less_op2_i_signed   = ($signed(op1_i) < $signed(op2_i))? 1'b1 : 1'b0;
    assign op1_i_less_op2_i_unsigned = (op1_i < op2_i)? 1'b1 : 1'b0;


    // type I
    wire[63:0]  SRA_mask;
    assign      SRA_mask = (64'hffff_ffff) >> op2_i[4:0];// 为了保持复用，不用shmat
    // 通过掩码移位

    // to regs (pc传递)
    // assign inst_addr_o = inst_addr_i;


    always @(*) begin
        inst_addr_o = inst_addr_i;
        $display("EXU: %x", inst_addr_o);
        if (inst_i == `INST_EBREAK) begin 
            ebreak();
        end 
        case (opcode) 
            `INST_TYPE_I:begin
                jump_addr_o = 64'b0;
                jump_en_o = 1'b0;
                hold_flag_o = 1'b0; // 设置初值，防止出现锁存器
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
                        rd_wdata_o = op1_i_shift_left_op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end // 逻辑左移
                    `INST_SRI:begin // SRI包含srli和srai
                        if (func7[5] == 1'b1) begin // SRAI
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            rd_wdata_o = 64'b0; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else begin // SRLI 逻辑右移
                            rd_wdata_o = op1_i_shift_right_op2_i; 
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
                hold_flag_o = 1'b0;// 设置初值，防止出现锁存器
                case (func3)
                    `INST_ADD_SUB: begin //ADD和SUB的func3相同，func7不同
                        if (func7[5] == 1'b0) begin // add
                            rd_wdata_o = op1_i_add_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else begin // sub
                            rd_wdata_o = op1_i - op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end
                    `INST_SLL: begin 
                            rd_wdata_o = op1_i_shift_left_op2_i; 
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
                    `INST_SR: begin 
                        if (func7[5] == 1'b1) begin // SRA 算术右移
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            rd_wdata_o = 64'b0;
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else begin // SRL 逻辑右移
                            rd_wdata_o = op1_i_shift_right_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                    end  
                    `INST_OR: begin 
                            rd_wdata_o = op1_i_or_op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                    end 
                    `INST_AND: begin 
                            rd_wdata_o = op1_i_and_op2_i; 
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
                case (func3)
                    `INST_BNE: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = ~op1_i_equal_op2_i;
                        hold_flag_o = 1'b0;
                    end // 不等跳转
                    `INST_BEQ: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = op1_i_equal_op2_i;
                        hold_flag_o = 1'b0;
                    end // 相等跳转
                    `INST_BLT: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = op1_i_less_op2_i_signed;
                        hold_flag_o = 1'b0;
                    end // 小于跳转(有符号)
                    `INST_BLTU: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = op1_i_less_op2_i_unsigned;
                        hold_flag_o = 1'b0;
                    end //小于跳转(无符号)
                    `INST_BGE: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = ~op1_i_less_op2_i_signed;
                        hold_flag_o = 1'b0;
                    end // 大于等于跳转(有符号)
                    `INST_BGEU: begin
                        jump_addr_o = base_addr_add_addr_offset;
                        jump_en_o   = ~op1_i_less_op2_i_unsigned;
                        hold_flag_o = 1'b0;
                    end // 大于等于跳转(无符号)
                    default: begin
                        jump_addr_o = 64'b0;
                        jump_en_o   = 1'b0;
                        hold_flag_o = 1'b0;
                    end 
                        
                endcase
            end
            `INST_JAL: begin
                rd_wdata_o = op1_i_add_op2_i; // rd = PC + 4
                rd_waddr_o = rd_addr_i;
                reg_wen_o  = 1'b1; 
                jump_addr_o = base_addr_add_addr_offset; // PC = PC + imm
                jump_en_o   = 1'b1;
                hold_flag_o = 1'b0;
            end // Jump And Link (PC += imm, rd = PC + 4)
            `INST_JALR: begin
                rd_wdata_o = op1_i_add_op2_i; // rd = PC + 4
                rd_waddr_o = rd_addr_i;
                reg_wen_o  = 1'b1; 
                jump_addr_o = base_addr_add_addr_offset; // PC = rs1 + imm
                jump_en_o   = 1'b1;
                hold_flag_o = 1'b0;
            end // Jump And Link Reg (PC = rs1 + imm, rd = PC + 4)
            `INST_LUI: begin
                rd_wdata_o  = op2_i; 
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                jump_addr_o = 64'b0; //不跳转 
                jump_en_o   = 1'b0;
                hold_flag_o = 1'b0;      
            end // Load Upper Imm (rd = imm << 12)
            `INST_AUIPC: begin
                rd_wdata_o  = op1_i_add_op2_i; 
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                jump_addr_o = 64'b0; //不跳转 
                jump_en_o   = 1'b0;
                hold_flag_o = 1'b0;      
            end // Add Upper Imm to PC
            default: begin
                jump_addr_o = 64'b0;
                jump_en_o   = 1'b0;
                hold_flag_o = 1'b0;// 设置初值，防止出现锁存器
                rd_wdata_o  = 64'b0; 
                rd_waddr_o  = 5'b0;
                reg_wen_o   = 1'b0;
            end 
        endcase
    end
endmodule 