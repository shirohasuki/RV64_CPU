package tb

import chisel3._
import chisel3.util._
import chisel3.stage._

import PcReg._
import IFU._
import IDU._
import EXU._
import ROM._
import RegFile._


class tb extends Module {
    val io = IO(new Bundle {
        
    })

    val Pc      = Module(new PcReg())
    val IFU     = Module(new IFU())
    val IDU     = Module(new IDU())
    val EXU     = Module(new EXU())
    val RegFile = Module(new RegFile())
    val ROM     = Module(new ROM())

    Pc.pc_if  <> IFU.pc_if
    IFU.io <> ROM.io
    IFU.io <> IDU.io
    IDU.io <> RegFile.io
    IDU.io <> EXU.io
    EXU.io <> RegFile.io
}

object tb extends App {
    (new ChiselStage).emitVerilog(new tb, args)
}
