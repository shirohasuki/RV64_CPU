import chisel3._
import chisel3.util._
import chisel3.stage._

import chisel3.util.experimental.loadMemoryFromFileInline
import firrtl.annotations.MemoryLoadFileType

import CORE._
import AXI4_LITE._
import MEM._


class tb extends Module {
    val CORE        = Module(new CORE())
    val AXI4_LITE   = Module(new AXI4_LITE())
    val MEM         = Module(new MEM())
    
    CORE.core_axi_r <> AXI4_LITE.mcif_axi_r
    CORE.core_axi_w <> AXI4_LITE.mcif_axi_w

    AXI4_LITE.mcif_axi_r <> MEM.mem_axi_r
    AXI4_LITE.mcif_axi_w <> MEM.mem_axi_w

    loadMemoryFromFileInline(MEM.mem, "./image.hex", MemoryLoadFileType.Hex); 
    // loadMemoryFromFile只会在chiseltest的时候生成readmemb
}

object tb extends App {
    (new ChiselStage).emitVerilog(new tb, args)
}


