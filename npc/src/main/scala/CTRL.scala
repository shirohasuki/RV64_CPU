package CTRL

import chisel3._
import chisel3.util._

class EXU_CTRL_Input extends Bundle {
    val ex_inst_isload  = Input(Bool())
    val ex_inst_isstore = Input(Bool())
    val typej_jump_en   = Input(Bool())
    val typej_jump_addr = Input(UInt(64.W))
}

class CLINT_CTRL_Input extends Bundle {
    val intr_jump_en   = Input(Bool())
    val intr_jump_addr = Input(UInt(64.W))
}

class MEM_CTRL_Input extends Bundle {
    val mem_inst_isload  = Input(Bool())
    val mem_inst_isstore = Input(Bool())
}

class Bypass_CTRL_Input extends Bundle {
    val rs_id_ex_hit     = Input(Bool())
}

class CTRL_PC_Output extends Bundle {
    val pc_stall_en = Output(Bool())
    val pc_flush_en = Output(Bool())
    val jump_en     = Output(Bool())
    val jump_addr   = Output(UInt(64.W))
}

class CTRL_IFID_Output extends Bundle {
    val ifid_stall_en = Output(Bool())
    val ifid_flush_en = Output(Bool())
}

class CTRL_IDEX_Output extends Bundle {
    val idex_stall_en = Output(Bool())
    val idex_flush_en = Output(Bool())
}

class CTRL_IDClint_Output extends Bundle {
    val idclint_stall_en = Output(Bool())
    val idclint_flush_en = Output(Bool())
}

class CTRL_EXMEM_Output extends Bundle {
    val ex_mem_stall_en = Output(Bool())
    val ex_mem_flush_en = Output(Bool())
}

class CTRL_MEMWB_Output extends Bundle {
    val mem_wb_stall_en = Output(Bool())
    val mem_wb_flush_en = Output(Bool())
}


class Ctrl extends Module {
    val io = IO(new Bundle {
        // val ex_ctrl      = IO(new EXU_CTRL_Input()     )
        // val clint_ctrl   = IO(new CLINT_CTRL_Input()   )
        // val mem_ctrl     = IO(new MEM_CTRL_Input()     )
        // val bypass_ctrl  = IO(new Bypass_CTRL_Input()  )

        // val ctrl_pc      = IO(new CTRL_PC_Output()     )
        val ctrl_ifid    = (new CTRL_IFID_Output()   )
        val ctrl_idex    = (new CTRL_IDEX_Output()   )
        // val ctrl_idclint = IO(new CTRL_IDClint_Output())
        // val ctrl_exmem   = IO(new CTRL_EXMEM_Output()  )
        // val ctrl_memwb   = IO(new CTRL_MEMWB_Output()  )
    })

    io.ctrl_ifid.ifid_stall_en := false.B
    io.ctrl_ifid.ifid_flush_en := false.B

    io.ctrl_idex.idex_stall_en := false.B
    io.ctrl_idex.idex_flush_en := false.B

    // val jump          = io.ex_ctrl.typej_jump_en || io.ex_ctrl.intr_jump_en
    // val load_inst     = io.ex_ctrl.ex_inst_isload || io.mem_ctrl.mem_inst_isload
    // val store_inst    = io.ex_ctrl.ex_inst_isstore || io.mem_ctrl.mem_inst_isstore
    // val load_data_hit = io.bypass_ctrl.rs_id_ex_hit && io.ex_ctrl.ex_inst_isload

    // ctrl_pc.jump_addr := io.ex_ctrl.typej_jump_addr | io.clint_ctrl.intr_jump_addr
    // ctrl_pc.jump_en   := jump

    // when(jump) {
    //     io.pc_flush_en_o := false.B
    //     io.if_id_flush_en_o := true.B
    //     io.id_ex_flush_en_o := true.B
    // }.elsewhen(busy) {
    //     io.pc_flush_en_o := false.B
    //     io.if_id_flush_en_o := false.B
    //     io.id_ex_flush_en_o := Mux(io.axi_busy_end_i, false.B, true.B)
    // }.elsewhen(load_inst || store_inst || load_data_hit) {
    //     io.pc_flush_en_o := false.B
    //     io.if_id_flush_en_o := false.B
    //     io.id_ex_flush_en_o := true.B
    //     io.ex_mem_flush_en_o := false.B
    // }.otherwise {
    //     io.pc_flush_en_o := false.B
    //     io.if_id_flush_en_o := false.B
    //     io.id_ex_flush_en_o := false.B
    //     io.ex_mem_flush_en_o := false.B
    // }

    // when(busy) {
    //     io.pc_stall_en_o := Mux(io.axi_busy_end_i, false.B, true.B)
    //     io.if_id_stall_en_o := Mux(io.axi_busy_end_i, false.B, true.B)
    //     io.id_ex_stall_en_o := false.B
    //     io.ex_mem_stall_en_o := Mux(io.axi_busy_end_i, false.B, true.B)
    //     io.mem_wb_stall_en_o := false.B
    // }.elsewhen(load_inst) {
    //     io.pc_stall_en_o := true.B
    //     io.if_id_stall_en_o := true.B
    //     io.id_ex_stall_en_o := false.B
    //     io.ex_mem_stall_en_o := io.mem_inst_isload_i
    //     io.mem_wb_stall_en_o := false.B
    // }.elsewhen(store_inst) {
    //     io.pc_stall_en_o := true.B
    //     io.if_id_stall_en_o := true.B
    //     io.id_ex_stall_en_o := false.B
    //     io.ex_mem_stall_en_o := io.mem_inst_isstore_i
    //     io.mem_wb_stall_en_o := false.B
    // }.elsewhen(load_data_hit) {
    //     io.pc_stall_en_o := true.B
    //     io.if_id_stall_en_o := true.B
    //     io.id_ex_stall_en_o := false.B
    //     io.ex_mem_stall_en_o := false.B
    //     io.mem_wb_stall_en_o := false.B
    // }.otherwise {
    //     io.pc_stall_en_o := false.B
    //     io.if_id_stall_en_o := false.B
    //     io.id_ex_stall_en_o := false.B
    //     io.ex_mem_stall_en_o := false.B
    //     io.mem_wb_stall_en_o := false.B
    // }


//io.pc_flush_en_o := Mux(jump, false.B,
//                     Mux(busy, !io.axi_busy_end_i, 
//                       Mux(load_inst || store_inst || load_data_hit, true.B, false.B)))

// io.if_id_flush_en_o := Mux(jump, true.B,
//                       Mux(busy, !io.axi_busy_end_i, false.B))

// io.id_ex_flush_en_o := Mux(jump || (busy && !io.axi_busy_end_i) || 
//                       (load_inst || store_inst || load_data_hit), true.B, false.B)

// io.ex_mem_flush_en_o := Mux(jump, false.B, false.B)

// io.mem_wb_flush_en_o := Mux(jump, false.B, false.B)

// io.pc_stall_en_o := Mux(busy, !io.axi_busy_end_i, false.B)
// io.if_id_stall_en_o := Mux(busy, !io.axi_busy_end_i, false.B)
// io.id_ex_stall_en_o := Mux(busy, false.B, false.B)
// io.ex_mem_stall_en_o := Mux(busy, !io.axi_busy_end_i, false.B)
// io.mem_wb_stall_en_o := false.B



}
