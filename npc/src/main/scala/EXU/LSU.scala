/*************************************************************************
    > File Name: LSU.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:39:51
    > Description: 
*************************************************************************/

package EXU.LSU

import chisel3._
import chisel3.util._
import define.MACRO._
import define.function._

import DPIC.pmem_read
import DPIC.pmem_write

class ALU_LSU_Input extends Bundle {
    val func3           = Input(UInt(3.W))
    // val pc              = Input(UInt(64.W))
    val inst_isload     = Input(Bool())
    val inst_isstore    = Input(Bool())
    val rd_waddr        = Input(UInt(5.W))
    val dcache_ren      = Input(Bool())
    val dcache_raddr    = Input(UInt(64.W))
    val dcache_wen      = Input(Bool())
    val dcache_wmask    = Input(UInt(8.W))
    val dcache_wdata    = Input(UInt(64.W))
    val dcache_waddr    = Input(UInt(64.W))
}

class DCache_Rd_Req extends Bundle { val raddr = UInt(64.W) }
class DCache_Wr_Req extends Bundle { 
    val waddr = UInt(64.W) 
    val wdata = UInt(64.W) 
    val wmask = UInt(8.W) 
}
class LSU_DCACHE_Output extends Bundle{
    val rd_req  = Valid(new DCache_Rd_Req) 
    val wr_req  = Valid(new DCache_Wr_Req) 
}

class LSU_MEM_Output extends Bundle{
    val interface_rdata  = Valid(new Bundle { val rdata = UInt(64.W)}) 
}  // interface


class LSU extends Module {
    val al_ls       = IO(new ALU_LSU_Input)
    val ls_dcache   = IO(new LSU_DCACHE_Output)
    val ls_mem_o    = IO(new LSU_MEM_Output)
    

    val is_visit_interface = WireInit(0.U(1.W)) 
    when ((al_ls.dcache_ren & (al_ls.dcache_raddr > DEVICE_BASE)) | (al_ls.dcache_wen & (al_ls.dcache_waddr > DEVICE_BASE))) {
        is_visit_interface := 1.U
    }.otherwise {
        is_visit_interface := 0.U
    }

    // to interface 
    val DPIC_pmem_read  = Module(new pmem_read())
    val DPIC_pmem_write = Module(new pmem_write())
    // val rdata   = RegInit(0.U(64.W))
    // val ren     = RegInit(0.U(1.W)) // Reg 多暂存一拍
    // read
    // ren                                 := al_ls.dcache_ren & is_visit_interface
    // rdata                               := DPIC_pmem_read.io.rdata 
    ls_mem_o.interface_rdata.valid      := al_ls.dcache_ren & is_visit_interface
    ls_mem_o.interface_rdata.bits.rdata := DPIC_pmem_read.io.rdata 
    DPIC_pmem_read.io.raddr             := al_ls.dcache_raddr
    // write
    DPIC_pmem_write.io.wen      := al_ls.dcache_wen & is_visit_interface 
    DPIC_pmem_write.io.waddr    := al_ls.dcache_waddr 
    DPIC_pmem_write.io.wdata    := al_ls.dcache_wdata 
    DPIC_pmem_write.io.wmask    := al_ls.dcache_wmask 

    // to dcache
    ls_dcache.rd_req.valid      := al_ls.dcache_ren & ~is_visit_interface
    ls_dcache.rd_req.bits.raddr := al_ls.dcache_raddr

    ls_dcache.wr_req.valid      := al_ls.dcache_wen & ~is_visit_interface
    ls_dcache.wr_req.bits.waddr := al_ls.dcache_waddr
    ls_dcache.wr_req.bits.wdata := al_ls.dcache_wdata
    ls_dcache.wr_req.bits.wmask := al_ls.dcache_wmask
}
