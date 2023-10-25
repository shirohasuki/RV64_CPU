package CTRL

import chisel3._
import chisel3.util._

class EXU_CTRL_Input extends Bundle {
    val ex_inst_isload  = Input(Bool())
    val ex_inst_isstore = Input(Bool())
    val typej_jump_en   = Input(Bool())
    val typej_jump_addr = Input(UInt(64.W))
}

// class CLINT_CTRL_Input extends Bundle {
//     val intr_jump_en   = Input(Bool())
//     val intr_jump_addr = Input(UInt(64.W))
// }

class MEM_CTRL_Input extends Bundle {
    val mem_inst_isload  = Input(Bool())
    val mem_inst_isstore = Input(Bool())
}

class Redirect_CTRL_Input extends Bundle {
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

// class CTRL_IDClint_Output extends Bundle {
//     val idclint_stall_en = Output(Bool())
//     val idclint_flush_en = Output(Bool())
// }

class CTRL_EXMEM_Output extends Bundle {
    val ex_mem_stall_en = Output(Bool())
    val ex_mem_flush_en = Output(Bool())
}

class CTRL_MEMWB_Output extends Bundle {
    val mem_wb_stall_en = Output(Bool())
    val mem_wb_flush_en = Output(Bool())
}


class Ctrl extends Module {
    val ex_ctrl       = IO(new EXU_CTRL_Input()     )
    // val clint_ctrl   = IO(new CLINT_CTRL_Input()   )
    val mem_ctrl      = IO(new MEM_CTRL_Input()     )
    val redirect_ctrl = IO(new Bundle{ val rs_id_ex_hit_o = Input(Bool())})

    val ctrl_pc       = IO(new CTRL_PC_Output()     )
    val ctrl_ifid     = (new CTRL_IFID_Output()     )
    val ctrl_idex     = (new CTRL_IDEX_Output()     )
    // val ctrl_idclint = IO(new CTRL_IDClint_Output())
    val ctrl_exmem    = IO(new CTRL_EXMEM_Output()  )
    val ctrl_memwb    = IO(new CTRL_MEMWB_Output()  )


    val jump          = ex_ctrl.typej_jump_en   || ex_ctrl.intr_jump_en
    // val load_inst     = ex_ctrl.ex_inst_isload  || mem_ctrl.mem_inst_isload
    // val store_inst    = ex_ctrl.ex_inst_isstore || mem_ctrl.mem_inst_isstore
    val load_data_hit = redirect_ctrl.rs_id_ex_hit && ex_ctrl.ex_inst_isload

    ctrl_pc.jump_addr := ex_ctrl.typej_jump_addr //| io.clint_ctrl.intr_jump_addr
    ctrl_pc.jump_en   := jump

    // 给事件进行优先编码
    val event_code = VecInit(jump, load_inst, store_inst, load_data_hit)
    val event_code_OH = PriorityEncoderOH(event_code)

    //  List(pc_stall_en, if_id_stall_en, id_ex_stall_en, ex_mem_stall_en, mem_wb_stall_en)
    var stall_list  = ListLookup(event_code_OH, List(false.B, false.B, false.B, false.B, false.B), Array(
        "b0100".U -> List(true.B, true.B, false.B, mem_ctrl.mem_inst_isload,  false.B), // load_inst   
        "b0010".U -> List(true.B, true.B, false.B, mem_ctrl.mem_inst_isstore, false.B), // store_inst         
        "b0001".U -> List(true.B, true.B, false.B, false.B, false.B)                   // load_data_hit      
    ))

        //  List(pc_flush_en, if_id_flush_en, id_ex_flush_en, ex_mem_flush_en, mem_wb_flush_en)
    var flush_list  = ListLookup(event_code_OH, List(false.B, false.B, false.B, false.B, false.B), Array(
        "b1000".U -> List(false.B, true.B,  true.B, false.B, false.B), // jump
        "b0100".U -> List(false.B, false.B, true.B, false.B, false.B), // load_inst          
        "b0010".U -> List(false.B, false.B, true.B, false.B, false.B), // store_inst          
        "b0001".U -> List(false.B, false.B, true.B, false.B, false.B) // load_data_hit 
    ))
}
