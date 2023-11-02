package MEM

import chisel3._
import chisel3.util._
import chisel3.stage._

class MEM_AXI4_R extends Bundle{
    // AR channel
    val AXI_ARVALID = Input(Bool())
    val AXI_ARID    = Input(UInt(2.W))
    val AXI_RADDR   = Input(UInt(64.W))
    val AXI_ARREADY = Output(Bool())
    // Rd channel
    val AXI_RID     = Output(UInt(2.W))
    val AXI_RDATA   = Output(UInt(64.W))
    val AXI_RVALID  = Output(Bool())
}

class MEM_AXI4_W extends Bundle{
    val AXI_AWVALID = Input(Bool())
    val	AXI_AWID    = Input(UInt(2.W))
    val AXI_AWADDR  = Input(UInt(32.W))

    val AXI_WVALID  = Input(Bool())
    val AXI_WDATA   = Input(UInt(64.W))
    val AXI_WSTRB   = Input(UInt(8.W))

    val AXI_AWREADY = Output(Bool())
    val AXI_WREADY  = Output(Bool())

    val AXI_BID     = Output(UInt(2.W))
    val AXI_BVALID  = Output(Bool())
    val AXI_BREADY  = Input(Bool())
    val AXI_BRESP   = Output(Bool())
}

class MEM extends Module {
    val mem_axi_r = IO(new MEM_AXI4_R())
    
    val mem = SyncReadMem(4096, UInt(64.W))
    // ============= READ ================ //
    val ren   = RegInit(false.B)
    val raddr = RegInit(0.U(64.W))
    val rid   = RegInit(0.U(2.W))

    ren     :=  mem_axi_r.AXI_ARVALID
    raddr   :=  mem_axi_r.AXI_RADDR
    rid     :=  mem_axi_r.AXI_ARID

    mem_axi_r.AXI_ARREADY  := 1.U 
    mem_axi_r.AXI_RID      := rid 
    mem_axi_r.AXI_RVALID   := ren 
    mem_axi_r.AXI_RDATA    := Mux(ren, mem.read(raddr >> 3), 0.U)
    // mem_axi_r.AXI_RDATA    := Mux(raddr(2) === 0.U, mem.read(raddr >> 3)(31, 0), mem.read(raddr >> 3)(63, 32))

    // ============= WRITE =============== // 
    val mem_axi_w = IO(new MEM_AXI4_W())

    val wen   = RegInit(false.B)
    val waddr = RegInit(0.U(64.W))
    val wid   = RegInit(0.U(2.W))
    // val wmask = RegInit(0.U(8.W))
    val wmask = RegInit(0.U(8.W))
    val wdata = RegInit(0.U(64.W))

    wen     :=  mem_axi_w.AXI_AWVALID
    waddr   :=  mem_axi_w.AXI_AWADDR
    wid     :=  mem_axi_w.AXI_AWID
    wmask   :=  mem_axi_w.AXI_WSTRB
    wdata   :=  mem_axi_w.AXI_WDATA

    // val wmask_seq = wmask.asBools

    when (wen) { 
        mem.write(waddr >> 3, wdata, wmask.asTypeof(Seq(Bool())))
        // 重载方法要求写掩码为Seq[bool]
    }

    mem_axi_w.AXI_AWREADY  := 1.U
    mem_axi_w.AXI_WREADY   := 1.U
    mem_axi_w.AXI_BID      := wid
    mem_axi_w.AXI_BVALID   := Mux(wen, 1.U, 0.U)
    mem_axi_w.AXI_BRESP    := Mux(wen, 1.U, 0.U)
}
