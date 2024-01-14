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
    val multiplier   = Input(UInt(64.W)) 
    val multiplicand = Input(UInt(64.W)) 
    val mul_signed   = Input(UInt(4.W))  
    val mulw         = Input(UInt(1.W))  
}

class DIV_ALU_Output extends Bundle {
    val div_result   = Output(UInt(64.W))    
}  

class DIV extends Module {
    val alu_div_i = IO(Flipped(Valid(new ALU_DIV_Input))) 
    val div_alu_o = IO(Valid(new DIV_ALU_Output)) 
   

    // div_alu_o.bits.div_result := div_result
    // div_alu_o.valid           := true.B
}