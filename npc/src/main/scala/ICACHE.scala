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
    val raddr  = Flipped(Valid(UInt(64.W)))   // pc
    val rdata  = Output(UInt(64.W))  // inst
}

class ICACHE extends Module {
    val if_icache = IO(new IFU_ICACHE)

    // 1. define ICache


    // 2. FSM
    val Idle :: Hit :: Miss :: Nil = Enum(3)
    val state = RegInit(Idle)

    // switch (state) {
    //     is (Idle) {
    //         when (hit) {
    //             state := Hit
    //         }.elsewhen (miss) {
    //             state := Miss
    //         }
    //     }
    //     is (Hit) {
    //         when (rd_complete) {
    //             state := Idle
    //         }
    //     }
    //     is (Miss) {
    //         when (allocate_complete) {
    //             state := Hit
    //         }
    //     }
    // }
    
    // 3. CompareTag


    // 4. Allocate


    // 5. read
    val pmem_read = Module(new pmem_read())
    when (if_icache.raddr.valid) {
        pmem_read(if_icache.raddr.bit, if_icache.rdata);
    }
    // 6. LRU: Least recently used

}

