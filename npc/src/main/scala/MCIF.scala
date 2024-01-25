/*************************************************************************
    > File Name: MCIF.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-29 18:55:53
    > Description: 
*************************************************************************/

package MCIF
// 2R2W, 2I2O

import chisel3._
import chisel3.util._

import BUS._

// ============== IO on the left(from/to core) =================== //

// ========== IO on the right(from/to AXI4(device)) ============ //

// ====================== 连线 ================================ // 
class MCIF extends Module {
    //  IO on the left(from/to core)
    val icache_mcif_r = IO(Flipped(new MCIF_R_BUS))
    val dcache_mcif_r = IO(Flipped(new MCIF_R_BUS))

    //  IO on the right(from/to AXI4(device))
    val mcif_axi_r = IO(new AXI4_MASTER_RD)
    // val mcif_axi_w = IO(new MCIF_AXI4_W())

    val MCIF_R    = Module(new MCIF_R)
    MCIF_R.icache_mcif_r <> icache_mcif_r
    MCIF_R.dcache_mcif_r <> dcache_mcif_r
    MCIF_R.mcif_axi_r    <> mcif_axi_r 


    // val MCIF_W    = Module(new MCIF_W())
    // MCIF_W.req0.valid       := ls_mcif.mem_wen
    // MCIF_W.req0.bits.waddr  := ls_mcif.mem_waddr
    // MCIF_W.req0.bits.wdata  := ls_mcif.mem_wdata
    // MCIF_W.req0.bits.wstrb  := ls_mcif.mem_wmask

    // mcif_axi_w <> MCIF_W.mcif_axi_w        
}

// ====================== MCIF_R ================================ // 
class MCIF_R extends Module { 
    val icache_mcif_r  = IO(Flipped(new MCIF_R_BUS)) // ICache 优先级低
    val dcache_mcif_r  = IO(Flipped(new MCIF_R_BUS)) // DCache 优先级高

    val mcif_axi_r = IO(new AXI4_MASTER_RD)

    // val mcif_r_i_en = IO(new Bundle{
    //     val icache_en = Output(Bool())
    //     val dcache_en = Output(Bool())
    // }) // 告诉MCIF现在在执行哪个

    val req = Wire(Decoupled(new Bundle {
        val rlen  = UInt(10.W)
        val raddr = UInt(64.W)
    }))
    
    val rid = WireInit(0.U(2.W)) // Master:ICache:1 DCache:0
    
    val Arb1 = Module(new Arbiter(req.bits.cloneType, 2))  // 2 to 1 Priority Arbiter
    Arb1.io.in(1) <> icache_mcif_r.req  // ICache
    Arb1.io.in(0) <> dcache_mcif_r.req  // DCache
    req           <> Arb1.io.out
    rid           := Arb1.io.chosen
    req.ready     := req.valid  // 只要收到valid, 立马ready上       

    //  ================= AR channel
    // to cache 
    icache_mcif_r.req.ready := rid === 1.U
    dcache_mcif_r.req.ready := rid === 0.U
    
    // to axi
    mcif_axi_r.arvalid      := req.valid // M->S
    mcif_axi_r.araddr       := req.bits.raddr //& raddr.valid        
    mcif_axi_r.arid         := rid // 主设备的编号
    mcif_axi_r.arlen        := req.bits.rlen // brust长度
    mcif_axi_r.arsize       := 8.U // 数据宽度
    mcif_axi_r.arburst      := 1.U
    //  ================= RD channel
    // to cache 
    icache_mcif_r.resp.valid := Mux(mcif_axi_r.rvalid & mcif_axi_r.rready & (rid === 1.U), mcif_axi_r.arvalid, 0.U)
    dcache_mcif_r.resp.valid := Mux(mcif_axi_r.rvalid & mcif_axi_r.rready & (rid === 0.U), mcif_axi_r.arvalid, 0.U)
    
    icache_mcif_r.resp.bits.rdata  := Mux(icache_mcif_r.resp.valid, mcif_axi_r.rdata, 0.U) 
    dcache_mcif_r.resp.bits.rdata  := Mux(dcache_mcif_r.resp.valid, mcif_axi_r.rdata, 0.U) 

    // to axi
    mcif_axi_r.rready := 1.U // 暂时先一直拉高   // M->S
}



// class MCIF_R extends Module { 
//     val req0  = IO(Flipped(Decoupled(UInt(64.W)))) // IFU 优先级低
//     val req1  = IO(Flipped(Decoupled(UInt(64.W)))) // LSU 优先级高
    
//     val resp0  = IO(Decoupled(UInt(64.W)))  
//     val resp1  = IO(Decoupled(UInt(64.W)))

//     val mcif_axi_r = IO(new MCIF_AXI4_R())

//     val M_RID   = WireInit(0.U(2.W)) // Master:IFU:1 LSU:0
//     // val S_RID = UInt(2.W) // Slave: MEM

//     val raddr   = Wire(Flipped(Decoupled(UInt(64.W))))
    
//     // val Arb1 = Module(new Arbiter(UInt(64.W), 2))  // 2 to 1 Priority Arbiter
//     // Arb1.io.in(1) <> req0  // IFU
//     // Arb1.io.in(0) <> req1  // LSU
//     // raddr       <> Arb1.io.out
//     // M_RID       := Arb1.io.chosen
//     // raddr.ready := raddr.valid  // 只要收到valid, 立马ready上 
    
//     //  ================= AR channel
//     mcif_axi_r.AXI_ARVALID  := raddr.valid // M->S
//     mcif_axi_r.AXI_ARADDR   := raddr.bits //& raddr.valid     // M->S    
//     mcif_axi_r.AXI_ARID     := M_RID 

//     //  ================= R channel
//     mcif_axi_r.AXI_RREADY := 1.U // 暂时先一直拉高   // M->S
    
//     when (mcif_axi_r.AXI_RVALID) {
//         resp0.valid := Mux(mcif_axi_r.AXI_RID === 1.U, mcif_axi_r.AXI_RVALID, 0.U)
//         resp1.valid := Mux(mcif_axi_r.AXI_RID === 0.U, mcif_axi_r.AXI_RVALID, 0.U)
//         resp0.bits  := Mux(mcif_axi_r.AXI_RID === 1.U, mcif_axi_r.AXI_RDATA, 0.U)
//         resp1.bits  := Mux(mcif_axi_r.AXI_RID === 0.U, mcif_axi_r.AXI_RDATA, 0.U)
//     }.otherwise {
//         resp0.valid := 0.U
//         resp1.valid := 0.U
//         resp0.bits  := 0.U
//         resp1.bits  := 0.U
//     }   // S->M
// }

// ====================== MCIF_W ================================ // 
// class MCIF_W_Input extends Bundle {
//     val waddr  = Input(UInt(64.W))
//     val wdata  = Input(UInt(64.W))
//     val wstrb  = Input(Vec(8, Bool()))
// }

// class MCIF_W extends Module {
//     val req0   = IO(Flipped(Decoupled(new MCIF_W_Input)))       

//     val mcif_axi_w = IO(new MCIF_AXI4_W())

//     val M_WID = WireInit(0.U(2.W)) 
//     M_WID := 1.U // MEM = 1
    
//     req0.ready := 1.U

//     //  ================= AW channel
//     mcif_axi_w.AXI_AWVALID  := Mux(req0.valid === 1.U, true.B, false.B) // M->S
//     mcif_axi_w.AXI_AWADDR   := req0.bits.waddr & req0.valid             // M->S    
//     mcif_axi_w.AXI_AWID     := M_WID 

//     //  ================= WR channel
//     mcif_axi_w.AXI_WVALID := Mux(req0.valid === 1.U, true.B, false.B)   // M->S
//     mcif_axi_w.AXI_WDATA  := req0.bits.wdata & req0.valid               // M->S
//     mcif_axi_w.AXI_WSTRB  := req0.bits.wstrb                            // M->S

//     // ================== B channel
//     mcif_axi_w.AXI_BREADY := 1.U
//     val bresp = RegInit(false.B)
//     bresp := mcif_axi_w.AXI_BRESP
// }
