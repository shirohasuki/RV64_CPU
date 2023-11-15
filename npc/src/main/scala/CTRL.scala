/*************************************************************************
    > File Name: CTRL.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-23 23:02:13
    > Description: 
*************************************************************************/

package CTRL

import chisel3._
import chisel3.util._

class EXU_CTRL_Input extends Bundle {
    val inst_isload  = Input(Bool())
    val inst_isstore = Input(Bool())
    val typej_jump_en   = Input(Bool())
    val typej_jump_addr = Input(UInt(64.W))
}

// class CLINT_CTRL_Input extends Bundle {
//     val intr_jump_en   = Input(Bool())
//     val intr_jump_addr = Input(UInt(64.W))
// }

// class MEM_CTRL_Input extends Bundle {
//     val mem_inst_isload  = Input(Bool())
//     val mem_inst_isstore = Input(Bool())
// }

class Rename_CTRL_Input extends Bundle {
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

class CTRL_EXWB_Output extends Bundle {
    val exwb_stall_en = Output(Bool())
    val exwb_flush_en = Output(Bool())
}
class CTRL_EXMEM_Output extends Bundle {
    val exmem_stall_en = Output(Bool())
    val exmem_flush_en = Output(Bool())
}
class CTRL_MEMWB_Output extends Bundle {
    val memwb_stall_en = Output(Bool())
    val memwb_flush_en = Output(Bool())
}
// class CTRL_EXU_Output extends Bundle {
//     val axi_busy_end = Output(Bool())
// }

class Ctrl extends Module {
    val ex_ctrl       = IO(new EXU_CTRL_Input()     )
    // val clint_ctrl   = IO(new CLINT_CTRL_Input()   )
    // val mem_ctrl      = IO(new MEM_CTRL_Input()     )
    val rename_ctrl = IO(new Bundle { val rs_id_ex_hit = Input(Bool())})
    // val mcif_ctrl     = IO(new Bundle {     
    //     // val inst_fetch_busy = Input(Bool())
    //     val load_store_busy = Input(Bool())
    //     val axi_busy_end   = Input(Bool())
    // })

    val ctrl_pc       = IO(new CTRL_PC_Output()     )
    val ctrl_ifid     = IO(new CTRL_IFID_Output()     )
    val ctrl_idex     = IO(new CTRL_IDEX_Output()     )
    val ctrl_exmem     = IO(new CTRL_EXMEM_Output()     )
    // val ctrl_idclint = IO(new CTRL_IDClint_Output())
    val ctrl_exwb     = IO(new CTRL_EXWB_Output()  )
    val ctrl_memwb     = IO(new CTRL_MEMWB_Output()     )


    
    val jump          = ex_ctrl.typej_jump_en   // || ex_ctrl.intr_jump_en
    val inst_load     = ex_ctrl.inst_isload   


    // val load_store_busy = RegInit(false.B)    
    // when (mcif_ctrl.load_store_busy) {
    //     load_store_busy := true.B
    // }.elsewhen (mcif_ctrl.axi_busy_end) {
    //     load_store_busy := false.B
    // }.otherwise {
    //     load_store_busy := load_store_busy
    // }
    
    val load_data_hit   = rename_ctrl.rs_id_ex_hit && ex_ctrl.inst_isload
    val NOEVENT         = ~(jump | inst_load |load_data_hit)

    ctrl_pc.jump_addr := ex_ctrl.typej_jump_addr //| io.clint_ctrl.intr_jump_addr
    ctrl_pc.jump_en   := jump

    // 给事件进行优先编码
    val event_code = PriorityEncoder(Cat(load_data_hit, inst_load, jump, NOEVENT)) // 从低到高输出第一个有1的位数 0->NOEVENT
    // val event_code = PriorityEncoder(Cat(load_data_hit, (mcif_ctrl.load_store_busy | load_store_busy & ~mcif_ctrl.axi_busy_end), jump, NOEVENT)) // 从低到高输出第一个有1的位数 0->NOEVENT

    //  List(pc_stall_en, if_id_stall_en, id_ex_stall_en, ex_mem_stall_en, ex_wb_stall_en, mem_wb_stall_en)
    val stall_list  = ListLookup(event_code, List(false.B, false.B, false.B, false.B, false.B, false.B), Array(
        // BitPat("b10".U) -> List(true.B, true.B, false.B, true.B),     // load_store_busy    
        BitPat("b10".U) -> List(true.B, true.B, false.B, false.B, false.B, false.B),     // inst_load
        BitPat("b00".U) -> List(false.B, false.B, false.B, false.B, false.B, false.B),   // Noevent
        BitPat("b11".U) -> List(true.B, true.B, false.B, false.B, false.B, false.B),     // load_data_hit         
    ))

    ctrl_pc.pc_stall_en         := stall_list(0)
    ctrl_ifid.ifid_stall_en     := stall_list(1)
    ctrl_idex.idex_stall_en     := stall_list(2)
    ctrl_exmem.exmem_stall_en   := stall_list(3)
    ctrl_exwb.exwb_stall_en     := stall_list(4)
    ctrl_memwb.memwb_stall_en   := stall_list(5)


        //  List(pc_flush_en, if_id_flush_en, id_ex_flush_en, ex_mem_flush_en, ex_wb_flush_en, mem_wb_flush_en)
    val flush_list  = ListLookup(event_code, List(false.B, false.B, false.B, false.B, false.B, false.B), Array(
        // BitPat("b10".U) -> List(false.B, false.B, true.B,  true.B),     // load_store_busy
        BitPat("b00".U) -> List(false.B, false.B, false.B, false.B, false.B, false.B),    // Noevent
        BitPat("b01".U) -> List(false.B, true.B,  true.B,  true.B, false.B, false.B),    // jump
        BitPat("b01".U) -> List(false.B, false.B,  true.B, false.B, false.B, false.B),    // inst_load
        BitPat("b11".U) -> List(false.B, false.B, true.B,  false.B, false.B, false.B)     // load_data_hit 
    ))

    ctrl_pc.pc_flush_en         := flush_list(0)
    ctrl_ifid.ifid_flush_en     := flush_list(1)
    ctrl_idex.idex_flush_en     := flush_list(2)
    ctrl_exmem.exmem_flush_en   := flush_list(3)
    ctrl_exwb.exwb_flush_en     := flush_list(4)
    ctrl_memwb.memwb_flush_en   := flush_list(5)

}
