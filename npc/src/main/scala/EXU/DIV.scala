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



class Counter(t: Int) extends Module{
    val io = IO(new Bundle{
        val en = Input(Bool())
        val out = Output(UInt(8.W))
        val overflow = Output(Bool())
    })
    val state = RegInit(0.U(8.W))
    val nextState = state + 1.U
    when(io.en) {
        when(state < t.U) {
            state := nextState
        }.otherwise {
            state := 0.U
        }
    }.otherwise {
        state := 0.U
    }
    io.out      := state
    io.overflow := (state === t.U).asBool
}

class Comparator(bitwidth: Int) extends Module{
    val io = IO(new Bundle{
        val a         = Input(UInt(bitwidth.W))
        val b         = Input(UInt(bitwidth.W))
        val out       = Output(UInt(bitwidth.W))
        val divisible = Output(Bool())
    })
    when(io.a >= io.b){
        io.out := io.a - io.b
    }.otherwise{
        io.out := io.a
    }
    io.divisible := (io.a >= io.b).asBool
}

class ALU_DIV_Input extends Bundle {
    val dividend   = Input(UInt(64.W)) 
    val divisor    = Input(UInt(64.W)) 
    val div_signed = Input(UInt(2.W))  // 00 -> u/u, 11 -> s/s
    val divw       = Input(UInt(1.W))  
}

class DIV_ALU_Output extends Bundle {
    val quotient   = Output(UInt(64.W))    
    val remainder  = Output(UInt(64.W))    
    // val div_busy   = Output(Bool()) 
}  

class DIV(width: Int) extends Module {
    val alu_div_i = IO(Flipped(Valid(new ALU_DIV_Input))) 
    val div_alu_o = IO(Valid(new DIV_ALU_Output)) 
   
    // step 1: x y预处理，有符号数记录符号
    val x_sign = WireInit(0.U(1.W))
    val y_sign = WireInit(0.U(1.W))
    // 记录符号
    val q_sign = WireInit(0.U(1.W)) // 商的符号, 1为正
    val r_sign = WireInit(0.U(1.W)) // 余数的符号, 1为正  
    x_sign := Mux(alu_div_i.bits.div_signed === "b11".U, ~alu_div_i.bits.dividend(63), 1.U)
    y_sign := Mux(alu_div_i.bits.div_signed === "b11".U, ~alu_div_i.bits.divisor(63),  1.U)
    q_sign := ~(x_sign ^ y_sign)
    r_sign := x_sign

    // 有符号数取绝对值
    val dividend_abs = WireInit(0.U(64.W))
    val divisor_abs  = WireInit(0.U(64.W))
    dividend_abs := Mux(x_sign === 1.U, alu_div_i.bits.dividend, ~alu_div_i.bits.dividend + 1.U) 
    divisor_abs  := Mux(y_sign === 1.U, alu_div_i.bits.divisor, ~alu_div_i.bits.divisor + 1.U) 
    // 被除数拓展
    val x = RegInit(0.U(128.W)) 
    val y = RegInit(0.U(64.W)) 
    val q = RegInit(VecInit(Seq.fill(64)(0.U(1.W)))) 

    // when (stateReg === sIdle) {
    //     // x := Cat(Fill(64, 0.U), dividend_abs)
    //     x := dividend_abs
    //     y := divisor_abs 
    // }
    // step 2: 循环64轮减法
    // val div_cnt    = RegInit(0.U(6.W))
    // val sub_result = RegInit(0.U(65.W))
    val sIdle :: sRunning :: sOutput :: Nil = Enum(3)
    val stateReg  = RegInit(sIdle)
    val masterReg = Reg(UInt((2 * width + 1).W))
    val counter1  = Module(new Counter(t = width))
    counter1.io.en := (stateReg === sRunning)
    val compare1  = Module(new Comparator(bitwidth = width))
    compare1.io.a := masterReg(2 * width - 1, width)
    compare1.io.b := divisor_abs

    switch(stateReg) {
        is(sIdle) {
            when(alu_div_i.valid) {
                stateReg  := sRunning
                masterReg := dividend_abs << 1
            }
        }
        is(sRunning) {
            when(counter1.io.overflow === false.B) {
                masterReg := Cat(compare1.io.out, masterReg(width - 1, 0), compare1.io.divisible)
            }.otherwise {
                stateReg  := sOutput
            }
        }
        is(sOutput) {
            stateReg := sIdle
            x        := 0.U
            y        := 0.U
        }
    }

    // step 3: 恢复输出
    // val div_end = (div_cnt === 63.U)
    div_alu_o.valid          := (stateReg === sOutput)
    div_alu_o.bits.quotient  := masterReg(width - 1, 0)  // Mux(q_sign === 0.U, ~q.asUInt + 1.U, q.asUInt)
    div_alu_o.bits.remainder := masterReg(2 * width, width + 1) // Mux(r_sign === 0.U, ~x.asUInt + 1.U, x.asUInt)
    // div_alu_o.valid := div_end && alu_div_i.valid
    // div_alu_o.bits.quotient := Mux(~div_end, 0.U, 
    //                                 Mux(q_sign === 0.U, ~q.asUInt + 1.U, q.asUInt))
    // div_alu_o.bits.remainder := Mux(~div_end, 0.U, 
    //                                 Mux(r_sign === 0.U, ~x.asUInt + 1.U, x.asUInt))
    // div_alu_o.bits.div_busy := alu_div_i.valid && (div_cnt =/= 0.U) 
    // step 4: 恢复寄存器
    // when (div_alu_o.valid) {
    //     x := 0.U
    // }
}