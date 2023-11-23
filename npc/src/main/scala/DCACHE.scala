/*************************************************************************
    > File Name: DCACHE.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:08:32
    > Description: 
*************************************************************************/

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

class DCACHE_Ctrl extends Bundle {
}

class DCACHE extends Module {
    val ex_dcache  = IO(new EXU_DCACHE_Input)
    val dcache_mem = IO(new DCACHE_MEM_Output)
    
    val icache_ctrl = IO(new Bundle { val dcache_busy  = Output(Bool())})

    // 1. define DCache
    // memory
    val vMem    = RegInit(0.U(64.W))    // 64行，每行占一位
    val tagMem  = Reg(Vec(64, UInt(52.W))) 
    val dataMem = SyncReadMem(64, Vec(8, UInt(64.W)))
    // val dataMem = Seq.fill(4)(SyncReadMem(64, Vec(2, UInt(8.W))))
    
    // wire
    val raddr   = ex_dcache.rd_req.bits.raddr
    val ren     = ex_dcache.rd_req.valid

    val tag     = raddr(63, 12)
    val idx     = raddr(11, 6)
    val offset  = raddr(5, 3)
    val rdata   = WireInit(0.U(64.W))

    // 2. FSM
    val sIdle :: sHit :: sMiss :: sWb :: Nil = Enum(4)  
    val state      = RegInit(sIdle)
    val next_state = WireInit(sIdle)

    val hit                 = WireInit(false.B)
    val miss                = WireInit(false.B)
    val update_dirty        = WireInit(false.B)
    val rd_complete         = RegInit(false.B)
    val reload_complete     = RegInit(false.B)
    val wb_complete         = RegInit(false.B)

    switch (state) {
        is (sIdle) {
            when (hit) {
                next_state := sHit
            }.elsewhen (miss) {
                next_state := sMiss
            }
        }
        is (sHit) {
            when (hit) {
                next_state := sHit
            }.elsewhen (miss) {
                next_state := sMiss
            }.otherwise {
                next_state := sIdle
            }
        }
        is (sMiss) {
            when (update_dirty) {
                next_state := sWb
            }.elsewhen (reload_complete) {
                next_state := sHit
            }.otherwise {
                next_state := sMiss
            }
        }
        is (sWb) {
            when (wb_complete) {
                next_state := sMiss
            }.otherwise {
                next_state := sWb
            }
        }
    }
    state := next_state
    
    // 3. IDLE
    hit  := ren && vMem(idx) && (tag === tagMem(idx)) 
    miss := ren && (~vMem(idx) || (tag =/= tagMem(idx)))

    // 4. HIT
    dcache_mem.resp.valid      := state === sHit && hit
    when (dcache_mem.resp.valid) {
        dcache_mem.resp.bits.rdata := dataMem(idx)(offset)
    }.otherwise {
        dcache_mem.resp.bits.rdata := 0.U
    } 

    when (dcache_mem.resp.valid) {
        rd_complete := 1.U
    }.otherwise {
        rd_complete := 0.U
    }

    // 5. MISS
    // Read Allocate

    // update

    // 6. WB


    val DPIC_pmem_write = Module(new pmem_write())
    when (ex_dcache.wr_req.valid) {
        DPIC_pmem_write.io.waddr        := ex_dcache.wr_req.bits.waddr
        DPIC_pmem_write.io.wdata        := ex_dcache.wr_req.bits.wdata
        DPIC_pmem_write.io.wmask        := ex_dcache.wr_req.bits.wmask

        dcache_mem.resp.bits.rdata      := 0.U
        dcache_mem.resp.valid           := 0.U
    }.otherwise {
        dcache_mem.resp.bits.rdata      := 0.U
        dcache_mem.resp.valid           := 0.U
    }
    
    // 7. to ctrl
    val dcache_miss     = next_state === sMiss || state === sMiss
    val dcache_latency  = RegInit(false.B)  // 同步读写自带的一周期latency
    when (next_state === sHit && ~dcache_latency) {
        dcache_latency := 1.U
    }.otherwise {
        dcache_latency := 0.U
    }
    dcache_ctrl.dcache_busy := dcache_miss | dcache_latency
}
