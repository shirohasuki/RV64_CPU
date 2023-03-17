`include "./defines.v"

// import "DPI-C" function void ebreak();

module id (
	//from if_id
	input wire[31:0] inst_i,
	input wire[63:0] inst_addr_i,
		
	// from regs
	input wire[63:0] rs1_data_i,
	input wire[63:0] rs2_data_i,
    // to regs 
	output reg[4:0]  rs1_addr_o,
	output reg[4:0]  rs2_addr_o,

    // from csr_regs
    input  reg[63:0] csr_data_i, // Read
    // to csr_regs
    output reg[11:0] csr_addr_o, // Read
	
	//to id_ex
	output reg[31:0] inst_o,
	output reg[63:0] inst_addr_o,
	output reg[63:0] op1_o,	
	output reg[63:0] op2_o,
	output reg[4:0]  rd_addr_o,	
	output reg 		 reg_wen, // 回写的使能

    output reg[63:0] base_addr_o, // 基地址
    output reg[63:0] offset_addr_o, // 偏移地址

    output reg[63:0] csr_data_o,
    output reg[11:0] csr_waddr_o,
    output reg       csr_wen_o
);

    wire[6:0]  opcode; // 7byte (6~0)
    wire[4:0]  rd; // 5byte (11~7)
    wire[2:0]  func3;
    wire[4:0]  rs1;
    wire[4:0]  rs2;
    wire[11:0]  csr;
    wire[6:0]  func7;
    wire[11:0] imm;
    wire[5:0]  shamt; // I形的移位

    wire[63:0] immI = {{52{inst_i[31]}}, inst_i[31:20]}; // 符号位拓展，imm[11]向前拓展为20位
    wire[63:0] immU = {{32{inst_i[31]}}, inst_i[31:12], 12'b0};
    wire[63:0] immS = {{52{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    wire[63:0] immB = {{52{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
    wire[63:0] immJ = {{44{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
    wire[63:0] immL = {{52{inst_i[31]}}, inst_i[31:20]}; // 和immI相同

    assign opcode = inst_i[6:0];
    assign rd     = inst_i[11:7];
    assign func3  = inst_i[14:12];
    assign rs1    = inst_i[19:15];
    assign rs2    = inst_i[24:20];
    assign csr    = inst_i[31:20];    
    assign shamt  = inst_i[25:20]; // 64的shamt为5位
    assign func7  = inst_i[31:25];
    assign imm    = inst_i[31:20];


    always @(*) begin
        inst_o = inst_i;
        inst_addr_o = inst_addr_i;
        // $display("IDU: %x", inst_addr_i);   
        case (opcode)
            `INST_TYPE_I: begin
                base_addr_o   = 64'b0;// 基地址
                offset_addr_o = 64'b0;// 偏移地址
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_ADDI,`INST_SLTI,`INST_SLTIU,`INST_XORI,`INST_ORI,`INST_ANDI:begin
                        rs1_addr_o = rs1;
                        rs2_addr_o = 5'b0;
                        op1_o      = rs1_data_i;
                        op2_o      = immI; // 符号位拓展，imm[11]向前拓展为20位
                        rd_addr_o  = rd;
                        reg_wen    = 1'b1; // 要回写 
                    end
                    `INST_SLLI,`INST_SRI: begin // SRI包含srli和srai
                        // if (shamt[5] == 0) begin
                            rs1_addr_o = rs1;
                            rs2_addr_o = 5'b0;
                            op1_o      = rs1_data_i;
                            op2_o      = {58'b0, shamt}; 
                            rd_addr_o  = rd;
                            reg_wen    = 1'b1; // 要回写 
                        // end
                    end
                    default: begin
                        rs1_addr_o = 5'b0;
                        rs2_addr_o = 5'b0;
                        op1_o      = 64'b0;
                        op2_o      = 64'b0;
                        rd_addr_o  = 5'b0;
                        reg_wen    = 1'b0; 
                    end 
                endcase
            end

            `INST_TYPE_I_W: begin
                base_addr_o   = 64'b0;// 基地址
                offset_addr_o = 64'b0;// 偏移地址
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_ADDIW: begin
                        rs1_addr_o = rs1;
                        rs2_addr_o = 5'b0;
                        op1_o      = rs1_data_i;
                        op2_o      = immI; // 符号位拓展，imm[11]向前拓展为20位
                        rd_addr_o  = rd;
                        reg_wen    = 1'b1; // 要回写 
                    end
                    `INST_SLLIW,`INST_SRIW: begin // SRI包含srli和srai
                        // if (shamt[5] == 0) begin
                            rs1_addr_o = rs1;
                            rs2_addr_o = 5'b0;
                            op1_o      = rs1_data_i;
                            op2_o      = {58'b0, shamt}; 
                            rd_addr_o  = rd;
                            reg_wen    = 1'b1; // 要回写
                        // end 
                    end
                    default: begin
                        rs1_addr_o = 5'b0;
                        rs2_addr_o = 5'b0;
                        op1_o = 64'b0;
                        op2_o = 64'b0;
                        rd_addr_o = 5'b0;
                        reg_wen = 1'b0; 
                    end 
                endcase
            end

            `INST_TYPE_R_M:begin
                base_addr_o   = 64'b0;// 基地址
                offset_addr_o = 64'b0;// 偏移地址
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_ADD_SUB_MUL,`INST_SLT,`INST_SLTU,`INST_XOR_DIV,`INST_OR_REM,`INST_AND_REMU:begin 
                        rs1_addr_o = rs1;
                        rs2_addr_o = rs2;
                        op1_o = rs1_data_i;
                        op2_o = rs2_data_i;
                        rd_addr_o = rd;
                        reg_wen = 1'b1; // 要回写 
                    end 
                    `INST_SLL:begin 
                        rs1_addr_o = rs1;
                        rs2_addr_o = rs2;
                        op1_o = rs1_data_i;
                        op2_o = {58'b0, rs2_data_i[5:0]}; // 移位不能超过六位(64位为6，32位为5)
                        rd_addr_o = rd;
                        reg_wen = 1'b1; // 要回写 
                    end 
                    `INST_SR_DIVU: begin
                        if (func7 == `INST_TYPE_R_FUN7) begin // SR
                            rs1_addr_o = rs1;
                            rs2_addr_o = rs2;
                            op1_o = rs1_data_i;
                            op2_o = {58'b0, rs2_data_i[5:0]}; // 移位不能超过六位(64位为6，32位为5)
                            rd_addr_o = rd;
                            reg_wen = 1'b1; // 要回写 
                        end
                        if (func7 == `INST_TYPE_M_FUN7) begin //DIVU
                            rs1_addr_o = rs1;
                            rs2_addr_o = rs2;
                            op1_o = rs1_data_i;
                            op2_o = rs2_data_i;
                            rd_addr_o = rd;
                            reg_wen = 1'b1; // 要回写 
                        end
                    end 
                    default:begin
                        rs1_addr_o = 5'b0;
                        rs2_addr_o = 5'b0;
                        op1_o = 64'b0;
                        op2_o = 64'b0;
                        rd_addr_o = 5'b0;
                        reg_wen = 1'b0; 
                    end 
                endcase
            end

            `INST_TYPE_R_M_W:begin
                base_addr_o   = 64'b0;// 基地址
                offset_addr_o = 64'b0;// 偏移地址
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_ADDW_SUBW_MULW,`INST_DIVW,`INST_SLLW,`INST_REMW,`INST_REMUW, `INST_SRW:begin 
                        rs1_addr_o = rs1;
                        rs2_addr_o = rs2;
                        op1_o = rs1_data_i;
                        op2_o = rs2_data_i;
                        rd_addr_o = rd;
                        reg_wen = 1'b1; // 要回写 
                    end 
                    // `INST_SLL,`INST_SR:begin 
                    //     rs1_addr_o = rs1;
                    //     rs2_addr_o = rs2;
                    //     op1_o = rs1_data_i;
                    //     op2_o = {59'b0, rs2_data_i[4:0]}; // 移位不能超过五位
                    //     rd_addr_o = rd;
                    //     reg_wen = 1'b1; // 要回写 
                    // end 
                    default:begin
                        rs1_addr_o = 5'b0;
                        rs2_addr_o = 5'b0;
                        op1_o = 64'b0;
                        op2_o = 64'b0;
                        rd_addr_o = 5'b0;
                        reg_wen = 1'b0; 
                    end 
                endcase
            end


            `INST_TYPE_B: begin
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_BNE,`INST_BEQ,`INST_BLT,`INST_BLTU,`INST_BGE,`INST_BGEU: begin
                        rs1_addr_o    = rs1;
                        rs2_addr_o    = rs2;
                        op1_o         = rs1_data_i;
                        op2_o         = rs2_data_i;
                        rd_addr_o     = 5'b0;
                        reg_wen       = 1'b0;
                        base_addr_o   = inst_addr_i; // 基地址
                        offset_addr_o = immB; // 偏移地址 
                    end
                    default: begin
                        rs1_addr_o    = 5'b0;
                        rs2_addr_o    = 5'b0;
                        op1_o         = 64'b0;
                        op2_o         = 64'b0;
                        rd_addr_o     = 5'b0;
                        reg_wen       = 1'b0; 
                        base_addr_o   = 64'b0; // 基地址
                        offset_addr_o = 64'b0; // 偏移地址 
                    end 
                endcase
            end
            // L为内存->寄存器
            `INST_TYPE_L: begin
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_LB,`INST_LH,`INST_LW,`INST_LD,`INST_LBU,`INST_LHU,`INST_LWU: begin
                        rs1_addr_o    = rs1;
                        rs2_addr_o    = 5'b0;
                        op1_o         = rs1_data_i;
                        op2_o         = immL;
                        rd_addr_o     = rd;
                        reg_wen       = 1'b1;
                        base_addr_o   = rs1_data_i;        // 基地址
                        offset_addr_o = immL;           // 偏移地址 
                        // mem_ren       = 1'b1;              // 访存使能
                        // mem_raddr_o   = rs1_data_i + immL; // 访存地址 需要符号位拓展
                        // $display("mem_raddr_o = %x", mem_raddr_o);
                    end
                    default: begin
                        rs1_addr_o    = 5'b0;
                        rs2_addr_o    = 5'b0;
                        op1_o         = 64'b0;
                        op2_o         = 64'b0;
                        rd_addr_o     = 5'b0;
                        reg_wen       = 1'b0; 
                        base_addr_o   = 64'b0; // 基地址
                        offset_addr_o = 64'b0; // 偏移地址 
                        // mem_ren       = 1'b0;  // 访存使能
                        // mem_raddr_o   = 64'b0; //访存地址
                    end 
                endcase
            end

            // SB(bite 8位),SH(half 16位),SW(word 32位) 
            // S为寄存器->内存
            `INST_TYPE_S: begin
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
                case (func3)
                    `INST_SB,`INST_SH,`INST_SW,`INST_SD: begin
                        rs1_addr_o    = rs1;
                        rs2_addr_o    = rs2;
                        op1_o         = 64'b0;
                        op2_o         = rs2_data_i;
                        rd_addr_o     = 5'b0;
                        reg_wen       = 1'b0;
                        base_addr_o   = rs1_data_i;     // 基地址
                        offset_addr_o = immS;           // 偏移地址 
                        // mem_ren       = 1'b0;        // 访存使能
                        // mem_raddr_o   = 64'b0;       // 访存地址
                    end
                    default: begin
                        rs1_addr_o    = 5'b0;
                        rs2_addr_o    = 5'b0;
                        op1_o         = 64'b0;
                        op2_o         = 64'b0;
                        rd_addr_o     = 5'b0;
                        reg_wen       = 1'b0; 
                        base_addr_o   = 64'b0; // 基地址
                        offset_addr_o = 64'b0; // 偏移地址 
                        // mem_ren       = 1'b0;  // 访存使能
                        // mem_raddr_o   = 64'b0; //访存地址
                    end 
                endcase
            end

            `INST_TYPE_INTR: begin
                base_addr_o   = 64'b0; // 基地址
                offset_addr_o = 64'b0; // 偏移地址 
                case (func3)
                    `INST_CSRRS, `INST_CSRRW, `INST_CSRRC: begin
                        rs1_addr_o    = rs1;
                        rs2_addr_o    = 5'b0;
                        csr_addr_o    = csr;
                        op1_o         = csr_data_i;
                        op2_o         = rs1_data_i;  
                        rd_addr_o     = rd_addr_o;  // csr的值写入rd
                        reg_wen       = 1'b1; 
                        csr_data_o    = csr_data_i; // 按位或结果写入csr
                        csr_waddr_o   = csr;
                        csr_wen_o     = 1'b1;
                        // $display("here1");
                    end 
                    default begin
                        rs1_addr_o    = 5'b0;
                        rs2_addr_o    = 5'b0;
                        op1_o         = 64'b0;
                        op2_o         = 64'b0;
                        rd_addr_o     = 5'b0;
                        reg_wen       = 1'b0; 
                        csr_data_o    = 64'b0;
                        csr_waddr_o   = 12'b0;
                        csr_wen_o     = 1'b0;
                        // $display("here2");
                    end
                endcase
            end
        
            // J型指令此处统一立即数为op2_i 
            `INST_JAL: begin
                rs1_addr_o    = 5'b0;
                rs2_addr_o    = 5'b0;
                op1_o         = inst_addr_i;
                op2_o         = 64'h4;
                rd_addr_o     = rd;
                reg_wen       = 1'b1; 
                base_addr_o   = inst_addr_i; // 基地址
                offset_addr_o = immJ;        // 偏移地址 
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
            end 
            `INST_JALR: begin
                rs1_addr_o    = rs1;
                rs2_addr_o    = 5'b0;
                op1_o         = inst_addr_i;
                op2_o         = 64'h4;
                rd_addr_o     = rd;
                reg_wen       = 1'b1; 
                base_addr_o   = rs1_data_i; // 基地址
                offset_addr_o = immI;       // 偏移地址 
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
            end 
            `INST_LUI: begin
                rs1_addr_o    = 5'b0;
                rs2_addr_o    = 5'b0;
                op1_o         = 64'b0;
                op2_o         = immU;
                rd_addr_o     = rd;
                reg_wen       = 1'b1; 
                base_addr_o   = 64'b0;
                offset_addr_o = 64'b0;
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
            end // 不跳转
            `INST_AUIPC: begin
                rs1_addr_o    = 5'b0;
                rs2_addr_o    = 5'b0;
                op1_o         = inst_addr_i;
                op2_o         = immU;
                rd_addr_o     = rd;
                reg_wen       = 1'b1;
                base_addr_o   = 64'b0; // 基地址
                offset_addr_o = immU ; // 偏移地址  
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
            end// 不跳转
            default: begin
                rs1_addr_o    = 5'b0;
                rs2_addr_o    = 5'b0;
                op1_o         = 64'b0;
                op2_o         = 64'b0;
                rd_addr_o     = 5'b0;
                reg_wen       = 1'b0; 
                base_addr_o   = 64'b0; // 基地址
                offset_addr_o = 64'b0; // 偏移地址 
                csr_data_o    = 64'b0;
                csr_waddr_o   = 12'b0;
                csr_wen_o     = 1'b0;
            end 
        endcase
    end

endmodule 
