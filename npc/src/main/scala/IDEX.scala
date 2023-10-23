package IDEX

import chisel3._


def dff_set(flush_flag_i: UInt, stall_flag_i: UInt, DataWidth: UInt, default: UInt, data_i: UInt): UInt = {
    val data_o = RegInit(default.UInt(width = DataWidth.getWidth))
    data_o := Mux(flush_flag_i === 1.U, default, 
                  Mux(stall_flag_i === 1.U, data_o, data_i))
    data_o
}

class IDEX_Input extends Bundle {
    val inst        = Output(UInt(32.W))
    val pc          = Output(UInt(64.W))
    val op1         = Output(UInt(64.W))
    val op2         = Output(UInt(64.W))
    val rd_addr     = Output(UInt(5.W))
    val rd_wen      = Output(Bool())
    val base_addr   = Output(UInt(64.W))
    val offset_addr = Output(UInt(64.W))
}

class IFU extends Module {  
    val id_idex = IO(new IDEX_Input())
    val idex_ex = IO(new Flipped(new IDEX_Input()))

    idex_ex.inst        := dff_set(0.U, 0.U, 6.U,  "h00000013".U, id_idex.inst       )
    idex_ex.pc          := dff_set(0.U, 0.U, 5.U,  0.U,           id_idex.pc         )
    idex_ex.op1         := dff_set(0.U, 0.U, 64.U, 0.U,           id_idex.op1        )
    idex_ex.op2         := dff_set(0.U, 0.U, 64.U, 0.U,           id_idex.op2        )
    idex_ex.rd_addr     := dff_set(0.U, 0.U, 5.U,  0.U,           id_idex.rd_addr    )
    idex_ex.rd_wen      := dff_set(0.U, 0.U, 1.U,  0.U,           id_idex.rd_wen     )
    idex_ex.base_addr   := dff_set(0.U, 0.U, 64.U, 0.U,           id_idex.base_addr  )
    idex_ex.offset_addr := dff_set(0.U, 0.U, 64.U, 0.U,           id_idex.offset_addr)

}
