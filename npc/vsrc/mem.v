
import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte mask);


module mem(clk, rst, hold_flag_i, ren, wen, raddr, rdata, waddr, wdata, mask);
    input             clk;
    input             rst;

    input             hold_flag_i;

    input             ren;
    input             wen;
    input  reg[63:0]  raddr;
    output reg[63:0]  rdata;

    input  reg[63:0]  waddr;
    input  reg[63:0]  wdata;
    input  reg[7:0]   mask;

    always @(posedge clk) begin
        // if (ren || rst == 1'b1 || hold_flag_i == 1'b0) pmem_read(raddr, rdata);
        if (ren) pmem_read(raddr, rdata); 
        else rdata = 64'b0;
        $display("[mem] ren = %x", ren);
        $display("[mem] rdata = %x", rdata);
        if (wen) pmem_write(waddr, wdata, mask);
    end
endmodule
    