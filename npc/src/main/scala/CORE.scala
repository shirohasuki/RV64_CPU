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


// import PcReg._
import IFU._
import ICACHE._
import IFID._
import IDU._
import IDEX._
import EXU.EXU._
import EXU.LSU._
import DCACHE._
import EXMEM._
import MEM._
import EXWB._
import MEMWB._
import WBU._
import MCIF._
import Rename._
import CTRL._
import RegFile._


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
    // val core_axi_r = IO(new CORE_AXI4_R())
    // val core_axi_w = IO(new CORE_AXI4_W())  // 两边需要同向
    
    val Pc       = Module(new PcReg())
    val IFU      = Module(new IFU())
    val ICACHE   = Module(new ICACHE())
    val IFID     = Module(new IFID())
    val IDU      = Module(new IDU())
    val IDEX     = Module(new IDEX())
    val EXU      = Module(new EXU())
    val DCACHE   = Module(new DCACHE())
    val EXMEM    = Module(new EXMEM())
    val MEM      = Module(new MEM())
    val EXWB     = Module(new EXWB())
    val MEMWB    = Module(new MEMWB())
    val WBU      = Module(new WBU())
    // val MCIF     = Module(new MCIF())
    val CTRL     = Module(new Ctrl())
    val Rename = Module(new Rename())
    val RegFile  = Module(new RegFile())

    Pc.pc_if        <> IFU.pc_if
    IFU.if_icache     <> MCIF.if_icache
    
    IFU.if_ifid     <> IFID.if_ifid
    IFID.ifid_id    <> IDU.ifid_id
    
    IDU.id_rename       <> Rename.id_rename 
    EXU.ex_rename       <> Rename.ex_rename 
    MEM.ls_rename       <> Rename.mem_rename
    WBU.wb_rename       <> Rename.wb_rename 
    RegFile.reg_rename  <> Rename.reg_rename
    Rename.rename_reg   <> RegFile.rename_reg
    Rename.rename_id    <> IDU.rename_id
    Rename.rename_ctrl  <> CTRL.rename_ctrl

    IDU.id_idex     <> IDEX.id_idex
    IDEX.idex_ex    <> EXU.idex_ex
    
    EXU.ex_exwb     <> EXWB.ex_exwb
    EXU.ex_dcache   <> DCACHE.ex_dcache
    EXWB.exwb_wb    <> WBU.exwb_wb
    WBU.wb_reg      <> RegFile.wb_reg

    // MCIF.mcif_axi_r <> core_axi_r
    // MCIF.mcif_axi_w <> core_axi_w
    
    EXU.ex_ctrl     <> CTRL.ex_ctrl
    // LSU.ls_ctrl     <> CTRL.ls_ctrl
    // MCIF.mcif_ctrl  <> CTRL.mcif_ctrl
    
    CTRL.ctrl_pc    <> IFU.ctrl_pc
    CTRL.ctrl_ifid  <> IFID.ctrl_ifid
    CTRL.ctrl_idex  <> IDEX.ctrl_idex        
    CTRL.ctrl_exwb  <> EXWB.ctrl_exwb  
}