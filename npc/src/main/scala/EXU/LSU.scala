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

class ALU_LSU_Input extends Bundle {
    val func3           = Input(UInt(3.W))
    // val pc              = Input(UInt(64.W))
    val inst_isload     = Input(Bool())
    val inst_isstore    = Input(Bool())
    val rd_waddr        = Input(UInt(5.W))
    val dcache_ren         = Input(Bool())
    val dcache_raddr       = Input(UInt(64.W))
    val dcache_wen         = Input(Bool())
    val dcache_wmask       = Input(UInt(8.W))
    val dcache_wdata       = Input(UInt(64.W))
    val dcache_waddr       = Input(UInt(64.W))
}

<<<<<<< HEAD
// class LSU_EXU_Output extends Bundle {
//     val func3           = Input(UInt(3.W))
//     val rd_wen          = Output(Bool()) 
//     val rd_waddr        = Output(UInt(5.W))
//     val rd_wdata        = Output(UInt(64.W))
// }


class LSU_DCACHE_Output extends Bundle{
    val dcache_raddr  = Valid(UInt(64.W))
    val dcache_waddr  = Valid(UInt(64.W))
    val dcache_wdata  = Valid(UInt(64.W))
    val dcache_wmask  = Valid(UInt(8.W))
}


class LSU extends Module {
    val al_ls       = IO(new ALU_LSU_Input())
    // val ls_ex       = IO(new LSU_EXU_Output())
    
    val ls_dcache   = IO(new LSU_DCACHE_Output())


    
    // to dcache
    ls_dcache.dcache_raddr.valid    := al_ls.dcache_ren
    ls_dcache.dcache_raddr.bits     := al_ls.dcache_raddr

    ls_dcache.dcache_waddr.valid    := al_ls.dcache_wen
    ls_dcache.dcache_wdata.valid    := al_ls.dcache_wen
    ls_dcache.dcache_wmask.valid    := al_ls.dcache_wen
    ls_dcache.dcache_waddr.bits     := al_ls.dcache_waddr
    ls_dcache.dcache_wdata.bits     := al_ls.dcache_wdata
    ls_dcache.dcache_wmask.bits     := al_ls.dcache_wmask
=======

class DCache_Rd_Req extends Bundle { 
    val raddr = UInt(64.W) 
}

class DCache_Wr_Req extends Bundle { 
    val waddr = UInt(64.W) 
    val wdata = UInt(64.W) 
    val wmask = UInt(8.W) 
}

class LSU_DCACHE_Output extends Bundle{
    val rd_req  = Valid(new DCache_Rd_Req) 
    val wr_req  = Valid(new DCache_Wr_Req) 
}

class LSU extends Module {
    val al_ls       = IO(new ALU_LSU_Input())
    
    val ls_dcache   = IO(new LSU_DCACHE_Output())
    
    // to dcache
    ls_dcache.rd_req.valid      := al_ls.dcache_ren
    ls_dcache.rd_req.bits.raddr := al_ls.dcache_raddr

    ls_dcache.wr_req.valid      := al_ls.dcache_wen
    ls_dcache.wr_req.bits.waddr := al_ls.dcache_waddr
    ls_dcache.wr_req.bits.wdata := al_ls.dcache_wdata
    ls_dcache.wr_req.bits.wmask := al_ls.dcache_wmask
>>>>>>> tracer-ysyx2204
}
