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
<<<<<<< HEAD


class IFU_ICACHE_R extends Bundle {
    val icache_raddr  = Valid(UInt(64.W)) // pc
    val icache_rdata  = Input(UInt(64.W))  // inst
}

class IFU extends Module {
    val if_icache = IO(new IFU_ICACHE_R)
=======
import define.MACRO._

class CacheReq extends Bundle { val raddr = UInt(64.W) }
class CacheResp extends Bundle { val rdata = UInt(64.W) }

class IFU_ICACHE extends Bundle {
    val req  = Valid(new CacheReq)            // pc
    val resp = Flipped(Valid(new CacheResp))  // inst
}

class IFU extends Module {
    val if_icache = IO(new IFU_ICACHE)
>>>>>>> tracer-ysyx2204

    val if_ifid = IO(new Bundle {
        val inst  = Output(UInt(32.W))
        val pc    = Output(UInt(64.W))
    })
    
    val pc_if = IO(new Bundle {
        val pc    = Input(UInt(64.W))
    })
<<<<<<< HEAD

    if_icache.icache_raddr.valid    := 1.U       // ren
    if_icache.icache_raddr.bits     := pc_if.pc
    if_ifid.inst                    := if_icache.icache_rdata(31, 0)// Mux(if_icache.icache_raddr.bits(2) === 1.U, if_icache.icache_rdata(31, 0), if_icache.icache_rdata(63, 32))
    if_ifid.pc                      := pc_if.pc
=======
    
    // val pc_reg = RegInit(0.U(64.W)) 
    // pc_reg := pc_if.pc

    if_icache.req.valid       := pc_if.pc =/= 0.U      // ren
    if_icache.req.bits.raddr  := pc_if.pc 
    if_ifid.inst              := Mux(if_icache.resp.valid,  
                                    Mux(if_icache.req.bits.raddr(2) === 0.U, if_icache.resp.bits.rdata(31, 0), if_icache.resp.bits.rdata(63, 32)), INST_NOP)
    if_ifid.pc                := Mux(if_icache.resp.valid, pc_if.pc, 0.U)
>>>>>>> tracer-ysyx2204
}
