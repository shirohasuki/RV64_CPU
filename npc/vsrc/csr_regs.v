`include "./defines.v"
import "DPI-C" function void get_csrs(input logic [3:0] csrs[]);

module csr_regs (
    input               clk,
    input               rst,

    // from id
    input  wire[11:0]    csr_raddr_i,
    
    // to id
    output reg[63:0]     csr_rdata_o,

    // from ex
    input wire[63:0]     csr_wdata_i,
    input wire[11:0]     csr_waddr_i,
    input wire           csr_wen_i
);

    reg[63:0] mstatus;        // MIE位控制全局是否开启
    reg[63:0] mtvec;          // 存储异常入口地址
    reg[63:0] mepc;           // 遇到异常时的pc(执行ecall时的)
    reg[63:0] mcause;         // 导致异常的事件

// =========== For Trace============ 
    reg[63:0] csrs[0:3];
    assign csrs[0] = mstatus;
    assign csrs[1] = mtvec;
    assign csrs[2] = mepc;
    assign csrs[3] = mcause;
    // always @(posedge clk) begin
    //     if (!rst) begin
    //         for (integer i = 0; i < 4; i++) begin
    //             csrs[i] <= 64'b0;
    //         end
    //     end
    // end
    always @(posedge clk) begin
        get_csrs(csrs);
    end
// =================================

    // 计时器中断
    // mip;            // 等待中断寄存器
    // mtime;          // 实时计数器（不是CSR） 
    // mtimecmp;       // 计数比较寄存器（不是CSR），当mtime>=mtimecmp时，计时器中断

    always @(*) begin
        if (!rst) begin
            csr_rdata_o = 64'b0;
        end
        else begin
            case(csr_raddr_i)
                `CSR_MSTATUS: begin
                    csr_rdata_o = mstatus;
                end
                `CSR_MTVEC  : begin
                    csr_rdata_o = mtvec;
                end
                `CSR_MEPC   : begin
                    csr_rdata_o = mepc;
                end
                `CSR_MCAUSE : begin
                    csr_rdata_o = mcause;
                end            
                default begin
                    csr_rdata_o = 64'b0;
                end
            endcase
        end
    end


    always @(posedge clk) begin
        if(csr_wen_i == 1'b1) begin
            case(csr_waddr_i)
                `CSR_MSTATUS: begin
                    mstatus <= csr_wdata_i;
                end
                `CSR_MTVEC  : begin
                    mtvec   <= csr_wdata_i;
                end
                `CSR_MEPC   : begin
                    mepc    <= csr_wdata_i;
                end
                `CSR_MCAUSE : begin
                    mcause  <= csr_wdata_i;
                end            
                default begin
                end
            endcase
        end
    end

endmodule