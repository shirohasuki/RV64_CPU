package MEM

import chisel3._
import chisel3.util._
import chisel3.stage._

class MEM_AXI4_R extends Bundle{
    // AR channel
    val AXI_ARVALID = Input(Bool())
    val AXI_ARID    = Input(UInt(2.W))
    val AXI_ARADDR   = Input(UInt(64.W))
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
    val AXI_WSTRB   = Input(Vec(8, Bool()))

    val AXI_AWREADY = Output(Bool())
    val AXI_WREADY  = Output(Bool())

    val AXI_BID     = Output(UInt(2.W))
    val AXI_BVALID  = Output(Bool())
    val AXI_BREADY  = Input(Bool())
    val AXI_BRESP   = Output(Bool())
}

class MEM extends Module {
    val mem_axi_r = IO(new MEM_AXI4_R())
    
    // val mem = SyncReadMem(4096, Vec(8, UInt(8.W))) // 8个8字节=64
    val mem = SyncReadMem(4096, UInt(64.W)) // 8个8字节=64
    // 采用写掩码的ram一定要分vec块读写
    // ============= READ ================ //
    val ren   = RegInit(false.B)
    val raddr = RegInit(0.U(64.W))
    val rid   = RegInit(0.U(2.W))
    // val rdata_vec = Reg(Vec(8, UInt(8.W)))

    ren     :=  mem_axi_r.AXI_ARVALID
    raddr   :=  mem_axi_r.AXI_ARADDR
    rid     :=  mem_axi_r.AXI_ARID

    mem_axi_r.AXI_ARREADY  := 1.U 
    mem_axi_r.AXI_RID      := rid 
    mem_axi_r.AXI_RVALID   := ren 
    mem_axi_r.AXI_RDATA    := Mux(ren, mem.read(raddr >> 3), 0.U)
    printf("raddr=%x\n",raddr>>3);
    // when (ren) {
    //     rdata_vec := mem.read(raddr)
    // }

    // for(i <- 0 until 8) { 
    //     mem_axi_r.AXI_RDATA := Cat(rdata_vec(7), rdata_vec(6), rdata_vec(5), rdata_vec(4),
    //         rdata_vec(3), rdata_vec(2), rdata_vec(1), rdata_vec(0))
    // }

    // ============= WRITE =============== // 
    val mem_axi_w = IO(new MEM_AXI4_W())

    val wen   = RegInit(false.B)
    val waddr = RegInit(0.U(64.W))
    val wid   = RegInit(0.U(2.W))
    // val wmask = RegInit(0.U(8.W))
    val wmask = Reg(Vec(8, Bool()))
    // val wdata = RegInit(0.U(64.W))
    val wdata_vec = Wire(Vec(8, UInt(8.W)))

    wen     :=  mem_axi_w.AXI_AWVALID
    waddr   :=  mem_axi_w.AXI_AWADDR
    wid     :=  mem_axi_w.AXI_AWID
    wmask   :=  mem_axi_w.AXI_WSTRB
    for(i <- 0 until 8) { wdata_vec(i) := mem_axi_w.AXI_WDATA(8*i+7, 8*i)}
    // wdata   :=  mem_axi_w.AXI_WDATA

    // when (wen) { 
    //     mem.write(waddr >> 3, wdata_vec, wmask)
    // }

    when (wen) { 
        when (wmask(7) === false.B) {mem.write(waddr >> 3, mem_axi_w.AXI_WDATA)
        }.elsewhen (wmask(3) === false.B) {mem.write(waddr >> 3, mem_axi_w.AXI_WDATA(31, 0))
        }.elsewhen (wmask(1) === false.B) {mem.write(waddr >> 3, mem_axi_w.AXI_WDATA(15, 0))
        }.elsewhen (wmask(0) === false.B) {mem.write(waddr >> 3, mem_axi_w.AXI_WDATA(7, 0))}
        // mem.write(waddr >> 3, wdata_vec, wmask) 
    }

    mem_axi_w.AXI_AWREADY  := 1.U
    mem_axi_w.AXI_WREADY   := 1.U
    mem_axi_w.AXI_BID      := wid
    mem_axi_w.AXI_BVALID   := Mux(wen, 1.U, 0.U)
    mem_axi_w.AXI_BRESP    := Mux(wen, 1.U, 0.U)
}
