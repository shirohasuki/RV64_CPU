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

import DPIC.pmem_read

class CacheReq extends Bundle { val raddr = UInt(64.W) }
class CacheResp extends Bundle { val rdata = UInt(64.W) }

class IFU_ICACHE extends Bundle {
    val req  = Flipped(Valid(new CacheReq)) // pc
    val resp = Valid(new CacheResp)         // inst
}

class ICACHE_Ctrl extends Bundle {
    val icache_miss  = Output(Bool())         
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
    val tagMem  = SyncReadMem(64, UInt(49.W))
    val dataMem = SyncReadMem(64, Vec(8, UInt(64.W)))
    // val dataMem = Seq.fill(4)(SyncReadMem(64, Vec(2, UInt(8.W))))
    
    // wire
    val raddr   = if_icache.req.bits.raddr
    val ren     = if_icache.req.valid
    val tag     = raddr(63, 15)
    val idx     = raddr(14, 9)
    val offset  = raddr(8, 3)
    val rdata   = WireInit(0.U(64.W))

    // reg
    // val raddr_reg   = Reg(chiselTypeOf(if_icache.req.bits.raddr))
    val raddr_reg   = RegInit(0.U(64.W))
    raddr_reg      := raddr
    val tag_reg     = raddr_reg(63, 15)
    val idx_reg     = raddr_reg(14, 9)
    val offset_reg  = raddr_reg(8, 3)


    // 2. FSM
    val sIdle :: sHit :: sMiss :: Nil = Enum(3)  
    // 枚举状态名的首字母要小写，这样Scala的编译器才能识别成变量模式匹配 sIdle 00 sHit 01 sMiss 10
    val state      = RegInit(sIdle)
    val next_state = RegInit(sIdle)

    val hit                 = WireInit(false.B)
    val miss                = WireInit(false.B)
    val rd_complete         = WireInit(false.B)
    val reload_complete     = WireInit(false.B)

    switch (state) {
        is (sIdle) {
            when (hit) {
                next_state := sHit
            }.elsewhen (miss) {
                next_state := sMiss
            }
        }
        is (sHit) {
            when (rd_complete) {
                next_state := sIdle
            }
        }
        is (sMiss) {
            when (reload_complete) {
                next_state := sHit
            }
        }
    }
    state := next_state
    
    // 3. IDLE
    hit  := ren && vMem(idx) && (tag === tagMem(idx)) 
    miss := ren && (~vMem(idx) || (tag =/= tagMem(idx))) 
    // val tagmiss = (tag =/= tagMem(idx_reg))

    // 4. HIT
    if_icache.resp.bits.rdata := dataMem(idx_reg)(offset_reg)
    if_icache.resp.valid      := state === sHit  
    when (if_icache.resp.valid) {
        rd_complete := 1.U
    }.otherwise {
        rd_complete := 0.U
    }

    // 5. MISS
    // Read Allocate
    val DPIC_pmem_read  = Module(new pmem_read())
    val rdata_test1 = RegInit(0.U(64.W))
    val rdata_test2 = RegInit(0.U(64.W))

    when (ren) {
        DPIC_pmem_read.io.raddr     := raddr
        dataMem(idx)(offset)        := DPIC_pmem_read.io.rdata   
        DPIC_pmem_read.io.raddr     := raddr+4.U
        dataMem(idx)(offset+1.U)    := DPIC_pmem_read.io.rdata   
        vMem                        := vMem.bitSet(idx, true.B) 
        tagMem(idx)                 := tag

        rdata_test1 := dataMem(idx)(offset)
        rdata_test2 := dataMem(idx)(offset+1.U)

        reload_complete             := 1.U
    }.otherwise {
        // dataMem(idx_reg)(offset_reg)    := dataMem(idx_reg)(offset_reg) 
        reload_complete                 := 0.U
    }

    // 6. LRU: Least recently used

    // 7. output
    icache_ctrl.icache_miss := miss//state === sMiss 
}

