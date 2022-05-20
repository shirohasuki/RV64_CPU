`include "./vsrc/defines.v"

module ex (
    // from id_ex // 
    input wire[31:0] inst_i,
	input wire[31:0] inst_addr_i,
	input wire[31:0] op1_i,	
	input wire[31:0] op2_i,
	input wire[4:0]  rd_addr_i,	
	input wire       reg_wen_i,	 
    
    // to regs 
    output reg[31:0]  rd_wdata_o,
    output reg[4:0] rd_waddr_o,
    output reg       reg_wen_o
);

    wire[6:0] opcode; // 7byte (6~0)
    wire[4:0] rd; // 5byte (11~7)
    wire[2:0] func3;
    wire[4:0] rs1;
    wire[4:0] rs2;
    wire[11:0] imm;
    wire[6:0] func7;
    

    assign opcode = inst_i[6:0];
    assign rd     = inst_i[11:7];
    assign func3  = inst_i[14:12];
    assign rs1    = inst_i[19:15];
    assign rs2    = inst_i[24:20];
    assign func7  = inst_i[31:25];
    assign imm    = inst_i[31:20];

    always @(*) begin
        case (opcode)
            
            `INST_TYPE_I:begin
                case (func3)
                    `INST_ADDI:begin
                        rd_wdata_o = op1_i + op2_i; 
                        rd_waddr_o = rd_addr_i;
                        reg_wen_o  = 1'b1;
                    end 
                    default:begin
                        rd_wdata_o = 32'b0; 
                        rd_waddr_o = 5'b0;
                        reg_wen_o  = 1'b0;
                    end 
                endcase
            end

            `INST_TYPE_R_M:begin
                case (func3)
                    `INST_ADD_SUB: begin
                        if (func7 == 7'b0) begin // add
                            rd_wdata_o = op1_i + op2_i; 
                            rd_waddr_o = rd_addr_i;
                            reg_wen_o  = 1'b1;
                        end
                        else begin // sub
                            rd_wdata_o = op2_i - op1_i; 
                            rd_waddr_o = rd;
                            reg_wen_o  = 1'b1;
                        end
                    end 
                    default: begin
                        rd_wdata_o = 32'b0; 
                        rd_waddr_o = 5'b0;
                        reg_wen_o  = 1'b0;
                    end 
                endcase
            end

            default: begin
                rd_wdata_o = 32'b0; 
                rd_waddr_o = 5'b0;
                reg_wen_o  = 1'b0;
            end 
        endcase
    end
endmodule 