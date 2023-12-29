/*************************************************************************
    > File Name: DPIC.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-27 13:04:55
    > Description: 
*************************************************************************/

package DPIC

import chisel3._
import chisel3.util._

// import define.MACRO._

class getGprs extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{val gprs = Input(Vec(32, UInt(64.W)))})
    setInline("getGprs.v",
    """
    |import "DPI-C" function void get_gprs(input logic [63:0] regs[]);
    |module getGprs (
    |   input [63:0] gprs_0,
    |   input [63:0] gprs_1,
    |   input [63:0] gprs_2,
    |   input [63:0] gprs_3,
    |   input [63:0] gprs_4,
    |   input [63:0] gprs_5,
    |   input [63:0] gprs_6,
    |   input [63:0] gprs_7,
    |   input [63:0] gprs_8,
    |   input [63:0] gprs_9,
    |   input [63:0] gprs_10,
    |   input [63:0] gprs_11,
    |   input [63:0] gprs_12,
    |   input [63:0] gprs_13,
    |   input [63:0] gprs_14,
    |   input [63:0] gprs_15,
    |   input [63:0] gprs_16,
    |   input [63:0] gprs_17,
    |   input [63:0] gprs_18,
    |   input [63:0] gprs_19,
    |   input [63:0] gprs_20,
    |   input [63:0] gprs_21,
    |   input [63:0] gprs_22,
    |   input [63:0] gprs_23,
    |   input [63:0] gprs_24,
    |   input [63:0] gprs_25,
    |   input [63:0] gprs_26,
    |   input [63:0] gprs_27,
    |   input [63:0] gprs_28,
    |   input [63:0] gprs_29,
    |   input [63:0] gprs_30,
    |   input [63:0] gprs_31
    |);
    |   wire [63:0] gprs[32];
    |   assign gprs[0] = gprs_0;
    |   assign gprs[1] = gprs_1;
    |   assign gprs[2] = gprs_2;
    |   assign gprs[3] = gprs_3;
    |   assign gprs[4] = gprs_4;
    |   assign gprs[5] = gprs_5;
    |   assign gprs[6] = gprs_6;
    |   assign gprs[7] = gprs_7;
    |   assign gprs[8] = gprs_8;
    |   assign gprs[9] = gprs_9;
    |   assign gprs[10] = gprs_10;
    |   assign gprs[11] = gprs_11;
    |   assign gprs[12] = gprs_12;
    |   assign gprs[13] = gprs_13;
    |   assign gprs[14] = gprs_14;
    |   assign gprs[15] = gprs_15;
    |   assign gprs[16] = gprs_16;
    |   assign gprs[17] = gprs_17;
    |   assign gprs[18] = gprs_18;
    |   assign gprs[19] = gprs_19;
    |   assign gprs[20] = gprs_20;
    |   assign gprs[21] = gprs_21;
    |   assign gprs[22] = gprs_22;
    |   assign gprs[23] = gprs_23;
    |   assign gprs[24] = gprs_24;
    |   assign gprs[25] = gprs_25;
    |   assign gprs[26] = gprs_26;
    |   assign gprs[27] = gprs_27;
    |   assign gprs[28] = gprs_28;
    |   assign gprs[29] = gprs_29;
    |   assign gprs[30] = gprs_30;
    |   assign gprs[31] = gprs_31;
    |
    |   always @(*) begin
    |       get_gprs(gprs);
    |   end
    |
    |endmodule
    """.stripMargin)
}

class getPc extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val pc  = Input(UInt(64.W))
        // val clk = Input(Clock()) 
    })
    setInline("getPc.v",
    """
    |import "DPI-C" function void get_pc(input longint pc);
    |module getPc (
    |   //input clk,  
    |   input [63:0] pc
    |);
    |   always @(*) begin
    |       get_pc(pc);
    |       //$display("%x", pc);
    |   end
    |
    |endmodule
    """.stripMargin)
}

class getCsrs extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{val csrs = Input(Vec(4, UInt(64.W)))})
    setInline("getCsrs.v",
    """
    |import "DPI-C" function void get_csrs(input logic [3:0] csrs[]);
    |module getCsrs (
    |   input [63:0] csrs_0,
    |   input [63:0] csrs_1,
    |   input [63:0] csrs_2,
    |   input [63:0] csrs_3
    |);
    |   wire [63:0] csrs[32];
    |   assign csrs[0] = csrs_0;
    |   assign csrs[1] = csrs_1;
    |   assign csrs[2] = csrs_2;
    |   assign csrs[3] = csrs_3;
    |
    |   always @(*) begin
    |       get_csrs(csrs);
    |   end
    |
    |endmodule
    """.stripMargin)
}

class mtrace extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val ren  = Input(Bool())
        val wen  = Input(Bool())
        val addr  = Input(UInt(64.W))
        val data  = Input(UInt(64.W))
        val mask  = Input(UInt(8.W))
    })
    setInline("mtrace.v",
    """
    |import "DPI-C" function void mtrace_record(bit ren, bit wen, longint addr, longint data, byte mask);
    |module mtrace (
    |   input ren,  
    |   input wen,  
    |   input [63:0] addr,
    |   input [63:0] data,
    |   input [7:0] mask
    |);
    |   always @(*) begin
    |       mtrace_record(ren, wen, addr, data, mask);
    |   end
    |
    |endmodule
    """.stripMargin)
}

class ebreak extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val inst  = Input(UInt(32.W)) 
    })
    setInline("ebreak.v",
    """
    |import "DPI-C" function void ebreak();
    |module ebreak (
    |   input [31:0] inst
    |);
    |   always @(*) begin
    |       if (inst == 32'h00100073) begin
    |            ebreak();
    |       end
    |   end
    |
    |endmodule
    """.stripMargin)
}

class pmem_read extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val raddr  = Input(UInt(64.W)) 
        val rdata  = Output(UInt(64.W)) 
    })
    setInline("pmem_read.v",
    """
    |import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
    |module pmem_read (
    |   input  [63:0] raddr,
    |   output [63:0] rdata
    |);
    |   always @(*) begin
    |       pmem_read(raddr, rdata); 
    |   end
    |
    |endmodule
    """.stripMargin)
}

class pmem_read_Icacheline extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val raddr  = Input(UInt(64.W)) 
        val rdata  = Output(Vec(8, UInt(64.W)))
    })
    setInline("pmem_read_Icacheline.v",
    """
    |import "DPI-C" function void pmem_read_Icacheline( input longint raddr, output bit[31:0] rdata[16]);
    |module pmem_read_Icacheline (
    |   input  [63:0] raddr,
    |   output [63:0] rdata_0,
    |   output [63:0] rdata_1,
    |   output [63:0] rdata_2,
    |   output [63:0] rdata_3,
    |   output [63:0] rdata_4,
    |   output [63:0] rdata_5,
    |   output [63:0] rdata_6,
    |   output [63:0] rdata_7
    |);
    |   bit [31:0] rdata[16];
    |   
    |   assign rdata_0 = {rdata[0], rdata[1]};   
    |   assign rdata_1 = {rdata[2], rdata[3]};   
    |   assign rdata_2 = {rdata[4], rdata[5]};   
    |   assign rdata_3 = {rdata[6], rdata[7]};   
    |   assign rdata_4 = {rdata[8], rdata[9]};   
    |   assign rdata_5 = {rdata[10], rdata[11]};   
    |   assign rdata_6 = {rdata[12], rdata[13]};   
    |   assign rdata_7 = {rdata[14], rdata[15]};   
    |
    |   always @(*) begin
    |       pmem_read_Icacheline(raddr, rdata); 
    |   end
    |
    |endmodule
    """.stripMargin)
}

class pmem_read_Dcacheline extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val raddr  = Input(UInt(64.W)) 
        val rdata  = Output(Vec(4, UInt(64.W)))
    })
    setInline("pmem_read_Dcacheline.v",
    """
    |import "DPI-C" function void pmem_read_Dcacheline( input longint raddr, output bit[31:0] rdata[8]);
    |module pmem_read_Dcacheline (
    |   input  [63:0] raddr,
    |   output [63:0] rdata_0,
    |   output [63:0] rdata_1,
    |   output [63:0] rdata_2,
    |   output [63:0] rdata_3
    |);
    |   bit [31:0] rdata[8];
    |   
    |   assign rdata_0 = {rdata[0], rdata[1]};   
    |   assign rdata_1 = {rdata[2], rdata[3]};   
    |   assign rdata_2 = {rdata[4], rdata[5]};   
    |   assign rdata_3 = {rdata[6], rdata[7]};   
    |
    |   always @(*) begin
    |       pmem_read_Dcacheline(raddr, rdata); 
    |   end
    |
    |endmodule
    """.stripMargin)
}

class pmem_write extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val wen    = Input(UInt(1.W)) 
        val waddr  = Input(UInt(64.W)) 
        val wdata  = Input(UInt(64.W)) 
        val wmask  = Input(UInt(8.W)) 
    })
    setInline("pmem_write.v",
    """
    |import "DPI-C" function void pmem_write(input bit wen, input longint waddr, input longint wdata, input byte mask);
    |module pmem_write (
    |   input wen,
    |   input [63:0] waddr,
    |   input [63:0] wdata,
    |   input [7:0] wmask
    |);
    |   
    |
    |   always @(*) begin
    |       pmem_write(wen, waddr, wdata, wmask); 
    |   end
    |
    |endmodule
    """.stripMargin)
}

class pmem_write_Dcacheline extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val wen    = Input(Bool()) 
        val waddr  = Input(UInt(64.W)) 
        val wdata  = Input(Vec(4, UInt(64.W)))
    })
    setInline("pmem_write_Dcacheline.v",
    """
    |import "DPI-C" function void pmem_write_Dcacheline(input bit wen, input longint waddr, input bit [31:0] wdata[8]);
    |module pmem_write_Dcacheline (
    |   input        wen,
    |   input [63:0] waddr,
    |   input [63:0] wdata_0,
    |   input [63:0] wdata_1,
    |   input [63:0] wdata_2,
    |   input [63:0] wdata_3
    |);
    |
    |   bit [31:0] wdata[8];
    |   
    |   assign wdata[0] = wdata_0[31:  0];   
    |   assign wdata[1] = wdata_0[63: 32];   
    |   assign wdata[2] = wdata_1[31:  0];   
    |   assign wdata[3] = wdata_1[63: 32];
    |   assign wdata[4] = wdata_2[31:  0];   
    |   assign wdata[5] = wdata_2[63: 32];   
    |   assign wdata[6] = wdata_3[31:  0];   
    |   assign wdata[7] = wdata_3[63: 32];      
    |
    |   always @(*) begin
    |       if (wen) begin
    |           pmem_write_Dcacheline(wen, waddr, wdata); 
    |       end
    |   end
    |
    |endmodule
    """.stripMargin)
}


class ctrace_icache extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val idx  = Input(UInt(6.W))
        val tag  = Input(UInt(52.W))
        val cacheline  = Input(Vec(8, UInt(64.W)))
    })
    setInline("ctrace_icache.v",
    """
    |import "DPI-C" function void ctrace_icache_record(input byte idx, input longint tag, input logic [63:0] cacheline[]);
    |module ctrace_icache (
    |   input  [5:0]  idx,
    |   input  [51:0] tag,
    |   input  [63:0] cacheline_0,
    |   input  [63:0] cacheline_1,
    |   input  [63:0] cacheline_2,
    |   input  [63:0] cacheline_3,
    |   input  [63:0] cacheline_4,
    |   input  [63:0] cacheline_5,
    |   input  [63:0] cacheline_6,
    |   input  [63:0] cacheline_7
    |);
    |   
    |   wire [7:0] idx_to_byte;
    |   assign idx_to_byte = {2'b0, idx};
    |
    |   wire [63:0] tag_to_longint;
    |   assign tag_to_longint = {12'b0, tag};
    |
    |   wire [63:0] cacheline[8];
    |
    |   assign cacheline[0] = cacheline_0;
    |   assign cacheline[1] = cacheline_1;
    |   assign cacheline[2] = cacheline_2;
    |   assign cacheline[3] = cacheline_3;
    |   assign cacheline[4] = cacheline_4;
    |   assign cacheline[5] = cacheline_5;
    |   assign cacheline[6] = cacheline_6;
    |   assign cacheline[7] = cacheline_7;
    |
    |   always @(*) begin
    |       ctrace_icache_record(idx_to_byte, tag_to_longint, cacheline); 
    |   end
    |
    |endmodule
    """.stripMargin)
}

class ctrace_dcache extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle{
        val set_idx  = Input(UInt(4.W))
        val way_idx  = Input(UInt(3.W))
        val age      = Input(UInt(7.W))
        val dirty    = Input(UInt(8.W))
        val tag      = Input(UInt(55.W))
        val cacheline= Input(Vec(4, UInt(64.W)))
    })
    setInline("ctrace_dcache.v",
    """
    |import "DPI-C" function void ctrace_dcache_record(input byte set_idx, input byte way_idx, input byte age, input byte dirty, input longint tag, input logic [63:0] cacheline[]);
    |
    |module ctrace_dcache (
    |   input  [3:0]  set_idx,
    |   input  [2:0]  way_idx,
    |   input  [6:0]  age,
    |   input  [54:0] tag,
    |   input  [7:0]  dirty,
    |   input  [63:0] cacheline_0,
    |   input  [63:0] cacheline_1,
    |   input  [63:0] cacheline_2,
    |   input  [63:0] cacheline_3
    |);
    |   
    |   wire [7:0] set_idx_to_byte;
    |   assign set_idx_to_byte = {4'b0, set_idx};
    |
    |   wire [7:0] way_idx_to_byte;
    |   assign way_idx_to_byte = {5'b0, way_idx};
    |
    |   wire [7:0] age_to_byte;
    |   assign age_to_byte = {1'b0, age};
    |
    |   wire [63:0] tag_to_longint;
    |   assign tag_to_longint = {9'b0, tag};
    |
    |   wire [63:0] cacheline[4];
    |
    |   assign cacheline[0] = cacheline_0;
    |   assign cacheline[1] = cacheline_1;
    |   assign cacheline[2] = cacheline_2;
    |   assign cacheline[3] = cacheline_3;
    |
    |   always @(*) begin
    |       ctrace_dcache_record(set_idx_to_byte, way_idx_to_byte, age_to_byte, dirty, tag_to_longint, cacheline); 
    |   end
    |
    |endmodule
    """.stripMargin)
}