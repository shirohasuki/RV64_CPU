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

class IFU_ICACHE extends Bundle {
    val icache_raddr  = Flipped(Valid(UInt(64.W)))   // pc
    val icache_rdata  = Output(UInt(64.W))  // inst
}


class ICACHE extends Module {
    val if_icache   = IO(new IFU_ICACHE)
    // val icache_mem  = IO(new ICACHE_MEM_Output)

    // 1. define ICache


    // 2. FSM
    // val Idle :: Hit :: Miss :: Nil = Enum(3)
    // val state      = RegInit(Idle)
    // val next_state = RegInit(Idle)

    // switch (state) {
    //     is (Idle) {
    //         when (hit) {
    //             next_state := Hit
    //         }.elsewhen (miss) {
    //             next_state := Miss
    //         }
    //     }
    //     is (Hit) {
    //         when (rd_complete) {
    //             next_state := Idle
    //         }
    //     }
    //     is (Miss) {
    //         when (allocate_complete) {
    //             next_state := Hit
    //         }
    //     }
    // }
    
    // state := next_state
    // 3. CompareTag


    // 4. Allocate


    // 5. read


    val DPIC_pmem_read  = Module(new pmem_read())
    when (if_icache.icache_raddr.valid) {
        DPIC_pmem_read.io.raddr        := if_icache.icache_raddr.bits 
        if_icache.icache_rdata         := DPIC_pmem_read.io.rdata   
    }.otherwise {
        if_icache.icache_rdata         := 0.U  
    }
    // 6. LRU: Least recently used

}

