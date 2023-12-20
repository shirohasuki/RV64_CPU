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
    val func3       = Input(UInt(3.W))
    val rd_waddr  = Input(UInt(64.W))
    val rd_wen    = Input(Bool())
}

class DCacheResp extends Bundle { 
    val rdata     = UInt(64.W)
    // val offsetbit = UInt(3.W)
}

class DCACHE_MEM_Input extends Bundle{
    val resp = Flipped(Valid(new DCacheResp))
}

class MEM_MEMWB_Output extends Bundle {
    val pc          = Output(UInt(64.W))
    val rd_wdata    = Output(UInt(64.W))
    val rd_waddr    = Output(UInt(64.W))
    val rd_wen      = Output(Bool())
}

class MEM_Rename_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class LSU_MEM_Input extends Bundle{
    val interface_rdata  = Flipped(Valid(new Bundle { val rdata = UInt(64.W)}))
}  // interface

class MEM extends Module {
    val exmem_mem  = IO(Flipped(Valid(new EXMEM_MEM_Input)))
    val dcache_mem = IO(new DCACHE_MEM_Input)
    val mem_memwb  = IO(Valid(new MEM_MEMWB_Output))
    val mem_bypass = IO(new MEM_Rename_Output)
    
    val ls_mem_i     = IO(new LSU_MEM_Input) // interface visit


    val rd_wdata        = WireInit(0.U(64.W))
    val dcache_rdata    = RegInit(0.U(64.W))

    dcache_rdata := dcache_mem.resp.bits.rdata | (ls_mem_i.interface_rdata.valid & ls_mem_i.interface_rdata.bits.rdata)
    rd_wdata     :=  MuxCase(0.U, Seq(  
        (exmem_mem.bits.func3 === INST_LB )  ->  SEXT(dcache_rdata(7, 0)),
        (exmem_mem.bits.func3 === INST_LH )  ->  SEXT(dcache_rdata(15, 0)),
        (exmem_mem.bits.func3 === INST_LW )  ->  SEXT(dcache_rdata(31, 0)),
        (exmem_mem.bits.func3 === INST_LD )  ->  SEXT(dcache_rdata),
        (exmem_mem.bits.func3 === INST_LBU)  ->  ZEXT(dcache_rdata(7, 0)),
        (exmem_mem.bits.func3 === INST_LHU)  ->  ZEXT(dcache_rdata(15, 0)),
        (exmem_mem.bits.func3 === INST_LWU)  ->  ZEXT(dcache_rdata(31, 0))
    )) // load

    // to mem_memwb
    mem_memwb.valid              := exmem_mem.valid | ls_mem_i.interface_rdata.valid
    mem_memwb.bits.pc            := Mux(mem_memwb.valid, exmem_mem.bits.pc, 0.U)
    mem_memwb.bits.rd_wdata      := Mux(mem_memwb.valid, rd_wdata,          0.U)
    mem_memwb.bits.rd_waddr      := Mux(mem_memwb.valid, exmem_mem.bits.rd_waddr, 0.U)       
    mem_memwb.bits.rd_wen        := Mux(mem_memwb.valid, exmem_mem.valid,   0.U)
    // to bypass
    mem_bypass.rd_wdata      := rd_wdata
    mem_bypass.rd_waddr      := mem_memwb.bits.rd_waddr   
    mem_bypass.rd_wen        := mem_memwb.valid  // 只要是load指令，就会写寄存器
}
