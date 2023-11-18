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

class CacheReq extends Bundle { val raddr = UInt(64.W) }
class CacheResp extends Bundle { val rdata = UInt(64.W) }

class IFU_ICACHE extends Bundle {
    val req  = Valid(new CacheReq)            // pc
    val resp = Flipped(Valid(new CacheResp))  // inst
}

class IFU extends Module {
    val if_icache = IO(new IFU_ICACHE)

    val if_ifid = IO(new Bundle {
        val inst  = Output(UInt(32.W))
        val pc    = Output(UInt(64.W))
    })
    
    val pc_if = IO(new Bundle {
        val pc    = Input(UInt(64.W))
    })
    
    val pc_reg = RegInit(0.U(64.W)) 
    // when (if_icache.req.valid) {
    //     pc_reg := pc_reg
    // }

    if_icache.req.valid       := 1.U       // ren
    if_icache.req.bits.raddr  := pc_if.pc
    if_ifid.inst              := if_icache.resp.bits.rdata(31, 0)// Mux(if_icache.icache_raddr.bits(2) === 1.U, if_icache.icache_rdata(31, 0), if_icache.icache_rdata(63, 32))
    if_ifid.pc                :=  pc_if.pc// pc_reg
}
