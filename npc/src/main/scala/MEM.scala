/*************************************************************************
    > File Name: MEM.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:39:11
    > Description: 
*************************************************************************/

package MEM

import chisel3._
import chisel3.util._
import define.MACRO._
import define.function._


class EXMEM_MEM_Input extends Bundle {
    val pc          = Input(UInt(64.W))
    val mem_en      = Input(Bool())
    val func3       = Input(UInt(3.W))
    val rd_waddr  = Input(UInt(64.W))
    val rd_wen    = Input(Bool())
}

<<<<<<< HEAD
class DCACHE_MEM_Input extends Bundle {
    val dcache_rdata          = Input(UInt(64.W))
=======
class DCacheResp extends Bundle { 
    val rdata = UInt(64.W) 
}

class DCACHE_MEM_Input extends Bundle{
    val resp = Flipped(Valid(new DCacheResp))
>>>>>>> tracer-ysyx2204
}

class MEM_MEMWB_Output extends Bundle {
    val pc          = Output(UInt(64.W))
    val mem_en      = Output(Bool())
    val rd_wdata    = Output(UInt(64.W))
    val rd_waddr    = Output(UInt(64.W))
    val rd_wen      = Output(Bool())
}

class MEM_Rename_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class MEM extends Module {
    val exmem_mem  = IO(new EXMEM_MEM_Input)
    val dcache_mem = IO(new DCACHE_MEM_Input)
    val mem_memwb  = IO(new MEM_MEMWB_Output)
    val mem_rename  = IO(new MEM_Rename_Output)

    val rd_wdata        = WireInit(0.U(64.W))
    val dcache_rdata    = RegInit(0.U(64.W))
<<<<<<< HEAD
    dcache_rdata := dcache_mem.dcache_rdata
=======
    dcache_rdata := dcache_mem.resp.bits.rdata
>>>>>>> tracer-ysyx2204
    rd_wdata    :=  MuxCase(0.U, Seq(
        (exmem_mem.func3 === INST_LB )  ->  SEXT(dcache_rdata(7, 0)),
        (exmem_mem.func3 === INST_LH )  ->  SEXT(dcache_rdata(15, 0)),
        (exmem_mem.func3 === INST_LW )  ->  SEXT(dcache_rdata(31, 0)),
        (exmem_mem.func3 === INST_LD )  ->  SEXT(dcache_rdata),
        (exmem_mem.func3 === INST_LBU)  ->  ZEXT(dcache_rdata(7, 0)),
        (exmem_mem.func3 === INST_LHU)  ->  ZEXT(dcache_rdata(15, 0)),
        (exmem_mem.func3 === INST_LWU)  ->  ZEXT(dcache_rdata(31, 0))
    ))// load


    // to mem_memwb
    mem_memwb.pc            := Mux(exmem_mem.mem_en, exmem_mem.pc, 0.U)
    mem_memwb.mem_en        := exmem_mem.mem_en
    mem_memwb.rd_wdata      := Mux(exmem_mem.mem_en, rd_wdata,           0.U)
    mem_memwb.rd_waddr      := Mux(exmem_mem.mem_en, exmem_mem.rd_waddr, 0.U)       
    mem_memwb.rd_wen        := Mux(exmem_mem.mem_en, exmem_mem.mem_en,   0.U)
    // to rename
    mem_rename.rd_wdata      := rd_wdata
    mem_rename.rd_waddr      := mem_memwb.rd_waddr   
    mem_rename.rd_wen        := mem_memwb.mem_en
}
