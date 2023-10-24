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
import CTRL._
import ROM._
import RegFile._


class tb extends Module {
    // val io = IO(new Vec {

    // })

    val Pc      = Module(new PcReg())
    val IFU     = Module(new IFU())
    val IFID    = Module(new IFID())
    val IDU     = Module(new IDU())
    val IDEX    = Module(new IDEX())
    val EXU     = Module(new EXU())
    val CTRL    = Module(new Ctrl())
    val RegFile = Module(new RegFile())
    val ROM     = Module(new ROM())

    Pc.pc_if       <> IFU.pc_if
    IFU.if_rom     <> ROM.if_rom
    IFU.if_ifid    <> IFID.if_ifid
    IFID.ifid_id   <> IDU.ifid_id
    IDU.id_reg     <> RegFile.id_reg
    RegFile.reg_id <> IDU.reg_id
    IDU.id_idex    <> IDEX.id_idex
    IDEX.idex_ex   <> EXU.idex_ex
    CTRL.io.ctrl_ifid <> IFID.io.ctrl_ifid
    CTRL.io.ctrl_idex <> IDEX.io.ctrl_idex
    EXU.ex_reg     <> RegFile.ex_reg

    loadMemoryFromFile(ROM.mem, "./src/main/scala/inst_data_ADD.txt", MemoryLoadFileType.Binary);
}

object tb extends App {
    (new ChiselStage).emitVerilog(new tb, args)
}
