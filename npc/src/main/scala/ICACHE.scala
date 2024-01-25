/*************************************************************************
    > File Name: ICACHE.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:08:18
    > Description: 
*************************************************************************/

package ICACHE

import chisel3._
import chisel3.util._

import BUS._

// import DPIC.pmem_read_Icacheline
// import DPIC.ctrace_icache

class ICacheReq extends Bundle { val raddr = UInt(64.W) }
class ICacheResp extends Bundle { val rdata = UInt(64.W) }

class IFU_ICACHE extends Bundle {
    val req  = Flipped(Valid(new ICacheReq)) // pc
    val resp = Valid(new ICacheResp)         // inst
}

class Counter(t: Int) extends Module {
    val io  = IO(new Bundle{
        val en      = Input(Bool())
        val offset  = Output(UInt(8.W))
        val cnt_end = Output(Bool())
    })
    val cnt     = RegInit(0.U(10.W))
    val nextCnt = cnt + 1.U
    when(io.en) {
        when(cnt < t.U) {
            cnt := nextCnt
        }.otherwise {
            cnt := 0.U
        }
    }.otherwise {
        cnt := 0.U
    }
    io.offset   := cnt
    io.cnt_end  := (cnt === t.U).asBool
}

class ICACHE extends Module {
    val if_icache   = IO(new IFU_ICACHE)
    val icache_ctrl = IO(new Bundle { val icache_busy  = Output(Bool())})
    val icache_mcif_r = IO(new MCIF_R_BUS)

    // 1. define ICache
      // memory
    val vMem    = RegInit(0.U(64.W))    // 64行，每行占一位
    val tagMem  = Reg(Vec(64, UInt(52.W))) 
    val dataMem = SyncReadMem(64, Vec(8, UInt(64.W)))
    
    // wire
    val raddr   = WireInit(0.U(64.W))
    val ren     = WireInit(false.B)
    raddr       := if_icache.req.bits.raddr
    ren         := if_icache.req.valid
    val tag     = raddr(63, 12)
    val idx     = raddr(11, 6)
    val offset  = raddr(5, 3)
    val rdata   = WireInit(0.U(64.W))

    // 2. FSM
    val sIdle :: sHit :: sMiss :: Nil = Enum(3)  
    // 枚举状态名的首字母要小写，这样Scala的编译器才能识别成变量模式匹配 sIdle 00 sHit 01 sMiss 10
    val state      = RegInit(sIdle)
    val next_state = WireInit(sIdle)

    val hit                 = WireInit(false.B)
    val miss                = WireInit(false.B)
    val rd_complete         = RegInit(false.B)
    val reload_complete     = RegInit(false.B)

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
            when (reload_complete) {
                next_state := sHit
            }.otherwise {
                next_state := sMiss
            }
        }
    }
    state := next_state
    
    // 3. IDLE
    hit  := ren && vMem(idx) && (tag === tagMem(idx)) 
    miss := ren && (~vMem(idx) || (tag =/= tagMem(idx)))

    // 4. HIT
    if_icache.resp.valid      := state === sHit && hit
    when (if_icache.resp.valid) {
        if_icache.resp.bits.rdata := dataMem(idx)(offset)
    }.otherwise {
        if_icache.resp.bits.rdata := 0.U
    } 

    when (if_icache.resp.valid) {
        rd_complete := 1.U
    }.otherwise {
        rd_complete := 0.U
    }

    // 5. MISS
    // Read Allocate
    // val DPIC_pmem_read_Icacheline  = Module(new pmem_read_Icacheline())
    // val DPIC_ctrace_icache_record  = Module(new ctrace_icache())
    val Counter1     = Module(new Counter(t = 8))
    // 5.1 发出读请求 
    when (ren && miss) {
        icache_mcif_r.req.valid       := true.B
        icache_mcif_r.req.bits.rlen   := 8.U
        icache_mcif_r.req.bits.raddr  := Cat(raddr(63, 6), Fill(6, 0.U))
    }.otherwise {
        icache_mcif_r.req.valid       := false.B
        icache_mcif_r.req.bits.rlen   := 0.U
        icache_mcif_r.req.bits.raddr  := 0.U
    }   
    // 5.2 收到读响应（设置计数器+写入ICache）
    icache_mcif_r.resp.ready := 1.U
    when (icache_mcif_r.resp.valid) {
        Counter1.io.en  := 1.U
    }.otherwise {
        Counter1.io.en  := 0.U
    } 
    when (icache_mcif_r.resp.valid) { dataMem(idx)(Counter1.io.offset) := icache_mcif_r.resp.bits.rdata} 
       
    // 5.3 cacheline写入完成（设置reload_complete）
    when (Counter1.io.cnt_end) {
        tagMem(idx)      := tag
        vMem             := vMem.bitSet(idx, true.B) 
        reload_complete  := 1.U
    }.otherwise {
        reload_complete  := 0.U
    }

    // 6. to ctrl
    val icache_miss      = next_state === sMiss || state === sMiss
    val icache_latency   = RegInit(false.B)  // 同步读写自带的一周期latency
    val icache_reloading = Counter1.io.en && !Counter1.io.cnt_end
    when (next_state === sHit && ~icache_latency) {
        icache_latency := 1.U
    }.otherwise {
        icache_latency := 0.U
    }
    icache_ctrl.icache_busy := icache_miss | icache_latency | icache_reloading
}

