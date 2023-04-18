`include "./defines.v" 
import "DPI-C" function void ebreak();

module clint (
    input               clk,
    input               rst,

    // from id
    input wire [31:0]    inst_i,
    input  reg [63:0]    inst_addr_i, // 用于验证每级传递的pc

    // to ctrl 
    // output wire         sync_assert_o,
    output wire [63:0]  intr_jump_addr_o,      
    output wire         intr_jump_en_o,      
    // output wire         

    // from csr_regs
    input wire [63:0]         mtvec_i,
    input wire [63:0]         mepc_i,
    input wire [63:0]         mstatus_i,

    // to csr_regs
    // output wire               csr_ren_o,
    output wire               csr_wen_o,

    output wire [63:0]        mepc_o,
    output wire [63:0]        mcause_o,
    output wire [63:0]        mstatus_o
);

    always @(*) begin
        case (inst_i) 
            `INST_EBREAK: begin
                // mepc_o           = inst_addr_i;
                // mcause_o         = 64'd11;
                // mstatus_o        = {mstatus_i[63:8], mstatus_i[3], mstatus_i[6:4], 1'b0, mstatus_i[2:0]}; // mstatus[7(MPIE)] = MIE, mstatus[3(MIE)] = 0
                // intr_jump_addr_o = mtvec_i;
                ebreak();
            end
            `INST_ECALL: begin
                mepc_o           = inst_addr_i;
                mcause_o         = 64'd11;
                mstatus_o        = {mstatus_i[63:8], mstatus_i[3], mstatus_i[6:4], 1'b0, mstatus_i[2:0]}; // mstatus[7(MPIE)] = MIE, mstatus[3(MIE)] = 0
                intr_jump_addr_o = mtvec_i;
                intr_jump_en_o   = 1'b1;
                csr_wen_o        = 1'b1;
            end
            `INST_MRET: begin
                // mepc_o           = inst_addr_i + 4;
                // mcause_o         = 64'd11;
                mstatus_o        = {mstatus_i[63:8], 1'b1, mstatus_i[6:4], mstatus_i[7], mstatus_i[2:0]}; // mstatus[7(MPIE)] = 1, mstatus[3(MIE)] = MPIE
                intr_jump_addr_o = mepc_i + 4;
                intr_jump_en_o   = 1'b1;
                csr_wen_o        = 1'b1;
            end
            default: begin
                // mcause_o = 64'd10;
                intr_jump_addr_o = 64'b0;
                intr_jump_en_o   = 1'b0;
                csr_wen_o        = 1'b0;
            end
        endcase
    end
    


endmodule