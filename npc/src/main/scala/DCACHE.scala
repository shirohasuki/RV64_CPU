/*************************************************************************
    > File Name: DCACHE.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:08:32
    > Description: 
*************************************************************************/

// package DCACHE

// import chisel3._
// import chisel3.util._

// import DPIC.pmem_read_Dcacheline
// import DPIC.pmem_write



// class EXU_DCACHE_Input extends Bundle{
//     val rd_req  = Flipped(Valid(new Bundle { val raddr = UInt(64.W)}))
//     val wr_req  = Flipped(Valid(new Bundle {
//         val waddr = UInt(64.W) 
//         val wdata = UInt(64.W) 
//         val wmask = UInt(8.W) 
//     }))
// }

// class DCACHE_MEM_Output extends Bundle{
//     val resp = Valid(new Bundle{ val rdata = UInt(64.W)})
// }


// class DCACHE extends Module {
//     val ex_dcache  = IO(new EXU_DCACHE_Input)
//     val dcache_mem = IO(new DCACHE_MEM_Output)

//     val icache_ctrl = IO(new Bundle { val dcache_busy  = Output(Bool())})


//     // val nSets = 8.U; // 组数:8组

//     // 1. define DCache
//     // memory
//     val vMem    = Reg(Vec(8, UInt(16.W)))                       // 8组，16行，每行占一位
//     val dMem    = Reg(Vec(8, UInt(16.W)))                       // 8组，16行，每行占一位
//     val ageMem  = Reg(Vec(8, UInt(7.W)))                        // 8组，三层age位
//     val tagMem  = Reg(Vec(8, Vec(16, UInt(56.W))))              // 8组，16行tag
//     val dataMem = Vec(8, (SyncReadMem(16, Vec(4, UInt(64.W))))) // 8组，16行,每行4个64位
    
//     // wire
//     val raddr   = ex_dcache.rd_req.bits.raddr
//     val ren     = ex_dcache.rd_req.valid

//     val tag     = raddr(63, 8)
//     val set_idx = raddr(7, 5)
//     val way_idx = WireInit(0.U(4.W))
//     val offset  = raddr(4, 3)
//     val rdata   = WireInit(0.U(64.W))

//     // 2. FSM
//     val sIdle :: sHit :: sMiss :: sWb :: Nil = Enum(4)  
//     val state      = RegInit(sIdle)
//     val next_state = WireInit(sIdle)

//     val hit                 = WireInit(false.B)
//     val miss                = WireInit(false.B)
//     val full                = WireInit(false.B)
//     val update_dirty        = WireInit(false.B)
//     val rd_complete         = RegInit(false.B)
//     val reload_complete     = RegInit(false.B)
//     val wb_complete         = RegInit(false.B)

//     switch (state) {
//         is (sIdle) {
//             when (hit) {
//                 next_state := sHit
//             }.elsewhen (miss) {if_icache
//                 next_state := sMiss
//             }
//         }
//         is (sHit) {
//             when (hit) {
//                 next_state := sHit
//             }.elsewhen (miss) {
//                 next_state := sMiss
//             }.otherwise {
//                 next_state := sIdle
//             }
//         }
//         is (sMiss) {
//             when (update_dirty) {
//                 next_state := sWb
//             }.elsewhen (reload_complete) {
//                 next_state := sHit
//             }.otherwise {
//                 next_state := sMiss
//             }
//         }
//         is (sWb) {
//             when (wb_complete) {
//                 next_state := sMiss
//             }.otherwise {
//                 next_state := sWb
//             }
//         }
//     }
//     state := next_state
    
//     // 3. IDLE    
//     val way_idx = RegInit(0.U(4.W))

//     when (ren) {
//         val indices = (0 until 16).map(i => vMem(i) && tag === tagMem(i))
//         val hitDetected = indices.exists(identity)

//         hit  := Mux(hitDetected, 1.U, 0.U)
//         miss := Mux(!hitDetected, 1.U, 0.U)

//         way_idx := PriorityEncoderOH(VecInit(indices))
        
//         full := Mux(PopCount((0 until 16).map(i => vMem(i))) === 16.U, 1.U, 0.U)
//     }


//     // 4. HIT
//     dcache_mem.resp.valid      := state === sHit && hit
//     when (dcache_mem.resp.valid) {
//         dcache_mem.resp.bits.rdata := dataMem(set_idx)(way_idx)(offset)
//     }.otherwise {
//         dcache_mem.resp.bits.rdata := 0.U
//     } 

//     when (dcache_mem.resp.valid) {
//         rd_complete := 1.U
//     }.otherwise {
//         rd_complete := 0.U
//     }

//     // 5. MISS
//     // Read Allocate
//     val DPIC_pmem_read_Dcacheline    = Module(new pmem_read_Dcacheline())

//     when (ren && miss) {
//         DPIC_pmem_read_Dcacheline.io.raddr      := Cat(raddr(63, 5), Fill(5, 0.U))

//         when (full) {

//         }.otherwise {
//             for (i <- 0 until 4) { dataMem(idx)(i)  := DPIC_pmem_read_Dcacheline.io.rdata(i)}
//             tagMem(set_idx)(way_idx)                := tag
//         }
//         reload_complete                         := 1.U
//     }.otherwise {
//         reload_complete                         := 0.U
//     }

//     when (reload_complete) {
//         vMem                                    := vMem.bitSet(idx, true.B) 
//     }

//     // update 伪LRU

//     // 6. WB


//     val DPIC_pmem_write = Module(new pmem_write())
//     when (ex_dcache.wr_req.valid) {
//         DPIC_pmem_write.io.waddr        := ex_dcache.wr_req.bits.waddr
//         DPIC_pmem_write.io.wdata        := ex_dcache.wr_req.bits.wdata
//         DPIC_pmem_write.io.wmask        := ex_dcache.wr_req.bits.wmask

//         dcache_mem.resp.bits.rdata      := 0.U
//         dcache_mem.resp.valid           := 0.U
//     }.otherwise {
//         dcache_mem.resp.bits.rdata      := 0.U
//         dcache_mem.resp.valid           := 0.U
//     }
    
//     // 7. to ctrl
//     val dcache_miss     = next_state === sMiss || state === sMiss
//     val dcache_latency  = RegInit(false.B)  // 同步读写自带的一周期latency
//     when (next_state === sHit && ~dcache_latency) {
//         dcache_latency := 1.U
//     }.otherwise {
//         dcache_latency := 0.U
//     }
//     dcache_ctrl.dcache_busy := dcache_miss | dcache_latency
// }






package DCACHE

import chisel3._
import chisel3.util._


import DPIC.pmem_read
import DPIC.pmem_write


class EXU_DCACHE_Input extends Bundle{
    val rd_req  = Flipped(Valid(new Bundle { val raddr = UInt(64.W)}))
    val wr_req  = Flipped(Valid(new Bundle {
        val waddr = UInt(64.W) 
        val wdata = UInt(64.W) 
        val wmask = UInt(8.W) 
    }))
}

class DCACHE_MEM_Output extends Bundle{
    val resp = Valid(new Bundle{ val rdata = UInt(64.W)})
}

class DCACHE extends Module {
    val ex_dcache  = IO(new EXU_DCACHE_Input)
    val dcache_mem = IO(new DCACHE_MEM_Output)
    val icache_ctrl = IO(new Bundle { val dcache_busy  = Output(Bool())})

    val DPIC_pmem_read  = Module(new pmem_read())
    val DPIC_pmem_write = Module(new pmem_write())
    when (ex_dcache.rd_req.valid) {
        DPIC_pmem_read.io.raddr := ex_dcache.rd_req.bits.raddr
        dcache_mem.resp.bits.rdata         := DPIC_pmem_read.io.rdata
    }.elsewhen (ex_dcache.wr_req.valid) {
        DPIC_pmem_write.io.waddr  := ex_dcache.wr_req.bits.waddr
        DPIC_pmem_write.io.wdata  := ex_dcache.wr_req.bits.wdata
        DPIC_pmem_write.io.wmask  := ex_dcache.wr_req.bits.wmask
        dcache_mem.resp.bits.rdata        := 0.U
    }.otherwise {
        dcache_mem.resp.bits.rdata        := 0.U
    }

    icache_ctrl.dcache_busy      := 0.U
    dcache_mem.resp.valid        := 1.U
}

