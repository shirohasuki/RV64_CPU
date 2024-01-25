/*************************************************************************
    > File Name: RAM.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:30
    > Description: 
*************************************************************************/

package RAM

import chisel3._
import chisel3.util._
import chisel3.stage._

// import  DPIC.mtrace

import BUS._
import DPIC.pmem_read

class RAM extends Module {
    // val mem = SyncReadMem(4096, UInt(64.W)) // 8个8字节=64
    // 采用写掩码的ram一定要分vec块读写
    // ============= READ ================ //
    val ram_axi_r = IO(new AXI4_SLAVE_RD)
    
    val ren   = WireInit(false.B)
    val raddr = WireInit(0.U(64.W))
    val rid   = WireInit(0.U(2.W))
    val rlen  = WireInit(0.U(8.W))
    val rdata = WireInit(0.U(64.W))

    ren     := ram_axi_r.arvalid
    raddr   := ram_axi_r.araddr
    rlen    := ram_axi_r.arlen
    rid     := ram_axi_r.arid

    // val rdata = RegInit(0.U(64.W))
    // val rdata = WireInit(0.U(64.W))
    // when (ren) {
    //     rdata := mem.read(raddr >> 3)
    // }
    ram_axi_r.arready  := 1.U 

    val ram_latency = 10

    val cnt   = RegInit(0.U(8.W))
    ram_axi_r.rvalid   := ShiftRegister(ren, ram_latency) && !ram_axi_r.rlast
    when (ram_axi_r.rvalid) {
        cnt := cnt + 1.U 
    }.otherwise {
        cnt := 0.U 
    }

    val DPIC_pmem_read = Module(new pmem_read)
    when (ram_axi_r.rvalid) {
        DPIC_pmem_read.io.raddr := raddr + (cnt * 8.U)
        rdata                   := DPIC_pmem_read.io.rdata 
    }

    ram_axi_r.rdata    := Mux(ram_axi_r.rvalid, rdata, 0.U)
    ram_axi_r.rresp    := 0.U
    ram_axi_r.rlast    := cnt === rlen
    ram_axi_r.rid      := Mux(ram_axi_r.rvalid, rid, 0.U)

    // ============= WRITE =============== // 
    // val mem_axi_w = IO(new MEM_AXI4_W())

    // val wen   = RegInit(false.B)
    // val waddr = RegInit(0.U(64.W))
    // val wid   = RegInit(0.U(2.W))
    // val wmask = Reg(Vec(8, Bool()))


    // wen     :=  mem_axi_w.AXI_AWVALID
    // waddr   :=  mem_axi_w.AXI_AWADDR
    // wid     :=  mem_axi_w.AXI_AWID
    // wmask   :=  mem_axi_w.AXI_WSTRB


    // mem_axi_w.AXI_AWREADY  := 1.U
    // mem_axi_w.AXI_WREADY   := 1.U
    // mem_axi_w.AXI_BID      := wid
    // mem_axi_w.AXI_BVALID   := Mux(wen, 1.U, 0.U)
    // mem_axi_w.AXI_BRESP    := Mux(wen, 1.U, 0.U)



}
