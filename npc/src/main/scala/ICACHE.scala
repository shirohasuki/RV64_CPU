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

import DPIC.pmem_read_cacheline

class CacheReq extends Bundle { val raddr = UInt(64.W) }
class CacheResp extends Bundle { val rdata = UInt(64.W) }

class IFU_ICACHE extends Bundle {
    val req  = Flipped(Valid(new CacheReq)) // pc
    val resp = Valid(new CacheResp)         // inst
}

class ICACHE_Ctrl extends Bundle {
    val icache_busy  = Output(Bool())         
}

// object CacheState extends ChiselEnum {
//     val sIdle, sHit, sMiss = Value
// }

class ICACHE extends Module {
    val if_icache   = IO(new IFU_ICACHE)
    val icache_ctrl = IO(new ICACHE_Ctrl)
    // val icache_mem  = IO(new ICACHE_MEM_Output)

    // 1. define ICache
      // memory
    val vMem    = RegInit(0.U(64.W))    // 64行，每行占一位
    val tagMem  = SyncReadMem(64, UInt(52.W))
    val dataMem = SyncReadMem(64, Vec(8, UInt(64.W)))
    // val dataMem = Seq.fill(4)(SyncReadMem(64, Vec(2, UInt(8.W))))
    
    // wire
    val raddr   = WireInit(0.U(64.W))
    raddr   := if_icache.req.bits.raddr
    val ren     = WireInit(false.B)
    ren     := if_icache.req.valid
    val tag     = raddr(63, 12)
    val idx     = raddr(11, 6)
    val offset  = raddr(5, 3)
    val rdata   = WireInit(0.U(64.W))

    // reg
    val raddr_reg   = RegInit(0.U(64.W))
    raddr_reg      := raddr
    val tag_reg     = raddr_reg(63, 12)
    val idx_reg     = raddr_reg(11, 6)
    val offset_reg  = raddr_reg(5, 3)


    // 2. FSM
    val sIdle :: sHit :: sMiss :: Nil = Enum(3)  
    // 枚举状态名的首字母要小写，这样Scala的编译器才能识别成变量模式匹配 sIdle 00 sHit 01 sMiss 10
    val state      = RegInit(sIdle)
    val next_state = WireInit(sIdle)

    val hit                 = WireInit(false.B)
    val miss                = WireInit(false.B)
    val rd_complete         = RegInit(false.B)
    val reload_complete     = RegInit(false.B)
    val reload_complete_tmp     = RegInit(false.B)

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
            }.elsewhen (rd_complete && miss) {
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
    val tag_miss = tag =/= tagMem(idx)

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
    val DPIC_pmem_read_cacheline  = Module(new pmem_read_cacheline())
    // val rdata_test0 = WireInit(0.U(64.W))
    // val rdata_test1 = WireInit(0.U(64.W))
    // val rdata_test2 = WireInit(0.U(64.W))
    // val rdata_test3 = WireInit(0.U(64.W))
    // val rdata_test4 = WireInit(0.U(64.W))
    // val rdata_test5 = WireInit(0.U(64.W))
    // val rdata_test6 = WireInit(0.U(64.W))
    // val rdata_test7 = WireInit(0.U(64.W))
    // rdata_test0 := dataMem(25)(0)
    // rdata_test1 := dataMem(25)(1)
    // rdata_test2 := dataMem(25)(2)
    // rdata_test3 := dataMem(25)(3)
    // rdata_test4 := dataMem(25)(4)
    // rdata_test5 := dataMem(25)(5)
    // rdata_test6 := dataMem(25)(6)
    // rdata_test7 := dataMem(25)(7)

    // val tag_test0 = WireInit(0.U(64.W))
    // val tag_test1 = WireInit(0.U(64.W))
    // val tag_test2 = WireInit(0.U(64.W))
    // val tag_test3 = WireInit(0.U(64.W))
    // val tag_test4 = WireInit(0.U(64.W))
    // val tag_test5 = WireInit(0.U(64.W))
    // val tag_test6 = WireInit(0.U(64.W))
    // val tag_test7 = WireInit(0.U(64.W))

    // tag_test0 := tagMem(0)
    // tag_test1 := tagMem(1)
    // tag_test2 := tagMem(25)
    // tag_test3 := tagMem(3)
    // tag_test4 := tagMem(4)


    when (ren && miss) {
        DPIC_pmem_read_cacheline.io.raddr       := Cat(raddr(63, 6), Fill(6, 0.U))
        // val writeAddress = idx
        // val writeData    = VecInit.tabulate(8)(i => DPIC_pmem_read_cacheline.io.rdata(i))
        // dataMem.write(writeAddress, writeData)
        for (i <- 0 until 8) { dataMem(idx)(i)  := DPIC_pmem_read_cacheline.io.rdata(i)}
        tagMem(idx)                             := tag | tag_reg
        reload_complete                         := 1.U
    }.otherwise {
        reload_complete                         := 0.U
    }

    when (reload_complete) {
        vMem                                    := vMem.bitSet(idx, true.B) 
    }

    // 6. update 
    // LRU: Least recently used

    // 7. output
    val icache_miss     = next_state === sMiss || state === sMiss
    val icache_latency  = RegInit(false.B)  // 同步读写自带的一周期latency
    when (next_state === sHit && ~icache_latency) {
        icache_latency := 1.U
    }.otherwise {
        icache_latency := 0.U
    }
    icache_ctrl.icache_busy := icache_miss | icache_latency
}

