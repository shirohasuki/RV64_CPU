
// import chisel3._
// import chisel3.util._





// class Ctrl extends Module {
//   val io = IO(new Bundle {
//     // from ex
//     val typej_jump_addr_i = Input(UInt(64.W))
//     val typej_jump_en_i = Input(Bool())
//     // from clint
//     val intr_jump_addr_i = Input(UInt(64.W))
//     val intr_jump_en_i = Input(Bool())
//     // from ex
//     val ex_inst_isload_i = Input(Bool())
//     val ex_inst_isstore_i = Input(Bool())
//     // from mem
//     val mem_inst_isload_i = Input(Bool())
//     val mem_inst_isstore_i = Input(Bool())
//     // from rename
//     val rs_id_ex_hit_i = Input(Bool())

//     // to pc_reg
//     val jump_addr_o = Output(UInt(64.W))
//     val jump_en_o = Output(Bool())
//     val pc_stall_en_o = Output(Bool())
//     val pc_flush_en_o = Output(Bool())
//     // to if_id
//     val if_id_stall_en_o = Output(Bool())
//     val if_id_flush_en_o = Output(Bool())
//     // to id_ex
//     val id_ex_stall_en_o = Output(Bool())
//     val id_ex_flush_en_o = Output(Bool())
//     // to id_clint
//     val id_clint_stall_en_o = Output(Bool())
//     val id_clint_flush_en_o = Output(Bool())
//     // to ex_mem
//     val ex_mem_stall_en_o = Output(Bool())
//     val ex_mem_flush_en_o = Output(Bool())
//     // to mem_wb
//     val mem_wb_stall_en_o = Output(Bool())
//     val mem_wb_flush_en_o = Output(Bool())
//   })

//   val jump = io.typej_jump_en_i || io.intr_jump_en_i
//   val busy = io.axi_busy_i
//   val load_inst = io.ex_inst_isload_i || io.mem_inst_isload_i
//   val store_inst = io.ex_inst_isstore_i || io.mem_inst_isstore_i
//   val load_data_hit = io.rs_id_ex_hit_i && io.ex_inst_isload_i

//   io.jump_addr_o := io.typej_jump_addr_i | io.intr_jump_addr_i
//   io.jump_en_o := jump
//   io.pc_flush_en_o := false.B
//   io.if_id_flush_en_o := false.B
//   io.id_ex_flush_en_o := false.B
//   io.id_clint_flush_en_o := false.B
//   io.ex_mem_flush_en_o := false.B
//   io.mem_wb_flush_en_o := false.B

//   when(jump) {
//     // Handle jump case
//     io.pc_flush_en_o := false.B
//     io.if_id_flush_en_o := true.B
//     io.id_ex_flush_en_o := true.B
//   }.elsewhen(busy) {
//     // Handle busy case
//     io.pc_flush_en_o := false.B
//     io.if_id_flush_en_o := false.B
//     io.id_ex_flush_en_o := busy && !io.axi_busy_end_i
//   }.elsewhen(load_inst) {
//     // Handle load instruction
//     io.pc_flush_en_o := false.B
//     io.if_id_flush_en_o := false.B
//     io.id_ex_flush_en_o := true.B
//     io.ex_mem_flush_en_o := false.B
//   }.elsewhen(store_inst) {
//     // Handle store instruction
//     io.pc_flush_en_o := false.B
//     io.if_id_flush_en_o := false.B
//     io.id_ex_flush_en_o := true.B
//     io.ex_mem_flush_en_o := false.B
//   }.elsewhen(load_data_hit) {
//     // Handle load data hit
//     io.pc_flush_en_o := false.B
//     io.if_id_flush_en_o := false.B
//     io.id_ex_flush_en_o := true.B
//   }
//   // ...

//   // Rest of the code to handle pc_stall_en_o, if_id_stall_en_o, and other signals
// }
