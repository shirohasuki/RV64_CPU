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


class DCache_Rd_Req extends Bundle { 
    val raddr = UInt(64.W) 
}

class DCache_Wr_Req extends Bundle { 
    val waddr = UInt(64.W) 
    val wdata = UInt(64.W) 
    val wmask = UInt(8.W) 
}

class DCacheResp extends Bundle { 
    val rdata = UInt(64.W) 
}

class EXU_DCACHE extends Bundle{
    val rd_req  = Valid(new DCache_Rd_Req) 
    val wr_req  = Valid(new DCache_Wr_Req) 
}

class DCACHE_MEM extends Bundle{
    val resp = Valid(new DCacheResp)
}

class DCACHE extends Module {
    val ex_dcache  = IO(new EXU_DCACHE)
    val dcache_mem = IO(new DCACHE_MEM_Output)

    val DPIC_pmem_read  = Module(new pmem_read())
    val DPIC_pmem_write = Module(new pmem_write())
    when (ex_dcache.rd_req.valid) {
        DPIC_pmem_read.io.raddr         := ex_dcache.bits.raddr
        dcache_mem.resp.bits.rdata      := DPIC_pmem_read.io.rdata
        dcache_mem.resp.valid           := 1.U
    }.elsewhen (ex_dcache.wr_req.valid) {
        DPIC_pmem_write.io.waddr        := ex_dcache.bits.waddr
        DPIC_pmem_write.io.wdata        := ex_dcache.bits.wdata
        DPIC_pmem_write.io.wmask        := ex_dcache.bits.wmask
        
        dcache_mem.resp.bits.rdata      := 0.U
        dcache_mem.resp.valid           := 0.U
    }.otherwise {
        dcache_mem.resp.bits.rdata      := 0.U
        dcache_mem.resp.valid           := 0.U
    }
}

