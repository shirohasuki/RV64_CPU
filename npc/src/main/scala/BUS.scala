/*************************************************************************
    > File Name: BUS.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-25 23:59:39
    > Description: 
*************************************************************************/

package BUS

import chisel3._
import chisel3.util._

class AXI4_MASTER_RD extends Bundle{
    // AR channel
    val arready  = Input(Bool())
    val arvalid  = Output(Bool())
    val araddr   = Output(UInt(64.W))
    val arid     = Output(UInt(4.W))
    val arlen    = Output(UInt(8.W))
    val arsize   = Output(UInt(3.W))
    val arburst  = Output(UInt(2.W))
    // Rd channel
    val rready   = Output(Bool())
    val rvalid   = Input(Bool())
    val rresp    = Input(UInt(2.W))
    val rdata    = Input(UInt(64.W))
    val rlast    = Input(Bool())
    val rid      = Input(UInt(4.W))
}

class AXI4_MASTER_WR extends Bundle{
    // AW channel
    val awready	 = Input(Bool())
    val	awvalid	 = Output(Bool())
    val awaddr	 = Output(UInt(64.W))

    val awid	 = Output(UInt(4.W))
    val awlen	 = Output(UInt(8.W))
    val awsize   = Output(UInt(3.W))
    val awburst  = Output(UInt(2.W))

    // WR channel
    val wready   = Input(Bool())
    val wvalid   = Output(Bool())
    val wdata	 = Output(UInt(64.W))

    val wstrb	 = Output(UInt(8.W))
    val wlast	 = Output(Bool())
    
    // B channel
    val bready  = Output(Bool())
    val bvalid  = Input(Bool())
    val bresp	= Input(UInt(2.W))
    val bid	    = Input(UInt(4.W))
}


class AXI4_SLAVE_RD extends Bundle{
    // AR channel
    val arready  = Output(Bool())
    val arvalid  = Input(Bool())
    val araddr   = Input(UInt(64.W))
    val arid     = Input(UInt(4.W))
    val arlen    = Input(UInt(8.W))
    val arsize   = Input(UInt(3.W))
    val arburst  = Input(UInt(2.W))
    // Rd channel
    val rready   = Input(Bool())
    val rvalid   = Output(Bool())
    val rresp    = Output(UInt(2.W))
    val rdata    = Output(UInt(64.W))
    val rlast    = Output(Bool())
    val rid      = Output(UInt(4.W))
}

class AXI4_SLAVE_WR extends Bundle {
    // AW channel
    val awready	 = Output(Bool())
    val	awvalid	 = Input(Bool())
    val awaddr	 = Input(UInt(64.W))

    val awid	 = Input(UInt(4.W))
    val awlen	 = Input(UInt(8.W))
    val awsize   = Input(UInt(3.W))
    val awburst  = Input(UInt(2.W))

    // WR channel
    val wready   = Output(Bool())
    val wvalid   = Input(Bool())
    val wdata	 = Input(UInt(64.W))

    val wstrb	 = Input(UInt(8.W))
    val wlast	 = Input(Bool())
    
    // B channel
    val bready  = Input(Bool())
    val bvalid  = Output(Bool())
    val bresp	= Output(UInt(2.W))
    val bid	    = Output(UInt(4.W))
}

class MCIF_R_BUS extends Bundle {
    val req  = Decoupled(new MCIFReqBundle)
    val resp = Flipped(Decoupled(new MCIFRespBundle))        
}

class MCIFReqBundle extends Bundle {
    val rlen  = UInt(10.W)
    val raddr = UInt(64.W)
}

class MCIFRespBundle extends Bundle {
    val rdata = UInt(64.W)
}

// class MCIF_R_BUS extends Bundle {
//     val req  = Decoupled(new Bundle {
//         val rlen  = UInt(10.W)
//         val raddr = UInt(64.W)
//     })
//     val resp = Flipped(Decoupled(new Bundle {
//         val rdata = UInt(64.W)
//     })) 
// }  // 默认为输出方向



class AXI4_FULL extends Module {
    // ======================= READ ======================= //
    val mcif_axi_r  = IO(Flipped(new AXI4_MASTER_RD))    // 方向为输入BUS单元
    val ram_axi_r   = IO(Flipped(new AXI4_SLAVE_RD))     // 方向为输入BUS单元

    val ar_hs   = WireInit(false.B)
    val rd_hs   = WireInit(false.B)
    ar_hs   :=  mcif_axi_r.arvalid & ram_axi_r.arready 
    rd_hs   :=  mcif_axi_r.rready  & ram_axi_r.rvalid
    
    val ar_complete = RegInit(false.B)
    val rd_complete = RegInit(false.B)
    ar_complete := ar_hs
    rd_complete := Mux(ram_axi_r.rlast, rd_hs, 0.U)

    // to ram 
    ram_axi_r.arvalid  := mcif_axi_r.arvalid
    ram_axi_r.arid     := Mux(ar_hs, mcif_axi_r.arid, 0.U)
    ram_axi_r.araddr   := Mux(ar_hs, mcif_axi_r.araddr, 0.U)
    ram_axi_r.arlen    := Mux(ar_hs, mcif_axi_r.arlen, 0.U)
    ram_axi_r.arsize   := Mux(ar_hs, mcif_axi_r.arsize, 0.U)
    ram_axi_r.arburst  := Mux(ar_hs, mcif_axi_r.arburst, 0.U)
    ram_axi_r.rready   := Mux(rd_hs, mcif_axi_r.rready, 0.U)

    // to mcif
    mcif_axi_r.arready := ram_axi_r.arready
    mcif_axi_r.rvalid  := Mux(rd_hs, ram_axi_r.arvalid, 0.U) 
    mcif_axi_r.rid     := Mux(rd_hs, ram_axi_r.rid, 0.U) 
    mcif_axi_r.rdata   := Mux(rd_hs, ram_axi_r.rdata, 0.U)
    mcif_axi_r.rresp   := Mux(rd_hs, ram_axi_r.rresp, 0.U)
    mcif_axi_r.rlast   := Mux(rd_hs, ram_axi_r.rlast, 0.U)

    // ======================= WRITE ======================= //
    // val mcif_axi_w  = IO(new MCIF_AXI4_W())
    // val mem_axi_w   = IO(new MEM_AXI4_W())

    // val aw_hs   = WireInit(false.B)
    // val wr_hs   = WireInit(false.B)
    // val b_hs    = WireInit(false.B)
    // aw_hs   :=  mcif_axi_w.AXI_AWVALID & mem_axi_w.AXI_AWREADY 
    // wr_hs   :=  mcif_axi_w.AXI_WVALID  & mem_axi_w.AXI_WREADY
    // b_hs    :=  mcif_axi_w.AXI_BREADY  & mem_axi_w.AXI_BVALID

    // val aw_complete = RegInit(false.B)
    // val wr_complete = RegInit(false.B)
    // val b_complete  = RegInit(false.B)
    // aw_complete := aw_hs
    // wr_complete := wr_hs
    // b_complete  := b_hs

    // val waddr   = RegInit(0.U(64.W))
    // val wid     = RegInit(0.U(2.W))
    // val wdata   = RegInit(0.U(64.W))
    // val wstrb   = Reg(Vec(8, Bool()))
    // val wstrb_default = VecInit(Seq.fill(8)(false.B))
    // waddr   := Mux(mcif_axi_w.AXI_AWVALID, mcif_axi_w.AXI_AWADDR, 
    //                 Mux(aw_complete, 0.U, waddr)) 
    // wid     := Mux(mcif_axi_w.AXI_WVALID, mcif_axi_w.AXI_AWID, 
    //                 Mux(wr_complete, 0.U, wid)) 
    // wdata   := Mux(mcif_axi_w.AXI_WVALID, mcif_axi_w.AXI_WDATA, 
    //                 Mux(wr_complete, 0.U, wdata)) 
    // wstrb   := Mux(mcif_axi_w.AXI_WVALID, mcif_axi_w.AXI_WSTRB, 
    //                 Mux(wr_complete, wstrb_default, wstrb)) 

    // // to mem 
    // mem_axi_w.AXI_AWVALID   := mcif_axi_w.AXI_AWVALID
    // mem_axi_w.AXI_AWID      := wid 
    // mem_axi_w.AXI_AWADDR    := Mux(aw_hs, waddr, 0.U)
    // mem_axi_w.AXI_WVALID    := mcif_axi_w.AXI_WVALID
    // mem_axi_w.AXI_WDATA     := Mux(wr_hs, wdata, 0.U)
    // // mem_axi_w.AXI_WSTRB     := Mux(wr_hs, wstrb, wstrb_default)
    // mem_axi_w.AXI_WSTRB     := Mux(wr_hs, wstrb, wstrb_default)
    // mem_axi_w.AXI_BREADY    := Mux(b_hs, 1.U, 0.U)

    // // to mcif
    // mcif_axi_w.AXI_BRESP  := b_complete
}