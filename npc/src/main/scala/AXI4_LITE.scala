package AXI4

import chisel3._

class MCIF_AXI4_R extends Bundle{
    // AR channel
    val AXI_ARID    = Input(UInt(2.W))
    val AXI_ARADDR  = Input(UInt(32.W))
    val AXI_ARVALID = Input(Bool())
    // Rd channel
    val AXI_RID     = Output(UInt(2.W))
    val AXI_RDATA   = Output(UInt(64.W))
    val AXI_RVALID  = Output(Bool())
    val AXI_RREADY  = Input(Bool())
}

class MCIF_AXI4_W extends Bundle {
    val AXI_AWID    = Input(UInt(2.W))
    val AXI_AWADDR  = Input(UInt(32.W))
    val AXI_AWVALID = Input(Bool())

    val AXI_WDATA   = Input(UInt(64.W))
    val AXI_WSTRB   = Input(UInt(8.W))
    val AXI_WVALID  = Input(Bool())
    
    val AXI_BRESP   = Output(UInt(2.W))
    val AXI_BREADY  = Input(Bool())
}

class MEM_AXI4_R extends Bundle{
    // AR channel
    val AXI_ARVALID  = Output(Bool())
    val AXI_RADDR   = Output(Bool())
    val AXI_ARREADY = Input(Bool())
    // Rd channel
    val AXI_RID     = Input(UInt(2.W))
    val AXI_RDATA   = Input(UInt(64.W))
    val AXI_RVALID  = Input(Bool())
    val AXI_RLAST   = Output(Bool())
}

class MEM_AXI4_W extends Bundle{
    val AXI_AWVALID = Output(Bool())
    val	AXI_AWID    = Output(UInt(2.W))
    val AXI_AWADDR  = Output(UInt(64.W))

    val AXI_WVALID  = Output(Bool())
    val AXI_WDATA   = Output(UInt(64.W))
    val AXI_WSTRB   = Output(UInt(8.W))

    val AXI_AWREADY = Input(Bool())
    val AXI_WREADY  = Input(Bool())

    val AXI_BID     = Input(UInt(2.W))
    val AXI_BVALID  = Input(Bool())
    val AXI_BREADY  = Output(Bool())
    val AXI_BRESP   = Input(Bool())
}

class AXI4_LITE extends Module {
    // ======================= READ ======================= //
    val mcif_axi_r  = IO(new MCIF_AXI4_R())
    val mem_axi_r   = IO(new MEM_AXI4_R())
    
    val raddr   = RegInit(0.U(64.W))
    val rid     = RegInit(0.U(64.W))
    val rdata   = RegInit(0.U(64.W))
    raddr   := Mux(mcif_axi_r.AXI_ARVALID, mcif_axi_r.AXI_ARADDR, 
                    Mux(ar_complete, 0.U, raddr)) 
    rid     := Mux(mem_axi_r.AXI_RVALID, mem_axi_r.AXI_RID, 
                    Mux(rd_complete, 0.U, rid)) 
    rdata   := Mux(mem_axi_r.AXI_RVALID, mem_axi_r.AXI_RDATA, 
                    Mux(rd_complete, 0.U, rdata)) 

    val ar_hs   = RegInit(false.Bool())
    val rd_hs   = RegInit(false.Bool())
    ar_hs   :=  mcif_axi.AXI_ARVALID & mem_axi_r.AXI_ARREADY 
    rd_hs   :=  mcif_axi.AXI_RREADY  & mem_axi_r.AXI_RVALID
    
    val ar_complete = RegInit(false.Bool())
    val rd_complete = RegInit(false.Bool())
    ar_complete := ar_hs
    rd_complete := rd_hs

    // to mem 
    mem_axi_r.AXI_ARVALID := mcif_axi_r.AXI_ARVALID
    mem_axi_r.AXI_ARADDR  := Mux(ar_hs, raddr, 0.U)

    // to mcif
    mcif_axi_r.AXI_RID     := Mux(rd_hs, rid, 0.U) 
    mcif_axi_r.AXI_RDATA   := Mux(rd_hs, rdata, 0.U)
    mcif_axi_r.AXI_RVALID  := rd_hs
    mcif_axi_r.AXI_RLAST   := rd_complete


    // ======================= WRITE ======================= //
    val mcif_axi_w  = IO(new MCIF_AXI4_W())
    val mem_axi_w   = IO(new MEM_AXI4_W())

    val waddr   = RegInit(0.U(64.W))
    val wid     = RegInit(0.U(2.W))
    val wdata   = RegInit(0.U(64.W))
    val wstrb   = RegInit(0.U(8.W))
    waddr   := Mux(mcif_axi.AXI_AWVALID, mcif_axi.AXI_AWADDR, 
                    Mux(aw_complete, 0.U, waddr)) 
    wid     := Mux(mem_axi_w.AXI_WVALID, mem_axi_w.AXI_WID, 
                    Mux(wr_complete, 0.U, wid)) 
    wdata   := Mux(mem_axi_w.AXI_WVALID, mem_axi_w.AXI_WDATA, 
                    Mux(wr_complete, 0.U, wdata)) 
    wstrb   := Mux(mem_axi_w.AXI_WVALID, mem_axi_w.AXI_WSTRB, 
                    Mux(wr_complete, 0.U, wdtrb)) 

    val aw_hs   = RegInit(false.Bool())
    val wr_hs   = RegInit(false.Bool())
    val b_hs    = RegInit(false.Bool())
    aw_hs   :=  mcif_axi_w.AXI_AWVALID & mem_axi_w.AXI_AWREADY 
    wr_hs   :=  mcif_axi_w.AXI_WVALID  & mem_axi_w.AXI_WREADY
    b_hs    :=  mcif_axi_w.AXI_BREADY  & mem_axi_w.AXI_BVALID

    val ar_complete = RegInit(false.Bool())
    val rd_complete = RegInit(false.Bool())
    val b_complete  = RegInit(false.Bool())
    aw_complete := aw_hs
    wr_complete := wr_hs
    b_complete  := b_hs

    // to mem 
    mem_axi_w.AXI_AWVALID   := mcif_axi_w.AXI_AWVALID
    mem_axi_w.AXI_AWID      := wid 
    mem_axi_w.AXI_AWADDR    := Mux(aw_hs, waddr, 0.U)
    mem_axi_w.AXI_WVALID    := mcif_axi_w.AXI_WVALID
    mem_axi_w.AXI_WDATA     := Mux(wr_hs, wdata, 0.U)
    mem_axi_w.AXI_WSTRB     := Mux(wr_hs, wstrb, 0.U)
    mem_axi_w.AXI_BREADY    := Mux(b_hs, 1.U, 0.U)

    // to mcif
    mcif_axi_w.AXI_BRESP  := b_complete
}