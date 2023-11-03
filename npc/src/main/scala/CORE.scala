package CORE

import chisel3._
import chisel3.util._
import chisel3.stage._


import PcReg._
import IFU._
import IFID._
import IDU._
import IDEX._
import EXU.EXU._
import EXU.LSU._
import EXWB._
import WBU._
import MCIF._
import Redirect._
import CTRL._
import RegFile._


class MCIF_AXI4_R extends Bundle{
    // AR channel
    val AXI_ARID    = Output(UInt(2.W))
    val AXI_ARADDR  = Output(UInt(32.W))
    val AXI_ARVALID = Output(Bool())
    // Rd channel
    val AXI_RID     = Input(UInt(2.W))
    val AXI_RDATA   = Input(UInt(64.W))
    val AXI_RVALID  = Input(Bool())
    val AXI_RREADY  = Output(Bool())
    val AXI_RLAST   = Output(Bool())
}

class MCIF_AXI4_W extends Bundle {
    val AXI_AWID    = Output(UInt(2.W))
    val AXI_AWADDR  = Output(UInt(32.W))
    val AXI_AWVALID = Output(Bool())

    val AXI_WDATA   = Output(UInt(64.W))
    val AXI_WSTRB   = Output(Vec(8, Bool()))
    val AXI_WVALID  = Output(Bool())
    
    val AXI_BRESP   = Input(UInt(2.W))
    val AXI_BREADY  = Output(Bool())
}

class CORE extends Module {
    val core_axi = IO(new Bundle{
        val axi_r = new MCIF_AXI4_R()
        val axi_w = new MCIF_AXI4_W()
    })

    val Pc       = Module(new PcReg())
    val IFU      = Module(new IFU())
    val IFID     = Module(new IFID())
    val IDU      = Module(new IDU())
    val IDEX     = Module(new IDEX())
    val EXU      = Module(new EXU())
    val LSU      = Module(new LSU())
    val EXWB     = Module(new EXWB())
    val WBU      = Module(new WBU())
    val MCIF     = Module(new MCIF())
    val CTRL     = Module(new Ctrl())
    val Redirect = Module(new Redirect())
    val RegFile  = Module(new RegFile())

    Pc.pc_if        <> IFU.pc_if
    IFU.if_mcif     <> MCIF.if_mcif
    
    IFU.if_ifid     <> IFID.if_ifid
    IFID.ifid_id    <> IDU.ifid_id
    
    IDU.id_redirect         <> Redirect.id_redirect 
    EXU.ex_redirect         <> Redirect.ex_redirect 
    // LSU.ls_redirect         <> Redirect.ls_redirect
    WBU.wb_redirect         <> Redirect.wb_redirect 
    RegFile.reg_redirect    <> Redirect.reg_redirect
    Redirect.redirect_reg   <> RegFile.redirect_reg
    Redirect.redirect_id    <> IDU.redirect_id
    Redirect.redirect_ctrl  <> CTRL.redirect_ctrl

    IDU.id_idex     <> IDEX.id_idex
    IDEX.idex_ex    <> EXU.idex_ex
    
    EXU.ex_exwb     <> EXWB.ex_exwb
    LSU.ls_mcif     <> MCIF.ls_mcif
    EXWB.exwb_wb    <> WBU.exwb_wb
    WBU.wb_reg      <> RegFile.wb_reg

    MCIF.mcif_axi_r <> core_axi.axi_r
    MCIF.mcif_axi_w <> core_axi.axi_w
    
    EXU.ex_ctrl     <> CTRL.ex_ctrl
    // LSU.ls_ctrl     <> CTRL.ls_ctrl
    MCIF.mcif_ctrl  <> CTRL.mcif_ctrl
    
    CTRL.ctrl_pc    <> Pc.ctrl_pc
    CTRL.ctrl_ifid  <> IFID.ctrl_ifid
    CTRL.ctrl_idex  <> IDEX.ctrl_idex        
    CTRL.ctrl_exwb  <> EXWB.ctrl_exwb  
}