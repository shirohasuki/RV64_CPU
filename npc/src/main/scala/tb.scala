/*************************************************************************
    > File Name: tb.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:41:32
    > Description: 
*************************************************************************/

import chisel3._
import chisel3.util._
import chisel3.stage._

import chisel3.util.experimental.loadMemoryFromFileInline
import firrtl.annotations.MemoryLoadFileType

import CORE._
import BUS._
import RAM._


class tb extends Module {
    val CORE        = Module(new CORE)
    val AXI4_FULL   = Module(new AXI4_FULL)
    val RAM         = Module(new RAM)
    
    CORE.core_axi_r <> AXI4_FULL.mcif_axi_r
    // CORE.core_axi_w <> AXI4_LITE.mcif_axi_w

    AXI4_FULL.ram_axi_r <> RAM.ram_axi_r
    // AXI4_LITE.mem_axi_w <> MEM.mem_axi_w

    // loadMemoryFromFileInline(MEM.mem, "./image.hex", MemoryLoadFileType.Hex); 
    // loadMemoryFromFile只会在chiseltest的时候生成readmemb
}

object tb extends App {
    (new ChiselStage).emitVerilog(new tb, args)
}


