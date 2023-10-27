package tb

import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFile
import firrtl.annotations.MemoryLoadFileType

import PcReg._
import IFU._
import IFID._
import IDU._
import IDEX._
import EXU._
import EXMEM._
import MEM._
import MEMWB._
import WBU._
import Redirect._
import CTRL._
import ROM._
import RegFile._


class tb extends Module {
    val Pc       = Module(new PcReg())
    val IFU      = Module(new IFU())
    val IFID     = Module(new IFID())
    val IDU      = Module(new IDU())
    val IDEX     = Module(new IDEX())
    val EXU      = Module(new EXU())
    val EXMEM    = Module(new EXMEM())
    val MEM      = Module(new MEM())
    val MEMWB    = Module(new MEMWB())
    val WBU      = Module(new WBU())
    val CTRL     = Module(new Ctrl())
    val Redirect = Module(new Redirect())
    val RegFile  = Module(new RegFile())
    val ROM      = Module(new ROM())

    Pc.pc_if        <> IFU.pc_if
    IFU.if_rom      <> ROM.if_rom
    
    IFU.if_ifid     <> IFID.if_ifid
    IFID.ifid_id    <> IDU.ifid_id
    
    IDU.id_redirect         <> Redirect.id_redirect 
    EXU.ex_redirect         <> Redirect.ex_redirect 
    MEM.mem_redirect        <> Redirect.mem_redirect
    WBU.wb_redirect         <> Redirect.wb_redirect 
    RegFile.reg_redirect    <> Redirect.reg_redirect
    Redirect.redirect_reg   <> RegFile.redirect_reg
    Redirect.redirect_id    <> IDU.redirect_id
    Redirect.redirect_ctrl  <> CTRL.redirect_ctrl

    IDU.id_idex     <> IDEX.id_idex
    IDEX.idex_ex    <> EXU.idex_ex
    
    EXU.ex_exmem    <> EXMEM.ex_exmem
    EXMEM.exmem_mem <> MEM.exmem_mem
    
    MEM.mem_memwb   <> MEMWB.mem_memwb
    MEMWB.memwb_wb  <> WBU.memwb_wb
    WBU.wb_reg      <> RegFile.wb_reg
    
    EXU.ex_ctrl     <> CTRL.ex_ctrl
    MEM.mem_ctrl    <> CTRL.mem_ctrl
    
    CTRL.ctrl_pc    <> Pc.ctrl_pc
    CTRL.ctrl_ifid  <> IFID.ctrl_ifid
    CTRL.ctrl_idex  <> IDEX.ctrl_idex        
    CTRL.ctrl_exmem <> EXMEM.ctrl_exmem  
    CTRL.ctrl_memwb <> MEMWB.ctrl_memwb  


    loadMemoryFromFileInline(ROM.mem, "./src/main/scala/inst_data_ADD.txt", MemoryLoadFile.Binary);
}

object tb extends App {
    (new ChiselStage).emitVerilog(new tb, args)
}

