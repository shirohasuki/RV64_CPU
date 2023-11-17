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

// object CacheState extends ChiselEnum {
//     val sIdle, sHit, sMiss = Value
// }

class ICACHE extends Module {
    val if_icache   = IO(new IFU_ICACHE)
    // val icache_mem  = IO(new ICACHE_MEM_Output)

    // 1. define ICache
      // memory
    val tagMem  = SyncReadMem(Vec(64, UInt(52.W)))
    val dataMem = Seq.fill(4)(SyncReadMem(64, Vec(2, UInt(8.W))))

    val raddr = if_icache.req.bits.addr
    val idx     = raddr(11, 6)

    val raddr_reg = Reg(chiselTypeOf(if_icache.req.bits.addr))
    val tag_reg = raddr_reg(63, 12)
    val idx_reg = raddr_reg(11, 6)
    val off_reg = raddr_reg(5, 0)


    // 2. FSM
    val sIdle :: sHit :: sMiss :: Nil = Enum(3)  // 枚举状态名的首字母要小写，这样Scala的编译器才能识别成变量模式匹配
    val state      = RegInit(sIdle)
    val next_state = RegInit(sIdle)

    val hit     = WireInit(false.B)
    val miss    = WireInit(false.B)
    val rd_complete         = WireInit(false.B)
    val allocate_complete   = WireInit(false.B)

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
            when (allocate_complete) {
                next_state := sHit
            }
        }
    }
    state := next_state
    
    // 3. IDLE
    hit  := if_icache.icache_raddr.valid & (tag === if_icache.icache_raddr.bits(64, 12)) 
    miss := if_icache.icache_raddr.valid & (tag =/= if_icache.icache_raddr.bits(64, 12)) 

    // 4. HIT


    // 5. MISS


    val DPIC_pmem_read  = Module(new pmem_read())
    when (if_icache.icache_raddr.valid) {
        DPIC_pmem_read.io.raddr        := if_icache.icache_raddr.bits 
        if_icache.icache_rdata         := DPIC_pmem_read.io.rdata   
    }.otherwise {
        if_icache.icache_rdata         := 0.U  
    }
    // 6. LRU: Least recently used

}

