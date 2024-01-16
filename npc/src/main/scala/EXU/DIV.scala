/*************************************************************************
    > File Name: DIV.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2024-01-06 21:54:27
    > Description: 
*************************************************************************/
package EXU.DIV

import chisel3._
import chisel3.util._


class ALU_DIV_Input extends Bundle {
    val dividend   = Input(UInt(64.W)) 
    val divisor    = Input(UInt(64.W)) 
    val div_signed = Input(UInt(4.W))  // 00 -> u/u, 11 -> s/s
    val divw       = Input(UInt(1.W))  
}

class DIV_ALU_Output extends Bundle {
    val quotient   = Output(UInt(64.W))    
    val remainder  = Output(UInt(64.W))    
    val div_busy   = Output(Bool()) 
}  

class DIV extends Module {
    val alu_div_i = IO(Flipped(Valid(new ALU_DIV_Input))) 
    val div_alu_o = IO(Valid(new DIV_ALU_Output)) 
   
    // step 1: x y预处理，有符号数记录符号
    val x_sign = WireInit(0.U(1.W))
    val y_sign = WireInit(0.U(1.W))
    // 记录符号
    val q_sign = WireInit(0.U(1.W)) // 商的符号, 1为负 
    val r_sign = WireInit(0.U(1.W)) // 余数的符号, 1为负  
    x_sign := Mux(alu_div_i.bits.div_signed === 1.U, ~alu_div_i.bits.dividend(63), 1.U)
    y_sign := Mux(alu_div_i.bits.div_signed === 1.U, ~alu_div_i.bits.divisor(63),  1.U)
    // when (alu_div_i.bits.div_signed == "b11".U) { // signed / signed
    q_sign := x_sign ^ y_sign
    r_sign := y_sign
    // }.otherwise {
        // q_sign  := 0.U
        // r_sign  := 0.U
    // }  // unsigned / unsigned

    // 有符号数取绝对值
    val dividend_abs = WireInit(0.U(64.W))
    val divisor_abs  = WireInit(0.U(64.W))
    dividend_abs := Mux(x_sign === 1.U, alu_div_i.bits.dividend, ~alu_div_i.bits.dividend + 1.U) 
    divisor_abs  := Mux(y_sign === 1.U, alu_div_i.bits.divisor, ~alu_div_i.bits.divisor + 1.U) 
    // 被除数拓展
    val x = WireInit(VecInit(Seq.fill(128)(0.U(1.W)))) 
    val y = WireInit(VecInit(Seq.fill(64)(0.U(1.W)))) 
    val q = WireInit(VecInit(Seq.fill(64)(0.U(1.W)))) 
    // val r = WireInit(VecInit(Seq.fill(64)(0.U(1.W)))) 
    for (i <- 0 until 64) {
        x(i) := dividend_abs(i)
        y(i) := divisor_abs(i)
    }
    // x := Cat(Fill(64, 0.U), dividend_abs)
    // step 2: 循环64轮减法
    val div_cnt    = RegInit(0.U(6.W))
    val sub_result = RegInit(0.U(65.W))
    when (alu_div_i.valid) {
        div_cnt := 64.U
        for (i <- 0 until 64) {
            when (div_cnt =/= 0.U) {
                sub_result := (x.asUInt)(127 - i, 63 - i) - Cat(0.U, y.asUInt).asUInt
                when (sub_result(64) === 0.U) {
                    q(i) := 1.U
                }.otherwise {
                    q(i) := 0.U
                    for (j <- 0 until 65) {
                        x(63 - i + j) := sub_result(j)
                    }
                }
                div_cnt := div_cnt - 1.U
            }
        }
    }

    // step 3: 恢复输出
    div_alu_o.valid := (div_cnt === 0.U)
    div_alu_o.bits.quotient := Mux(div_cnt =/= 0.U, 0.U, 
                                    Mux(q_sign === 0.U, ~q.asUInt + 1.U, q.asUInt))
    div_alu_o.bits.remainder := Mux(div_cnt =/= 0.U, 0.U, 
                                    Mux(r_sign === 0.U, ~x.asUInt + 1.U, x.asUInt))
    div_alu_o.bits.div_busy := Mux(div_cnt =/= 0.U, 1.U, 0.U)
}