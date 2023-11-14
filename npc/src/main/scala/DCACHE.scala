/*************************************************************************
    > File Name: DCACHE.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:08:32
    > Description: 
*************************************************************************/


package DCACHE

import chisel3._

import DPIC.pmem_read
import DPIC.pmem_write


class EXU_DCACHE extends Bundle{
    val raddr  = Flipped(Valid(UInt(64.W)))
    val waddr  = Flipped(Valid(UInt(64.W)))
    val wdata  = Flipped(Valid(UInt(64.W)))
    val wmask  = Flipped(Valid(UInt(8.W)))
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
    val rdata  = Output(UInt(64.W))
    // val rlast  = Output(Bool())
    // val wlast  = Output(Bool())
}

class DCACHE extends Module {
    val ex_dcache  = IO(new EXU_DCACHE)
    val dcache_mem = IO(new DCACHE_MEM_Output)

    val pmem_read  = Module(new pmem_read())
    val pmem_write = Module(new pmem_write())
    when (ex_dcache.raddr.valid) {
        pmem_read(ex_dcache.raddr.bit, ex_dcache.rdata);
    } elsewhen (ex_dcache.waddr.valid) {
        pmem_write(ex_dcache.waddr.bit, ex_dcache.wdata.bit, ex_dcache.wmask.bit);
    }
}

