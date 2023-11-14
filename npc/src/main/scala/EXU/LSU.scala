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
    val mem_ren         = Input(Bool())
    val mem_raddr       = Input(UInt(64.W))
    val mem_wen         = Input(Bool())
    val mem_wmask       = Input(Vec(8, Bool()))
    val mem_wdata       = Input(UInt(64.W))
    val mem_waddr       = Input(UInt(64.W))
}

class LSU_EXU_Output extends Bundle {
    val func3           = Input(UInt(3.W))
    val rd_wen          = Output(Bool()) 
    val rd_waddr        = Output(UInt(5.W))
    val rd_wdata        = Output(UInt(64.W))
}

class LSU_Rename_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class LSU_DCACHE extends Bundle{
    val dcache_raddr  = Valid(UInt(64.W))
    val dcache_waddr  = Valid(UInt(64.W))
    val dcache_wdata  = Valid(UInt(64.W))
    val dcache_wmask  = Valid(UInt(8.W))
}


class LSU extends Module {
    val al_ls       = IO(new ALU_LSU_Input())
    val ls_rename   = IO(new LSU_Rename_Output())
    val ls_ex       = IO(new LSU_EXU_Output())
    
    val ls_dcache   = IO(new LSU_DCACHE())

    // to ex
    // ls_ex.pc := al_ls.pc 
    // ls_ex.rd_wdata := MuxCase(0.U, Seq(
    //     (al_ls.func3 === INST_LB )  ->  SEXT(rd_wdata(7, 0)),
    //     (al_ls.func3 === INST_LH )  ->  SEXT(rd_wdata(15, 0)),
    //     (al_ls.func3 === INST_LW )  ->  SEXT(rd_wdata(31, 0)),
    //     (al_ls.func3 === INST_LD )  ->  SEXT(rd_wdata),
    //     (al_ls.func3 === INST_LBU)  ->  ZEXT(rd_wdata(7, 0)),
    //     (al_ls.func3 === INST_LHU)  ->  ZEXT(rd_wdata(15, 0)),
    //     (al_ls.func3 === INST_LWU)  ->  ZEXT(rd_wdata(31, 0))
    // ))// load
    // ls_ex.rd_waddr := al_ls.rd_waddr   
    // ls_ex.rd_wen   := al_ls.inst_isload

    // to rename
    ls_rename.rd_wdata := ls_ex.rd_wdata
    ls_rename.rd_waddr := ls_ex.rd_waddr   
    ls_rename.rd_wen   := ls_ex.rd_wen  
    
    // to dcache
    ls_dcache.dcache_raddr.valid := al_ls.mem_ren
    ls_dcache.dcache_raddr.bit   := al_ls.mem_raddr

    ls_dcache.dcache_waddr.valid := al_ls.dcache_wen
    ls_dcache.dcache_wdata.valid := al_ls.dcache_wen
    ls_dcache.dcache_wmask.valid := al_ls.dcache_wen
    ls_dcache.dcache_waddr.bit   := al_ls.mem_waddr
    ls_dcache.dcache_wdata.bit   := al_ls.mem_wdata
    ls_dcache.dcache_wmask.bit   := al_ls.mem_wmask
}
