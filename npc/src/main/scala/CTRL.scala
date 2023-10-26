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
    val exmem_stall_en = Output(Bool())
    val exmem_flush_en = Output(Bool())
}

class CTRL_MEMWB_Output extends Bundle {
    val memwb_stall_en = Output(Bool())
    val memwb_flush_en = Output(Bool())
}


class Ctrl extends Module {
    val ex_ctrl       = IO(new EXU_CTRL_Input()     )
    // val clint_ctrl   = IO(new CLINT_CTRL_Input()   )
    val mem_ctrl      = IO(new MEM_CTRL_Input()     )
    val redirect_ctrl = IO(new Bundle{ val rs_id_ex_hit = Input(Bool())})

    val ctrl_pc       = IO(new CTRL_PC_Output()     )
    val ctrl_ifid     = IO(new CTRL_IFID_Output()     )
    val ctrl_idex     = IO(new CTRL_IDEX_Output()     )
    // val ctrl_idclint = IO(new CTRL_IDClint_Output())
    val ctrl_exmem    = IO(new CTRL_EXMEM_Output()  )
    val ctrl_memwb    = IO(new CTRL_MEMWB_Output()  )


    val jump          = ex_ctrl.typej_jump_en   // || ex_ctrl.intr_jump_en
    val load_inst     = ex_ctrl.ex_inst_isload  || mem_ctrl.mem_inst_isload
    val store_inst    = ex_ctrl.ex_inst_isstore || mem_ctrl.mem_inst_isstore
    val load_data_hit = redirect_ctrl.rs_id_ex_hit && ex_ctrl.ex_inst_isload

    ctrl_pc.jump_addr := ex_ctrl.typej_jump_addr //| io.clint_ctrl.intr_jump_addr
    ctrl_pc.jump_en   := jump

    // 给事件进行优先编码
    val event_code = RegInit(0.U(3.W)) 
    event_code := PriorityEncoder(Seq(true.B, true.B, load_inst, store_inst, load_data_hit)) // 从低到高输出第一个有1的位数

    //  List(pc_stall_en, if_id_stall_en, id_ex_stall_en, ex_mem_stall_en, mem_wb_stall_en)
    val stall_list  = ListLookup(event_code, List(false.B, false.B, false.B, false.B, false.B), Array(
        BitPat(2.U) -> List(true.B, true.B, false.B, mem_ctrl.mem_inst_isload,  false.B), // load_inst   
        BitPat(3.U) -> List(true.B, true.B, false.B, mem_ctrl.mem_inst_isstore, false.B), // store_inst         
        BitPat(4.U) -> List(true.B, true.B, false.B, false.B, false.B)                   // load_data_hit      
    ))

    ctrl_pc.pc_stall_en         := stall_list(0)
    ctrl_ifid.ifid_stall_en     := stall_list(1)
    ctrl_idex.idex_stall_en     := stall_list(2)
    ctrl_exmem.exmem_stall_en   := stall_list(3)
    ctrl_memwb.memwb_stall_en   := stall_list(4)

        //  List(pc_flush_en, if_id_flush_en, id_ex_flush_en, ex_mem_flush_en, mem_wb_flush_en)
    val flush_list  = ListLookup(event_code, List(false.B, false.B, false.B, false.B, false.B), Array(
        BitPat(1.U) -> List(false.B, true.B,  true.B, false.B, false.B), // jump
        BitPat(2.U) -> List(false.B, false.B, true.B, false.B, false.B), // load_inst          
        BitPat(3.U) -> List(false.B, false.B, true.B, false.B, false.B), // store_inst          
        BitPat(4.U) -> List(false.B, false.B, true.B, false.B, false.B) // load_data_hit 
    ))

    ctrl_pc.pc_flush_en         := flush_list(0)
    ctrl_ifid.ifid_flush_en     := flush_list(1)
    ctrl_idex.idex_flush_en     := flush_list(2)
    ctrl_exmem.exmem_flush_en   := flush_list(3)
    ctrl_memwb.memwb_flush_en   := flush_list(4)
}
