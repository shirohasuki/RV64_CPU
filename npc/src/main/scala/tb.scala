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
    // val io = IO(new Bundle {
    //     val pc_test = Input(UInt(64.W))
    // })

    val pc_test = Wire(UInt(64.W))

    val Pc      = Module(new PcReg())
    val IFU     = Module(new IFU())
    val IFID    = Module(new IFID())
    val IDU     = Module(new IDU())
    val IDEX    = Module(new IDEX())
    val EXU     = Module(new EXU())
    val CTRL    = Module(new Ctrl())
    val RegFile = Module(new RegFile())
    val ROM     = Module(new ROM())

    pc_test := Pc.io.pc_tb.pc 
    Pc.io.pc_if       <> IFU.io.pc_if
    IFU.io.if_rom     <> ROM.io.if_rom
    IFU.io.if_ifid    <> IFID.io.if_ifid
    IFID.io.ifid_id   <> IDU.io.ifid_id
    IDU.io.id_reg     <> RegFile.io.id_reg
    RegFile.io.reg_id <> IDU.io.reg_id
    IDU.io.id_idex    <> IDEX.io.id_idex
    IDEX.io.idex_ex   <> EXU.io.idex_ex
    CTRL.io.ctrl_ifid <> IFID.io.ctrl_ifid
    CTRL.io.ctrl_idex <> IDEX.io.ctrl_idex
    EXU.io.ex_reg     <> RegFile.io.ex_reg

    // loadMemoryFromFile(ROM.mem, "./src/main/scala/inst_data_ADD.txt", MemoryLoadFileType.Binary);
}

object toVerilog extends App {
    (new ChiselStage).emitVerilog(new tb(), args)
    // println(getVerilogString(new tb()))
}
