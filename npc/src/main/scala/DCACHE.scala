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


class EXU_DCACHE extends Bundle{
    val dcache_raddr  = Flipped(Valid(UInt(64.W)))
    val dcache_waddr  = Flipped(Valid(UInt(64.W)))
    val dcache_wdata  = Flipped(Valid(UInt(64.W)))
    val dcache_wmask  = Flipped(Valid(UInt(8.W)))
}

class DCACHE_MCIF extends Bundle {
    val ren    = Output(Bool())
    val raddr  = Output(UInt(64.W))
    val rdata  = Input(UInt(64.W))
    val wen    = Output(Bool())
    val waddr  = Output(UInt(64.W))
    val wdata  = Output(UInt(64.W))
    val wmask  = Output(UInt(8.W))
}

class DCACHE_MEM_Output extends Bundle{
    val dcache_rdata  = Output(UInt(64.W))
}

class DCACHE extends Module {
    val ex_dcache  = IO(new EXU_DCACHE)
    val dcache_mem = IO(new DCACHE_MEM_Output)

    val DPIC_pmem_read  = Module(new pmem_read())
    val DPIC_pmem_write = Module(new pmem_write())
    when (ex_dcache.dcache_raddr.valid) {
        DPIC_pmem_read.io.raddr := ex_dcache.dcache_raddr.bits
        dcache_mem.dcache_rdata        := DPIC_pmem_read.io.rdata
    }.elsewhen (ex_dcache.dcache_waddr.valid) {
        DPIC_pmem_write.io.waddr  := ex_dcache.dcache_waddr.bits
        DPIC_pmem_write.io.wdata  := ex_dcache.dcache_wdata.bits
        DPIC_pmem_write.io.wmask  := ex_dcache.dcache_wmask.bits
        dcache_mem.dcache_rdata        := 0.U
    }.otherwise {
        dcache_mem.dcache_rdata        := 0.U
    }
}

