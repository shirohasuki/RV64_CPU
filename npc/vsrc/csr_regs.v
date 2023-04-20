`include "./defines.v"
import "DPI-C" function void get_csrs(input logic [3:0] csrs[]);

module csr_regs (
    input               clk,
    input               rst,

    // from id
    input wire[11:0]     id_csr_raddr_i,
    
    // to id
    output reg[63:0]     id_csr_rdata_o,

    // from ex
    input wire[63:0]     ex_csr_wdata_i,
    input wire[11:0]     ex_csr_waddr_i,
    input wire           ex_csr_wen_i,

    // from clint
    input wire           clint_csr_wen_i,
    input wire [63:0]    mepc_i,
    input wire [63:0]    mcause_i,
    input wire [63:0]    mstatus_i,

    // to clint
    output wire [63:0]   mepc_o,
    output wire [63:0]   mtvec_o,
    output wire [63:0]   mstatus_o
);

    reg[63:0] mstatus;        // MIE位控制全局是否开启
    reg[63:0] mtvec;          // 存储异常入口地址
    reg[63:0] mepc;           // 遇到异常时的pc(执行ecall时的)
    reg[63:0] mcause;         // 导致异常的事件

// =========== For Trace ============ 
    reg [63:0] csrs[0:3];
    assign csrs[0] = mtvec;
    assign csrs[1] = mepc;
    assign csrs[2] = mstatus;
    assign csrs[3] = mcause;


    // always @(posedge clk) begin
    //     get_csrs(csrs);
    // end

// =========== 初始化 ===============
    // always @(posedge clk) begin
    //     if (!rst) begin
    //         for (integer i = 0; i < 4; i++) begin
    //             csrs[i] <= 64'b0;
    //         end
    //         mtvec <= 64'ha00001800; 
    //     end
    // end

// =================================

    // 计时器中断
    // mip;            // 等待中断寄存器
    // mtime;          // 实时计数器（不是CSR） 
    // mtimecmp;       // 计数比较寄存器（不是CSR），当mtime>=mtimecmp时，计时器中断

// ================  from ID ====================
    // always @(*) begin
    //     $display("csr_waddr = %h, csr_wdata = %h", ex_csr_waddr_i, ex_csr_wdata_i);
    // end

    always @(*) begin
        if (!rst) begin
            id_csr_rdata_o = 64'b0;
        end
        else begin
            case(id_csr_raddr_i)
                `CSR_MSTATUS: begin id_csr_rdata_o = mstatus; end
                `CSR_MTVEC  : begin id_csr_rdata_o = mtvec;   end
                `CSR_MEPC   : begin id_csr_rdata_o = mepc;    end
                `CSR_MCAUSE : begin id_csr_rdata_o = mcause;  end            
                default       begin id_csr_rdata_o = 64'b0;   end
            endcase
        end
    end

    // always @(posedge clk) begin
    //     if(ex_csr_wen_i == 1'b1) begin
    //         case(ex_csr_waddr_i)
    //             `CSR_MSTATUS: begin
    //                 mstatus <= ex_csr_wdata_i;
    //             end
    //             `CSR_MTVEC  : begin
    //                 mtvec   <= ex_csr_wdata_i;
    //             end
    //             `CSR_MEPC   : begin
    //                 mepc    <= ex_csr_wdata_i;
    //             end
    //             `CSR_MCAUSE : begin
    //                 mcause  <= ex_csr_wdata_i;
    //             end            
    //             default begin
    //             end
    //         endcase
    //     end
    // end

    always @(posedge clk) begin
        if (!rst) begin
            for (integer i = 0; i < 32; i = i + 1) begin
                csrs[i] <= 64'b0;
            end
            mstatus <= 64'ha00001800;
            mtvec   <= 64'h0; 
            mepc    <= 64'h0;   
            mcause  <= 64'h0;
        end // 初始化寄存器
        else if (ex_csr_wen_i) begin // x0不准写
            case(ex_csr_waddr_i)
                `CSR_MSTATUS: begin mstatus <= ex_csr_wdata_i; end
                `CSR_MTVEC  : begin mtvec   <= ex_csr_wdata_i; end
                `CSR_MEPC   : begin mepc    <= ex_csr_wdata_i; end
                `CSR_MCAUSE : begin mcause  <= ex_csr_wdata_i; end            
                default begin
                    $display("Visit Unknowed CSRs!");
                end
            endcase
        end 
        // else begin
        //     $display("Unexcept Visit CSRs!");
        // end
    end


    // reg[63:0] csrs1[0:3];

    // always @(posedge clk) begin
    //     csrs1[0] = mstatus;
    //     csrs1[1] = mtvec;
    //     csrs1[2] = mepc;
    //     csrs1[3] = mcause; 
    // end

    // always @(posedge clk) begin
    //     get_csrs(csrs1);
    // end

    always @(posedge clk) begin
        get_csrs(csrs);
    end

// ================ from clint  ===================
    always @(*) begin
        if (!rst) begin
            mepc_o    = 64'b0;
            mtvec_o   = 64'b0;
            mstatus_o = 64'b0;
        end
        else begin
            mepc_o    = mepc;
            mtvec_o   = mtvec;
            mstatus_o = mstatus;
        end
    end

    always @(posedge clk) begin
        if (clint_csr_wen_i) begin
            mstatus <= mstatus_i;
            mepc    <= mepc_i;
            mcause  <= mcause_i;
        end 
    end

endmodule