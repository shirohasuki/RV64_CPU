/*************************************************************************
    > File Name: IDClint.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-12-16 00:49:38
    > Description: 
*************************************************************************/

package IDClint

import chisel3._
import define.function._
import define.MACRO._


class Ctrl_Input extends Bundle {
    val idclint_flush_en  = Input(Bool())
    val idclint_stall_en  = Input(Bool())
}

class IDClint_Input extends Bundle {
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
}


class IDClint extends Module {
    val id_idclint      = IO(new IDClint_Input())
    val idclint_clint   = IO(Flipped(new IDClint_Input()))
    val ctrl_idclint    = IO(new Ctrl_Input())

    idclint_clint.inst := dff_set(ctrl_idclint.idclint_flush_en, ctrl_idclint.idclint_stall_en, 32.U, INST_NOP,  id_idclint.inst)
    idclint_clint.pc   := dff_set(ctrl_idclint.idclint_flush_en, ctrl_idclint.idclint_stall_en, 64.U, 0.U(64.W), id_idclint.pc  )
}
