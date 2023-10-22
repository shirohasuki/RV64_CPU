package tb

import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFile
import firrtl.annotations.MemoryLoadFileType

import PcReg._
import IFU._
import IDU._
import EXU._
import ROM._
import RegFile._


class tb extends Module {
    // val io = IO(new Bundle {
        
    // })

    val Pc      = Module(new PcReg())
    val IFU     = Module(new IFU())
    val IDU     = Module(new IDU())
    val EXU     = Module(new EXU())
    val RegFile = Module(new RegFile())
    val ROM     = Module(new ROM())

    Pc.pc_if   <> IFU.pc_if
    IFU.if_rom <> ROM.if_rom
    IFU.if_id  <> IDU.if_id
    IDU.id_reg <> RegFile.id_reg
    IDU.id_ex  <> EXU.id_ex
    EXU.ex_reg <> RegFile.ex_reg

    loadMemoryFromFile(ROM.mem, "./src/main/scala/inst_data_ADD.txt", MemoryLoadFileType.Bin)

}

object tb extends App {
    (new ChiselStage).emitVerilog(new tb, args)
}
