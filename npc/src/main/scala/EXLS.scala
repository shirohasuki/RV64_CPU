// package EXMEM

// import chisel3._
// import define.function._
// import define.MACRO._

// class Ctrl_Input extends Bundle {
//     val exmem_flush_en  = Input(Bool())
//     val exmem_stall_en  = Input(Bool())
// }

// class EXLS_Input extends Bundle {
//     // mem use
//     val inst            = Input(UInt(32.W))
//     val pc              = Input(UInt(64.W))
//     val ren             = Input(Bool())
//     val raddr           = Input(UInt(64.W))
//     val wen             = Input(Bool())
//     val waddr           = Input(UInt(64.W))
//     val wdata           = Input(UInt(64.W))
//     val wmask           = Input(UInt(8.W))
//     val ex_inst_isload  = Input(Bool())
//     val ex_inst_isstore = Input(Bool())

//     // wb use
//     val rd_wdata  = Input(UInt(64.W))
//     val rd_waddr  = Input(UInt(64.W))
//     val rd_wen    = Input(Bool())
// }

// class EXLS extends Module {  
//     val ex_exls   = IO(new EXMEM_Input())
//     val exls_ls  = IO(Flipped(new EXMEM_Input()))
//     val ctrl_exmem = IO(new Ctrl_Input())

//     exls_ls.inst            := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 32.U, INST_NOP,  ex_exls.inst           )
//     exls_ls.pc              := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exls.pc             )
//     exls_ls.ren             := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  0.U(64.W), ex_exls.ren            )
//     exls_ls.raddr           := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exls.raddr          )
//     exls_ls.wen             := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exls.wen            )
//     exls_ls.waddr           := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exls.waddr          )
//     exls_ls.wdata           := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exls.wdata          )
//     exls_ls.wmask           := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 8.U,  0.U(8.W),  ex_exls.wmask          )
//     exls_ls.ex_inst_isload  := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exls.ex_inst_isload )
//     exls_ls.ex_inst_isstore := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exls.ex_inst_isstore)
//     exls_ls.rd_wdata        := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exls.rd_wdata       )
//     exls_ls.rd_waddr        := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exls.rd_waddr       )
//     exls_ls.rd_wen          := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exls.rd_wen         )
// }

