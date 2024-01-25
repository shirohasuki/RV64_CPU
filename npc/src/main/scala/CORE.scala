/*************************************************************************
    > File Name: CORE.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:36
    > Description: 
*************************************************************************/

package CORE

import chisel3._
import chisel3.util._
import chisel3.stage._

import PcReg._
import IFU._
import ICACHE._
import IFID._
import IDU._
import IDEX._
import EXU.EXU._
import EXU.LSU._
import IDClint._
import CLINT._
import DCACHE._
import EXMEM._
import MEM._
import EXWB._
import MEMWB._
import WBU._
import MCIF._
import Bypass._
import CTRL._
import RegFile._
import CSRS._
import MCIF._
// import RAM._
import BUS._


// class CORE_AXI4_R extends Bundle{
//     // AR channel
//     val AXI_ARID    = Output(UInt(2.W))
//     val AXI_ARADDR  = Output(UInt(32.W))
//     val AXI_ARVALID = Output(Bool())
//     // Rd channel
//     val AXI_RID     = Input(UInt(2.W))
//     val AXI_RDATA   = Input(UInt(64.W))
//     val AXI_RVALID  = Input(Bool())
//     val AXI_RREADY  = Output(Bool())
//     val AXI_RLAST   = Input(Bool())
// }

// class CORE_AXI4_W extends Bundle {
//     val AXI_AWID    = Output(UInt(2.W))
//     val AXI_AWADDR  = Output(UInt(32.W))
//     val AXI_AWVALID = Output(Bool())
//     val AXI_WDATA   = Output(UInt(64.W))
//     val AXI_WSTRB   = Output(Vec(8, Bool()))
//     val AXI_WVALID  = Output(Bool())
//     val AXI_BRESP   = Input(UInt(1.W))
//     val AXI_BREADY  = Output(Bool())
// }


class CORE extends Module {
    val core_axi_r = IO(new AXI4_MASTER_RD)
    // val core_axi_w = IO(new CORE_AXI4_W)  // 两边需要同向
    
    val Pc      = Module(new PcReg)
    val IFU     = Module(new IFU)
    val ICACHE  = Module(new ICACHE)
    val IFID    = Module(new IFID)
    val IDU     = Module(new IDU)
    val IDEX    = Module(new IDEX)
    val EXU     = Module(new EXU)
    val IDClint = Module(new IDClint)
    val CLINT   = Module(new CLINT)
    val DCACHE  = Module(new DCACHE)
    val EXMEM   = Module(new EXMEM)
    val MEM     = Module(new MEM)
    val EXWB    = Module(new EXWB)
    val MEMWB   = Module(new MEMWB)
    val WBU     = Module(new WBU)
    val MCIF    = Module(new MCIF)
    val CTRL    = Module(new Ctrl)
    val Bypass  = Module(new Bypass)
    val RegFile = Module(new RegFile)
    val CSRS    = Module(new CSRS)
    // val RAM     = Module(new RAM)


    Pc.pc_if        <> IFU.pc_if
    IFU.if_icache     <> ICACHE.if_icache
    ICACHE.icache_ctrl <> CTRL.icache_ctrl
    
    IFU.if_ifid     <> IFID.if_ifid
    IFID.ifid_id    <> IDU.ifid_id
    
    IDU.id_bypass       <> Bypass.id_bypass_i
    EXU.ex_bypass       <> Bypass.ex_bypass_i 
    MEM.mem_bypass      <> Bypass.mem_bypass_i
    WBU.wb_bypass       <> Bypass.wb_bypass_i
    RegFile.reg_bypass  <> Bypass.reg_bypass_i
    CSRS.csr_bypass     <> Bypass.csr_bypass_i
    Bypass.bypass_reg_o   <> RegFile.bypass_reg
    Bypass.bypass_csr_o   <> CSRS.bypass_csr
    Bypass.bypass_id_o    <> IDU.bypass_id
    Bypass.bypass_ctrl_o  <> CTRL.bypass_ctrl

    IDU.id_idex           <> IDEX.id_idex
    IDEX.idex_ex          <> EXU.idex_ex
    IDU.id_idclint        <> IDClint.id_idclint
    IDClint.idclint_clint <> CLINT.idclint_clint
    EXU.ex_exmem          <> EXMEM.ex_exmem
    EXMEM.exmem_mem       <> MEM.exmem_mem
    EXU.ex_exwb           <> EXWB.ex_exwb
    EXWB.exwb_wb          <> WBU.exwb_wb
    MEM.mem_memwb         <> MEMWB.mem_memwb
    MEMWB.memwb_wb        <> WBU.memwb_wb

    EXU.ex_dcache       <> DCACHE.ex_dcache
    DCACHE.dcache_ctrl  <> CTRL.dcache_ctrl
    DCACHE.dcache_mem   <> MEM.dcache_mem   
    EXU.ls_mem_o        <> MEM.ls_mem_i   
    WBU.wb_reg          <> RegFile.wb_reg
    WBU.wb_csr          <> CSRS.wb_csr
    CLINT.clint_csr_o   <> CSRS.clint_csr_i
    CLINT.csr_clint_i   <> CSRS.csr_clint_o

    ICACHE.icache_mcif_r <> MCIF.icache_mcif_r
    DCACHE.dcache_mcif_r <> MCIF.dcache_mcif_r
    MCIF.mcif_axi_r <> core_axi_r
    // MCIF.mcif_axi_w <> core_axi_w
    
    EXU.ex_ctrl        <> CTRL.ex_ctrl
    CLINT.clint_ctrl   <> CTRL.clint_ctrl
    
    CTRL.ctrl_pc        <> Pc.ctrl_pc
    CTRL.ctrl_ifid      <> IFID.ctrl_ifid
    CTRL.ctrl_idex      <> IDEX.ctrl_idex
    CTRL.ctrl_idclint   <> IDClint.ctrl_idclint
    CTRL.ctrl_exmem     <> EXMEM.ctrl_exmem
    CTRL.ctrl_memwb     <> MEMWB.ctrl_memwb
    CTRL.ctrl_exwb      <> EXWB.ctrl_exwb  
}