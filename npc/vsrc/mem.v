
import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte mask);


module mem (clk, rst, hold_flag_i, ren_i, wen_i, raddr_i, rdata_o, waddr_i, wdata_i, wmask_i);
    input             clk;
    input             rst;

    input             hold_flag_i;

    input             ren_i;
    input             wen_i;
    input  reg[63:0]  raddr_i;
    output reg[63:0]  rdata_o;

    input  reg[63:0]  waddr_i;
    input  reg[63:0]  wdata_i;
    input  reg[7:0]   wmask_i;

    always @(posedge clk) begin
        // if (ren || rst == 1'b1 || hold_flag_i == 1'b0) pmem_read(raddr, rdata);
        if (ren_i) pmem_read(raddr_i, rdata_o); 
        else rdata_o = 64'b0;

        if (wen_i) pmem_write(waddr_i, wdata_i, wmask_i);

        if ((ren_i && wen_i) && (raddr_i == waddr_i)) begin
            //$display("nb");
            rdata_o = wdata_i;  // 处理读写冲突
        end
        
        //if (ren && wen) $display("nb");
    end
endmodule
    