/*************************************************************************
    > File Name: IFU.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:24
    > Description: 
*************************************************************************/

package IFU

import chisel3._
import chisel3.util._
import chisel3.stage._


class IFU_ICACHE_R extends Bundle {
    val icache_raddr  = Valid(UInt(64.W)) // pc
    val icache_rdata  = Input(UInt(64.W))  // inst
}

class IFU extends Module {
    val if_icache = IO(new IFU_ICACHE_R)

    val if_ifid = IO(new Bundle {
        val inst  = Output(UInt(32.W))
        val pc    = Output(UInt(64.W))
    })
    
    val pc_if = IO(new Bundle {
        val pc    = Input(UInt(64.W))
    })

    if_icache.icache_raddr.valid := 1.U       // ren
    if_icache.icache_raddr.bits   := pc_if.pc
    if_ifid.inst              := Mux(if_icache.icache_raddr.bits(2) === 1.U, if_icache.icache_rdata(31, 0), if_icache.icache_rdata(63, 32))
    if_ifid.pc                := pc_if.pc
}
