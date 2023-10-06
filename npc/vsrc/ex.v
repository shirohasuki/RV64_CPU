`include "./defines.v"

// import "DPI-C" function void ebreak();
import "DPI-C" function void get_pc(input longint pc);

module ex (
    input wire        clk, 
    // from id_ex // 
    input wire[31:0]  inst_i,
	input wire[63:0]  inst_addr_i, // pc
	input wire[63:0]  op1_i,	
	input wire[63:0]  op2_i,
	input wire[4:0]   rd_addr_i,	
	input wire        reg_wen_i,	 
 
    input wire[63:0]  base_addr_i, // 基地址
    input wire[63:0]  offset_addr_i, // 偏移地址

    // input wire[63:0]  csr_data_i,
    input wire[11:0]  csr_waddr_i,
    input wire        csr_wen_i,

    // to ctrl
    output reg[63:0]  typej_jump_addr_o,
    output reg        typej_jump_en_o,
    // output reg[2:0]   flush_flag_o,
    // output reg[2:0]   stall_flag_o,

    // // from mem
    // input reg[63:0]   mem_rdata_i, 

    // to ex_mem
    output wire[31:0] inst_o,
    output reg[63:0]  inst_addr_o, // 用于验证每级传递的pc

    output wire       mem_ren_o,
    output reg[63:0]  mem_raddr_o,

    output wire       mem_wen_o,
    output reg[63:0]  mem_waddr_o,
    output reg[63:0]  mem_wdata_o,
    output reg[7:0]   mem_wmask_o,

    output reg[63:0]  rd_wdata_o,
    output reg[4:0]   rd_waddr_o,
    output reg        reg_wen_o,
    // to csr_regs
    output wire[11:0] csr_waddr_o,
    output wire[63:0] csr_data_o,
    output wire       csr_wen_o,

    // to ctrl and ex_mem
    output wire       isload_o,
    output wire       isstore_o
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
    assign inst_o = inst_i;

    // wire[63:0] immU = {{32{inst_i[31]}}, inst_i[31:12], 12'b0};

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

    assign op1_i_add_op2_i                  = op1_i + op2_i;                            // 加法器
    assign op1_i_sub_op2_i                  = op1_i - op2_i;                            // 减(待改进)
    assign op1_i_mul_op2_i                  = op1_i * op2_i;                            // 乘
    assign op1_i_and_op2_i                  = op1_i & op2_i;                            // 与
    assign op1_i_xor_op2_i                  = op1_i ^ op2_i;                            // 异或
    assign op1_i_or_op2_i                   = op1_i | op2_i;                            // 或
    assign op1_i_rem_op2_i                  = $signed(op1_i) % $signed(op2_i);          // 取余(没有signed默认为无符号)
    assign op1_i_rem_op2_i_unsigned         = op1_i % op2_i;
    assign op1_i_div_op2_i                  = $signed(op1_i) / $signed(op2_i);          // 除
    assign op1_i_div_op2_i_unsigned         = op1_i / op2_i;                            // 除
    assign op1_i_shift_left_op2_i_unsigned  = op1_i << op2_i[5:0];                           // 逻辑左移 sll
    assign op1_i_shift_right_op2_i_unsigned = op1_i >> op2_i[5:0];                           // 逻辑右移 srl
    assign op1_i_shift_right_op2_i_signed   = $signed(op1_i) >>> op2_i[5:0];                 // 算术右移 sra                            
    assign base_addr_add_addr_offset        = base_addr_i + offset_addr_i;              // 计算地址单元
    assign op1_i_equal_op2_i                = (op1_i == op2_i)? 1'b1 : 1'b0;
    assign op1_i_less_op2_i_unsigned        = (op1_i < op2_i)? 1'b1 : 1'b0;
    assign op1_i_less_op2_i_signed          = ($signed(op1_i) < $signed(op2_i))? 1'b1 : 1'b0;
    // 算数右移>>>和逻辑右移。
    // 对于无符号数，>>和>>>没有区别，都是按位右移，左侧补零。
    // 有符号数的逻辑右移>>与无符号数一样，将所有位整体右移，左侧补零。
    // 而有符号数的算数右移>>>，左侧扩位符号位，如右移n位，则左侧增加n个符号位，右侧删除n位，即进行除n运算
    
    // compress to 32
    wire[63:0] compress_add;
    wire[63:0] compress_sub;
    wire[63:0] compress_mul;
    wire[63:0] compress_and;
    wire[63:0] compress_xor;
    wire[63:0] compress_or;
    wire[63:0] compress_rem;
    wire[63:0] compress_rem_unsigned;
    wire[63:0] compress_div;
    wire[63:0] compress_div_unsigned;
    wire[63:0] compress_shift_left_unsigned;
    wire[63:0] compress_shift_right_unsigned;
    wire[63:0] compress_shift_right_signed;
    wire[63:0] compress_addr_offset; // 偏移地址计算


    // wire signed [31:0] compress_op1_i; assign compress_op1_i = op1_i[31:0];
    // 中间转换变量
    wire[31:0] compress_div_tmp;            assign compress_div_tmp           = $signed(op1_i[31:0]) / op2_i[31:0];
    wire[31:0] compress_div_unsigned_tmp;   assign compress_div_unsigned_tmp  = op1_i[31:0] / op2_i[31:0];
    wire[31:0] compress_rem_tmp;            assign compress_rem_tmp           = $signed(op1_i[31:0]) % op2_i[31:0];
    wire[31:0] compress_rem_unsigned_tmp;   assign compress_rem_unsigned_tmp  = op1_i[31:0] % op2_i[31:0];
    wire[31:0] compress_shift_left_u_tmp;   assign compress_shift_left_u_tmp  = op1_i[31:0] << op2_i[4:0];
    wire[31:0] compress_shift_right_u_tmp;  assign compress_shift_right_u_tmp = op1_i[31:0] >> op2_i[4:0];
    wire[31:0] compress_shift_right_s_tmp;  assign compress_shift_right_s_tmp = $signed(op1_i[31:0]) >>> op2_i[4:0];
        // wire[31:0] compress_shift_right_s_tmp;  assign compress_shift_right_s_tmp = (op1_i[31] == 1'b1) ? ($signed(compress_op1_i) >>> op2_i[4:0]) : ((op1_i[31:0]) >> op2_i[4:0]);

    assign compress_add                  = {{32{op1_i_add_op2_i[31]}}, op1_i_add_op2_i[31:0]};                  // 加法器       
    assign compress_sub                  = {{32{op1_i_sub_op2_i[31]}}, op1_i_sub_op2_i[31:0]};                  // 减(待改进)
    assign compress_mul                  = {{32{op1_i_mul_op2_i[31]}}, op1_i_mul_op2_i[31:0]};                  // 乘
    assign compress_and                  = {{32{op1_i_and_op2_i[31]}}, op1_i_and_op2_i[31:0]};                  // 与
    assign compress_xor                  = {{32{op1_i_xor_op2_i[31]}}, op1_i_xor_op2_i[31:0]};                  // 异或
    assign compress_or                   = {{32{op1_i_or_op2_i[31]}}, op1_i_or_op2_i[31:0]};                    // 或
    assign compress_rem                  = {{32{compress_rem_tmp[31]}}, compress_rem_tmp[31:0]};
    assign compress_rem_unsigned         = {{32{compress_rem_unsigned_tmp[31]}}, compress_rem_unsigned_tmp[31:0]};
    assign compress_div                  = {{32{compress_div_tmp[31]}}, compress_div_tmp[31:0]};
    assign compress_div_unsigned         = {{32{compress_div_unsigned_tmp[31]}}, compress_div_unsigned_tmp[31:0]};
    assign compress_shift_left_unsigned  = {{32{compress_shift_left_u_tmp[31]}}, compress_shift_left_u_tmp[31:0]};  // 逻辑左移
    assign compress_shift_right_unsigned = {{32{compress_shift_right_u_tmp[31]}}, compress_shift_right_u_tmp[31:0]};// 逻辑右移
    assign compress_shift_right_signed   = {{32{compress_shift_right_s_tmp[31]}}, compress_shift_right_s_tmp[31:0]};// 算术右移
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

    always @(posedge clk) begin
        get_pc(inst_addr_i);
        // if (inst_i != `INST_NOP) begin
        //     $display("[EXU] pc_addr: %x inst: %x", inst_addr_i[31:0], inst_i);
        // end
        // else begin
        //     $display("[EXU] pc_addr: %x inst: NOP", inst_addr_i[31:0]);
        // end
    end

    always @(*) begin
        inst_addr_o = inst_addr_i; // pc传递
        // if (inst_i == `INST_EBREAK) begin 
        //     ebreak();
        // end 
        case (opcode) 
            `INST_TYPE_I:begin
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o   = 1'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o   = 1'b0; 
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0; 
                case (func3)
                    `INST_ADDI:begin
                        rd_wdata_o = op1_i_add_op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                        // if (inst_i == `INST_NOP) begin
                        //     isload_o    = 1'b0;
                        // end // NOP会转换为addi，不能暂停流水线
                        // else begin
                        //     isload_o    = 1'b1;
                        // end 
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
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o   = 1'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o   = 1'b0; 
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;                  
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
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o = 1'b0;
                mem_wen_o = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;   
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
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o = 1'b0;
                // flush_flag_o = 3'b0;// 设置初值，防止出现锁存器
                // stall_flag_o = 3'b0;
                mem_wen_o = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;   
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
                    `INST_SRW_DIVUW: begin // SR包含srl和sra
                        if (func7[5] == 1'b1) begin // SRAW 算术右移
                            // rd_wdata_o = ((op1_i_shift_right_op2_i) & SRA_mask) | ({32{op1_i[31]}} & (~SRA_mask));
                            rd_wdata_o = compress_shift_right_signed; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end 
                        else if (func7[0] == 1'b1) begin // DIVUW 截断除法
                            rd_wdata_o = compress_div_unsigned; 
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
                    `INST_REMUW: begin 
                        rd_wdata_o = compress_rem_unsigned; 
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
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o   = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;   
                case (func3)
                    `INST_BNE: begin
                        typej_jump_addr_o = base_addr_add_addr_offset;
                        typej_jump_en_o   = ~op1_i_equal_op2_i;
                        // flush_flag_o = 1'b0;
                    end // 不等跳转
                    `INST_BEQ: begin
                        typej_jump_addr_o = base_addr_add_addr_offset;
                        typej_jump_en_o   = op1_i_equal_op2_i;
                        // flush_flag_o = 1'b0;
                    end // 相等跳转
                    `INST_BLT: begin
                        typej_jump_addr_o = base_addr_add_addr_offset;
                        typej_jump_en_o   = op1_i_less_op2_i_signed;
                        // flush_flag_o = 1'b0;
                    end // 小于跳转(有符号)
                    `INST_BLTU: begin
                        typej_jump_addr_o = base_addr_add_addr_offset;
                        typej_jump_en_o   = op1_i_less_op2_i_unsigned;
                        // flush_flag_o = 1'b0;
                    end //小于跳转(无符号)
                    `INST_BGE: begin
                        typej_jump_addr_o = base_addr_add_addr_offset;
                        typej_jump_en_o   = ~op1_i_less_op2_i_signed;
                        // flush_flag_o = 1'b0;
                    end // 大于等于跳转(有符号)
                    `INST_BGEU: begin
                        typej_jump_addr_o = base_addr_add_addr_offset;
                        typej_jump_en_o   = ~op1_i_less_op2_i_unsigned;
                        // flush_flag_o = 1'b0;
                    end // 大于等于跳转(无符号)
                    default: begin
                        typej_jump_addr_o = 64'b0;
                        typej_jump_en_o   = 1'b0;
                        // flush_flag_o = 1'b0;
                    end 
                endcase
            end
            // L:mem->reg
            `INST_TYPE_L: begin
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o   = 1'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;   
                case (func3)
                    `INST_LB: begin 
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {{56{mem_rdata_i[7]}}, mem_rdata_i[7:0]};
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                        isload_o    = 1'b1;
                    end
                    `INST_LH: begin 
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {{48{mem_rdata_i[15]}}, mem_rdata_i[15:0]};
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1; 
                        isload_o    = 1'b1;
                    end
                    `INST_LW: begin
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {{32{mem_rdata_i[31]}}, mem_rdata_i[31:0]};
                        // rd_wdata_o = {32'b0, mem_rdata_i[31:0]};  
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        isload_o    = 1'b1;
                        // $display("EX: lw_data = %d", rd_wdata_o);
                    end
                    `INST_LD: begin
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {mem_rdata_i[63:0]};
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        // flush_flag_o = 3'b001; // 给id_ex NOP此处当作冲刷该级流水线
                        // stall_flag_o = 3'b110; // 流水线延迟用于访存
                        isload_o    = 1'b1;
                        // $display("mem_rdata_i = %x", mem_rdata_i);
                    end
                    `INST_LBU: begin 
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {56'b0,mem_rdata_i[7:0]};
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        isload_o    = 1'b1;
                        // $display("here");
                    end
                    `INST_LHU: begin
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {48'b0,mem_rdata_i[15:0]};
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        isload_o    = 1'b1;
                    end
                    `INST_LWU: begin
                        mem_ren_o   = 1'b1;
                        mem_raddr_o = base_addr_add_addr_offset;
                        // rd_wdata_o = {32'b0,mem_rdata_i[31:0]};
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        isload_o    = 1'b1;
                    end
                    default begin
                        mem_ren_o   = 1'b0;
                        mem_raddr_o = 64'b0;
                        rd_wdata_o  = 64'b0; 
                        rd_waddr_o  = 5'b0;
                        reg_wen_o   = 1'b0;
                        isload_o    = 1'b0;
                    end
                endcase
            end
            // S:reg->mem
            `INST_TYPE_S: begin
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o   = 1'b0;
                rd_wdata_o  = 64'b0; 
                rd_waddr_o  = 5'b0;
                reg_wen_o   = 1'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o    = 1'b1;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0; 
                case (func3)
                    `INST_SB: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        mem_wdata_o = {56'b0, op2_i[7:0]}; 
                        mem_wmask_o   = 8'b00000001;
                    end
                    `INST_SH: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        mem_wdata_o = {48'b0, op2_i[15:0]};
                        mem_wmask_o   = 8'b00000011;
                    end
                    `INST_SW: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        mem_wdata_o = {32'b0, op2_i[31:0]};
                        mem_wmask_o   = 8'b00001111;
                    end
                    `INST_SD: begin
                        mem_wen_o   = 1'b1;
                        mem_waddr_o = base_addr_add_addr_offset;
                        mem_wdata_o = op2_i;
                        mem_wmask_o  = 8'b11111111;
                        // 11111111 11111111 11111111 11111111
                    end
                    default begin
                        mem_wen_o   = 1'b0;
                        mem_waddr_o = 64'b0;
                        mem_wdata_o = 64'b0;
                        mem_wmask_o  = 8'b00000000;
                    end
                endcase
            end

            `INST_TYPE_INTR: begin
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o   = 1'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                isload_o    = 1'b0;
                isstore_o   = 1'b0;
                case (func3)
                    `INST_CSRRS: begin
                        rd_wdata_o  = op1_i; 
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        csr_waddr_o = csr_waddr_i;
                        csr_data_o  = op1_i_or_op2_i;
                        csr_wen_o   = 1'b1;
                    end
                    `INST_CSRRC: begin
                        rd_wdata_o  = op1_i; 
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        csr_waddr_o = csr_waddr_i;
                        csr_data_o  = op1_i_and_op2_i;
                        csr_wen_o   = 1'b1;
                    end
                    `INST_CSRRW: begin
                        rd_wdata_o  = op1_i; 
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        csr_waddr_o = csr_waddr_i;
                        csr_data_o  = op2_i;
                        csr_wen_o   = 1'b1;
                    end
                    `INST_CSRRSI: begin
                        rd_wdata_o  = op1_i; 
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        csr_waddr_o = csr_waddr_i;
                        csr_data_o  = op1_i_or_op2_i;
                        csr_wen_o   = 1'b1;
                    end
                    `INST_CSRRCI: begin
                        rd_wdata_o  = op1_i; 
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        csr_waddr_o = csr_waddr_i;
                        csr_data_o  = op1_i_and_op2_i;
                        csr_wen_o   = 1'b1;
                    end
                    `INST_CSRRWI: begin
                        rd_wdata_o  = op1_i; 
                        rd_waddr_o  = rd_addr_i;
                        reg_wen_o   = 1'b1;
                        csr_waddr_o = csr_waddr_i;
                        csr_data_o  = op2_i;
                        csr_wen_o   = 1'b1;
                    end
                    default begin
                        rd_wdata_o  = 64'b0; 
                        rd_waddr_o  = 5'b0;
                        reg_wen_o   = 1'b0;
                        csr_waddr_o = 12'b0;
                        csr_data_o  = 64'b0;
                        csr_wen_o   = 1'b0;
                    end
                endcase
            end

            `INST_JAL: begin
                rd_wdata_o  = op1_i_add_op2_i; // rd = PC + 4
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                typej_jump_addr_o = base_addr_add_addr_offset; // PC = PC + imm
                typej_jump_en_o   = 1'b1;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;   
                //$display("here2");
                //$display("%llx", typej_jump_addr_o );
            end // Jump And Link (PC += imm, rd = PC + 4)
            `INST_JALR: begin
                rd_wdata_o  = op1_i_add_op2_i; // rd = PC + 4
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                typej_jump_addr_o = base_addr_add_addr_offset; // PC = rs1 + imm
                typej_jump_en_o   = 1'b1;
                // flush_flag_o = 3'b111;
                // stall_flag_o = 3'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o  = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;   
            end // Jump And Link Reg (PC = rs1 + imm, rd = PC + 4)		
            `INST_LUI: begin
                // rd_wdata_o  = immU;
                rd_wdata_o  = op2_i; 
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                typej_jump_addr_o = 64'b0; //不跳转 
                typej_jump_en_o   = 1'b0;
                // flush_flag_o = 3'b001;
                // stall_flag_o = 3'b110;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0;
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;         
            end // Load Upper Imm (rd = imm << 12)
            `INST_AUIPC: begin
                rd_wdata_o  = op1_i_add_op2_i; 
                rd_waddr_o  = rd_addr_i;
                reg_wen_o   = 1'b1; 
                typej_jump_addr_o = 64'b0; //不跳转 
                typej_jump_en_o   = 1'b0;
                // flush_flag_o = 3'b001;
                // stall_flag_o = 3'b110;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0; 
                isstore_o    = 1'b0;
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;      
            end // Add Upper Imm to PC
            default: begin
                typej_jump_addr_o = 64'b0;
                typej_jump_en_o   = 1'b0;
                // flush_flag_o = 3'b0;// 设置初值，防止出现锁存器
                // stall_flag_o = 3'b0;
                rd_wdata_o  = 64'b0; 
                rd_waddr_o  = 5'b0;
                reg_wen_o   = 1'b0;
                mem_wen_o   = 1'b0;
                mem_waddr_o = 64'b0;
                mem_wdata_o = 64'b0;
                mem_wmask_o = 8'b0;
                mem_ren_o   = 1'b0;
                mem_raddr_o = 64'b0;
                isload_o    = 1'b0; 
                isstore_o    = 1'b0; 
                csr_waddr_o = 12'b0;
                csr_data_o  = 64'b0;
                csr_wen_o   = 1'b0;     
            end 
        endcase
    end
endmodule 