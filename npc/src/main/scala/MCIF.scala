package MCIF
// 2R2W, 2I2O

import chisel3._
import chisel3.util._

// ============== IO on the left(from/to core) =================== //
class IFU_MCIF extends Bundle{
    val mem_ren    = Input(Bool())
    val mem_raddr  = Input(UInt(64.W))
    val mem_rdata  = Output(UInt(64.W))
}

class LSU_MCIF extends Bundle{
    val mem_ren    = Input(Bool())
    val mem_raddr  = Input(UInt(64.W))
    val mem_rdata  = Output(UInt(64.W))

    val mem_wen    = Input(Bool())
    val mem_waddr  = Input(UInt(64.W))
    val mem_wdata  = Input(UInt(64.W))
    val mem_wmask  = Input(UInt(64.W))
}

// ========== IO on the right(from/to AXI4(device)) ============ //
class MCIF_AXI4_R extends Bundle{
    // AR channel
    val AXI_ARID    = Output(UInt(2.W))
    val AXI_ARADDR  = Output(UInt(32.W))
    val AXI_ARVALID = Output(Bool())
    // Rd channel
    val AXI_RID     = Input(UInt(2.W))
    val AXI_RDATA   = Input(UInt(64.W))
    val AXI_RVALID  = Input(Bool())
    val AXI_RREADY  = Output(Bool())
    val AXI_RLAST   = Output(Bool())
}

class MCIF_AXI4_W extends Bundle {
    val AXI_AWID    = Output(UInt(2.W))
    val AXI_AWADDR  = Output(UInt(32.W))
    val AXI_AWVALID = Output(Bool())

    val AXI_WDATA   = Output(UInt(64.W))
    val AXI_WSTRB   = Output(UInt(8.W))
    val AXI_WVALID  = Output(Bool())
    
    val AXI_BRESP   = Input(UInt(1.W))
    val AXI_BREADY  = Output(Bool())
}

// ====================== 连线 ================================ // 
class MCIF extends Module {
    val mcif_ctrl = IO(new Bundle{ 
        val axi_busy_start = Output(Bool())
        val axi_busy_end   = Output(Bool())
    })
    
    //  IO on the left(from/to core)
    val if_mcif = IO(new IFU_MCIF())
    val ls_mcif = IO(new LSU_MCIF())

    val MCIF_R    = Module(new MCIF_R())
        MCIF_R.req0.valid := if_mcif.mem_ren
        MCIF_R.req0.bits  := if_mcif.mem_raddr
        MCIF_R.req1.valid := ls_mcif.mem_ren
        MCIF_R.req1.bits  := ls_mcif.mem_raddr

        MCIF_R.resp0.ready := 1.U
        if_mcif.mem_rdata := MCIF_R.resp0.bits
        MCIF_R.resp1.ready := 1.U
        ls_mcif.mem_rdata := MCIF_R.resp1.bits

    val MCIF_W    = Module(new MCIF_W())
        MCIF_W.req0.valid       := ls_mcif.mem_wen
        MCIF_W.req0.bits.waddr  := ls_mcif.mem_waddr
        MCIF_W.req0.bits.wdata  := ls_mcif.mem_wdata
        MCIF_W.req0.bits.wstrb  := ls_mcif.mem_wmask

    //  IO on the right(from/to AXI4(device))
    val mcif_axi_r = IO(new MCIF_AXI4_R())
    val mcif_axi_w = IO(new MCIF_AXI4_W())

    mcif_axi_r <> MCIF_R.mcif_axi_r
    mcif_axi_w <> MCIF_W.mcif_axi_w

    mcif_ctrl.axi_busy_start := if_mcif.mem_ren | ls_mcif.mem_ren | ls_mcif.mem_wen
    mcif_ctrl.axi_busy_end   := mcif_axi_r.AXI_RLAST | mcif_axi_w.AXI_BRESP
}

// ========== some instance =========================== // 
class hs_pipe extends Module { // hand shake pipe
    val io = IO(new Bundle {
        val in  = Flipped(Decoupled(UInt(64.W)))
        val out = Decoupled(UInt(64.W))
        val cnt = Output(UInt(4.W))
    }) 
    val fifo = Module(new Queue(UInt(64.W), entries = 2)) // entries 为存储的数据的深度
    fifo.io.enq <> io.in        // 入口
    io.out      <> fifo.io.deq  // 出口
    io.cnt := fifo.io.count     // 此时fifo中的数据个数
} // 没用上，先在这放着

// ====================== MCIF_R ================================ // 
class MCIF_R_Input extends Bundle { val raddr  = Input(UInt(64.W))}

class MCIF_R_Output extends Bundle { val rdata = Output(UInt(64.W))}

class MCIF_R extends Module {
    val req0  = IO(Flipped(Decoupled(new MCIF_R_Input())))       
    val req1  = IO(Flipped(Decoupled(new MCIF_R_Input())))       
    
    val resp0  = IO(Decoupled(new MCIF_R_Output()))  
    val resp1  = IO(Decoupled(new MCIF_R_Output()))

    val mcif_axi_r = IO(new MCIF_AXI4_R())

    val M_RID = UInt(2.W) // Master:IFU:0 MEM:1
    // val S_RID = UInt(2.W) // Slave: MEM

    val req_array     = Vec(Seq(req0.bits.raddr, req1.bits.raddr))
    val raddr         = Flipped(Decoupled(UInt(64.W)))
    
    val Arb1 = Module(new Arbiter(UInt(64.W), 2))  // 2 to 1 Priority Arbiter
        Arb1.io.in  <> req_array
        raddr       <> Arb1.io.out
        M_RID       := Arb1.io.chosen
        raddr.ready := raddr.valid  // 只要收到valid, 立马ready上 
    
    //  ================= AR channel
    mcif_axi_r.AXI_ARVALID  := Mux(raddr.valid === 1.U, true.B, false.B) // M->S
    mcif_axi_r.AXI_ARADDR   := raddr.bits & raddr.valid     // M->S    
    mcif_axi_r.AXI_ARID     := M_RID 

    //  ================= R channel
    mcif_axi_r.AXI_RREADY := 1.U // 暂时先一直拉高   // M->S

    when(mcif_axi_r.AXI_RVALID) {
        resp0.bits.rdata := Mux(mcif_axi_r.AXI_RID === 0.U, mcif_axi_r.AXI_RDATA, 0.U)
        resp1.bits.rdata := Mux(mcif_axi_r.AXI_RID === 1.U, mcif_axi_r.AXI_RDATA, 0.U)
    }   // S->M
}

// ====================== MCIF_W ================================ // 
class MCIF_W_Input extends Bundle {
    val waddr  = Input(UInt(64.W))
    val wdata  = Input(UInt(64.W))
    val wstrb  = Input(UInt(8.W))
}

class MCIF_W extends Module {
    val req0   = IO(Flipped(Decoupled(new MCIF_W_Input)))       

    val mcif_axi_w = IO(new MCIF_AXI4_W())

    val M_WID = UInt(2.W) 
    M_WID := 1.U
    
    //  ================= AW channel
    mcif_axi_w.AXI_AWVALID  := Mux(req0.valid === 1.U, true.B, false.B) // M->S
    mcif_axi_w.AXI_AWADDR   := req0.bits.waddr & req0.valid         // M->S    
    mcif_axi_w.AXI_AWID     := M_WID 

    //  ================= WR channel
    mcif_axi_w.AXI_WVALID := Mux(req0.valid === 1.U, true.B, false.B)  // M->S
    mcif_axi_w.AXI_WDATA  := req0.bits.wdata & req0.valid          // M->S
    mcif_axi_w.AXI_WSTRB  := req0.bits.wstrb & req0.valid          // M->S

    // ================== B channel
    mcif_axi_w.AXI_BREADY := 1.U
    val bresp = RegInit(false.B)
    bresp := mcif_axi_w.AXI_BRESP
}
