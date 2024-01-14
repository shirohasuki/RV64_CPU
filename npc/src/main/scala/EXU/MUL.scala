/*************************************************************************
    > File Name: MUL.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2024-01-06 21:52:52
    > Description: 
*************************************************************************/
package EXU.MUL

import chisel3._
import chisel3.util._
import chisel3.stage._


// object function {
//     def CSA_132bit(x: UInt, y: UInt, cin: UInt): (UInt, UInt) = {
//         val s    = Wire(Vec(132, UInt(1.W)))
//         val cout = Wire(Vec(132, UInt(1.W)))
//         val g    = Wire(Vec(132, UInt(1.W)))
//         val p    = Wire(Vec(132, UInt(1.W)))
        
//         for (i <- 0 until 132) {
//             g(i)       := x(i) & y(i) 
//             p(i)       := x(i) ^ y(i) 
//             s(i)       := p(i) ^ cin(i) 
//             cout(i)    := cin(i) ^ p(i) | g(i)
//         }
//         (s.asUInt, cout.asUInt) 
//     } // carry-save-adder 结构其实和FA一致
//     // （1）计算和Sum：每一列数相加，对进制数取模，此处为二进制，（0+1+0）=1，（0+1+1）=0，（1+1+1）=1。
//     // （2）计算进位Carry：从竖式低位开始计算，低位向高位进位，每一列的数相加对进制数取商。如（0+1+0）/ 2 = 0 … 1，（1+1+0）/ 2 = 1 … 0，忽略余数。低位向高位传递进位。
//     def RCA_132bit(x: UInt, y: UInt, cin: Bool): UInt = {
//         val s    = WireInit(0.U(132.W))
//         val cout = WireInit(0.U(1.W))
//         val g    = WireInit(0.U(132.W))
//         val p    = WireInit(0.U(132.W))

//         val c    = WireInit(0.U(132.W))
//         cout    := cout.bitSet(0.U, cin) 
//         for (i <- 0 until 132) {
//             g       := g.bitSet(i.U,    x(i) & y(i)) 
//             p       := p.bitSet(i.U,    x(i) ^ y(i)) 
//             s       := s.bitSet(i.U,    p(i) ^ c(i)) 
//             c       := cout.bitSet((i+1).U, c(i) & p(i) | g(i)) 
//         }
//         cout := c(64)
//         s
//     } 
// } 
// import function._


class CSA_132bit extends Module {
    val io = IO(new Bundle {
        val x_i = Input(UInt(132.W))
        val y_i = Input(UInt(132.W))
        val c_i = Input(UInt(132.W))
        val s_o = Output(UInt(132.W)) 
        val c_o = Output(UInt(132.W)) 
    })
    
    val s    = Wire(Vec(132, UInt(1.W)))
    val cout = Wire(Vec(132, UInt(1.W)))
    val g    = Wire(Vec(132, UInt(1.W)))
    val p    = Wire(Vec(132, UInt(1.W)))
    
    for (i <- 0 until 132) {
        g(i)       := io.x_i(i) & io.y_i(i) 
        p(i)       := io.x_i(i) ^ io.y_i(i) 
        cout(i)    := io.c_i(i) & p(i) | g(i)
        s(i)       := p(i) ^ io.c_i(i) 
    }
    io.s_o := s.asUInt
    io.c_o := cout.asUInt 
}

class RCA_132bit extends Module {
    val io = IO(new Bundle {
        val x_i = Input(UInt(132.W))
        val y_i = Input(UInt(132.W))
        val c_i = Input(UInt(1.W))
        val r_o = Output(UInt(132.W)) 
        // val c_o = Output(UInt(1.W)) 
    })
    val s    = Wire(Vec(132, UInt(1.W)))
    // val cout = Wire(Vec(132, UInt(1.W)))
    val g    = Wire(Vec(132, UInt(1.W)))
    val p    = Wire(Vec(132, UInt(1.W)))
    
    val c    = Wire(Vec(133, UInt(1.W)))
    c(0)    := io.c_i 
    for (i <- 0 until 132) {
        g(i)       := io.x_i(i) & io.y_i(i) 
        p(i)       := io.x_i(i) ^ io.y_i(i) 
        c(i+1)     := c(i) & p(i) | g(i) 
        s(i)       := p(i) ^ c(i) 
    }
    // io.c_o := c(64)
    io.r_o := s.asUInt
}



// booth信号生成模块 + 结果选择模块 = 部分积(partial product)生成模块
class pp_generator extends Module {
    val io = IO(new Bundle {
        val x_i       = Input(UInt(66.W))
        val y_bus_i   = Input(UInt(3.W) )// y+1, y, y-1
        val pp_sum_o  = Output(UInt(67.W)) 
        val pp_c_o    = Output(UInt(1.W)) 
    })
// booth信号生成
    val y_add = io.y_bus_i(2)
    val y     = io.y_bus_i(1)
    val y_sub = io.y_bus_i(0)

    val sel_negative        =  y_add & (y & ~y_sub | ~y & y_sub)
    val sel_positive        = ~y_add & (y & ~y_sub | ~y & y_sub)
    val sel_double_negative =  y_add & ~y & ~y_sub
    val sel_double_positive = ~y_add & y &  y_sub

// 结果选择                    
    io.pp_sum_o := MuxCase(0.U(67.U), Seq(  
        sel_double_negative ->  ~Cat(io.x_i, 0.U),          // -2x
        sel_double_positive ->   Cat(io.x_i, 0.U),          // +2x
        sel_negative        ->  ~Cat(io.x_i(65), io.x_i),   // -x
        sel_positive        ->   Cat(io.x_i(65), io.x_i)    // +x
    )) 

    io.pp_c_o := sel_double_negative | sel_negative;

}

// class switch_unit extends Module {
//     val io = IO(new Bundle {
//         val pp_i = Input(Vec(132, UInt(33.W)))
//         val pp_o = Output(Vec(33, UInt(132.W)))
//     }) 
//     for (i <- 0 until 33) {
//         for (j <- 0 until 132) {
//             io.pp_o(i) :=  io.pp_i(j)(i) 
//         }  
//     }
// }

// class wallace_33 extends Module {
//     val io = IO(new Bundle {
//         val pp_i     = Input(Vec(33, UInt(132.W)))
//         val result_o = Output(Vec(2, UInt(132.W)))
//     }) 
//     val CSA_132bit = VecInit(Seq.fill(33)(Module(new CSA_132bit).io))

//     // first layer, 11 csa, 33->22
//     val s_layer1   = Wire(Vec(11, UInt(132.W)))
//     val c_layer1   = Wire(Vec(11, UInt(132.W)))
//     for (i <- 0 until 11) {
//         val (s_bit_layer1, c_bit_layer1)  = CSA_132bit(io.pp_i(3 * i), io.pp_i(3 * i + 1), io.pp_i(3 * i + 2))
//         s_layer1(i) := s_bit_layer1; c_layer1(i) := c_bit_layer1; 
//     }
//     // second layer, 7 csa, 22->15
//     val s_layer2   = Wire(Vec(7, UInt(132.W)))
//     val c_layer2   = Wire(Vec(7, UInt(132.W)))
//     val (s_bit_layer2_0, c_bit_layer2_0) = CSA_132bit(s_layer1(0), s_layer1(1), c_layer1(0))
//     val (s_bit_layer2_1, c_bit_layer2_1) = CSA_132bit(s_layer1(2), c_layer1(1), c_layer1(2))
//     val (s_bit_layer2_2, c_bit_layer2_2) = CSA_132bit(s_layer1(3), s_layer1(4), c_layer1(3))
//     val (s_bit_layer2_3, c_bit_layer2_3) = CSA_132bit(s_layer1(5), c_layer1(4), c_layer1(5))
//     val (s_bit_layer2_4, c_bit_layer2_4) = CSA_132bit(s_layer1(6), s_layer1(7), c_layer1(6))
//     val (s_bit_layer2_5, c_bit_layer2_5) = CSA_132bit(s_layer1(8), c_layer1(7), c_layer1(8))
//     val (s_bit_layer2_6, c_bit_layer2_6) = CSA_132bit(s_layer1(9), s_layer1(10), c_layer1(9))       
//     s_layer2(0) := s_bit_layer2_0; c_layer2(0) := c_bit_layer2_0; 
//     s_layer2(1) := s_bit_layer2_1; c_layer2(1) := c_bit_layer2_1; 
//     s_layer2(2) := s_bit_layer2_2; c_layer2(2) := c_bit_layer2_2; 
//     s_layer2(3) := s_bit_layer2_3; c_layer2(3) := c_bit_layer2_3; 
//     s_layer2(4) := s_bit_layer2_4; c_layer2(4) := c_bit_layer2_4; 
//     s_layer2(5) := s_bit_layer2_5; c_layer2(5) := c_bit_layer2_5; 
//     s_layer2(6) := s_bit_layer2_6; c_layer2(6) := c_bit_layer2_6; 
//     // third layer, 5 csa, 15->10
//     val s_layer3   = Wire(Vec(5, UInt(132.W)))
//     val c_layer3   = Wire(Vec(5, UInt(132.W)))
//     val (s_bit_layer3_0, c_bit_layer3_0) = CSA_132bit(s_layer2(0), s_layer2(1), c_layer2(0))
//     val (s_bit_layer3_1, c_bit_layer3_1) = CSA_132bit(s_layer2(2), c_layer2(1), c_layer2(2))
//     val (s_bit_layer3_2, c_bit_layer3_2) = CSA_132bit(s_layer2(3), s_layer2(4), c_layer2(3))
//     val (s_bit_layer3_3, c_bit_layer3_3) = CSA_132bit(s_layer2(5), c_layer2(4), c_layer2(5))
//     val (s_bit_layer3_4, c_bit_layer3_4) = CSA_132bit(s_layer2(6), c_layer2(6), c_layer1(10))
//     s_layer3(0) := s_bit_layer3_0; c_layer3(0) := c_bit_layer3_0;
//     s_layer3(1) := s_bit_layer3_1; c_layer3(1) := c_bit_layer3_1;
//     s_layer3(2) := s_bit_layer3_2; c_layer3(2) := c_bit_layer3_2;
//     s_layer3(3) := s_bit_layer3_3; c_layer3(3) := c_bit_layer3_3;
//     s_layer3(4) := s_bit_layer3_4; c_layer3(4) := c_bit_layer3_4;
//     // forth layer, 3 csa, 10->7
//     val s_layer4   = Wire(Vec(3, UInt(132.W)))
//     val c_layer4   = Wire(Vec(3, UInt(132.W)))
//     val (s_bit_layer4_0, c_bit_layer4_0) = CSA_132bit(s_layer3(0), s_layer3(1), c_layer3(0))
//     val (s_bit_layer4_1, c_bit_layer4_1) = CSA_132bit(s_layer3(2), c_layer3(1), c_layer3(2))
//     val (s_bit_layer4_2, c_bit_layer4_2) = CSA_132bit(s_layer3(3), s_layer3(4), c_layer3(3)) // c_layer3(4)遗留
//     s_layer4(0) := s_bit_layer4_0; c_layer4(0) := c_bit_layer4_0; 
//     s_layer4(1) := s_bit_layer4_1; c_layer4(1) := c_bit_layer4_1; 
//     s_layer4(2) := s_bit_layer4_2; c_layer4(2) := c_bit_layer4_2; 
//     // fifth layer, 2 csa, 7->5
//     val s_layer5   = Wire(Vec(2, UInt(132.W)))
//     val c_layer5   = Wire(Vec(2, UInt(132.W)))
//     val (s_bit_layer5_0, c_bit_layer5_0) = CSA_132bit(s_layer4(0), s_layer4(1), c_layer4(0))
//     val (s_bit_layer5_1, c_bit_layer5_1) = CSA_132bit(s_layer4(2), c_layer4(1), c_layer4(2)) // c_layer3(4)遗留
//     s_layer5(0) := s_bit_layer5_0; c_layer5(0) := c_bit_layer5_0; 
//     s_layer5(1) := s_bit_layer5_1; c_layer5(1) := c_bit_layer5_1; 
//     // sixth layer, 1 csa, 5->4
//     val s_layer6   = WireInit(0.U(132.W))
//     val c_layer6   = WireInit(0.U(132.W))
//     val (s_bit_layer6, c_bit_layer6) = CSA_132bit(s_layer5(0), s_layer5(1), c_layer5(0)) // c_layer3(4), c_layer4(1)遗留
//     s_layer6 := s_bit_layer6; c_layer6 := c_bit_layer6; 
//     // seven layer, 1 csa, 4->3
//     val s_layer7   = WireInit(0.U(132.W))
//     val c_layer7   = WireInit(0.U(132.W))
//     val (s_bit_layer7, c_bit_layer7) = CSA_132bit(s_layer6(0), c_layer6(0), c_layer3(4)) // c_layer4(1)遗留
//     s_layer7 := s_bit_layer7; c_layer7 := c_bit_layer7; 
//     // eight layer, 1 csa, 3->2
//     val s_layer8   = WireInit(0.U(132.W))
//     val c_layer8   = WireInit(0.U(132.W))
//     val (s_bit_layer8, c_bit_layer8) = CSA_132bit(s_layer7(0), c_layer7(0), c_layer4(1))
//     s_layer8 := s_bit_layer8; c_layer8 := c_bit_layer8; 
    
//     io.result_o(1) := c_layer8
//     io.result_o(0) := s_layer8  
// }

class wallace_33 extends Module {
    val io = IO(new Bundle {
        val pp_i     = Input(Vec(33, UInt(132.W)))
        val result_o = Output(Vec(2, UInt(132.W)))
    }) 
    val CSA_132bit = VecInit(Seq.fill(31)(Module(new CSA_132bit).io))

    // first layer, 11 csa, 33->22
    val s_layer1   = Wire(Vec(11, UInt(132.W)))
    val c_layer1   = Wire(Vec(11, UInt(132.W)))
    for (i <- 0 until 11) {
        CSA_132bit(i).x_i := io.pp_i(3 * i); CSA_132bit(i).y_i := io.pp_i(3 * i + 1); CSA_132bit(i).c_i := io.pp_i(3 * i + 2);   
        s_layer1(i) := CSA_132bit(i).s_o; c_layer1(i) := Cat(CSA_132bit(i).c_o(130, 0), 0.U);
    }
    // second layer, 7 csa, 22->15
    val s_layer2   = Wire(Vec(7, UInt(132.W)))
    val c_layer2   = Wire(Vec(7, UInt(132.W)))
    CSA_132bit(11).x_i := s_layer1(0); CSA_132bit(11).y_i := s_layer1(1);  CSA_132bit(11).c_i := c_layer1(0);   
    CSA_132bit(12).x_i := s_layer1(2); CSA_132bit(12).y_i := c_layer1(1);  CSA_132bit(12).c_i := c_layer1(2);   
    CSA_132bit(13).x_i := s_layer1(3); CSA_132bit(13).y_i := s_layer1(4);  CSA_132bit(13).c_i := c_layer1(3);   
    CSA_132bit(14).x_i := s_layer1(5); CSA_132bit(14).y_i := c_layer1(4);  CSA_132bit(14).c_i := c_layer1(5);   
    CSA_132bit(15).x_i := s_layer1(6); CSA_132bit(15).y_i := s_layer1(7);  CSA_132bit(15).c_i := c_layer1(6);   
    CSA_132bit(16).x_i := s_layer1(8); CSA_132bit(16).y_i := c_layer1(7);  CSA_132bit(16).c_i := c_layer1(8);   
    CSA_132bit(17).x_i := s_layer1(9); CSA_132bit(17).y_i := s_layer1(10); CSA_132bit(17).c_i := c_layer1(9);   // c_layer1(10) 剩余
    s_layer2(0) := CSA_132bit(11).s_o; c_layer2(0) := Cat(CSA_132bit(11).c_o(130, 0), 0.U); 
    s_layer2(1) := CSA_132bit(12).s_o; c_layer2(1) := Cat(CSA_132bit(12).c_o(130, 0), 0.U); 
    s_layer2(2) := CSA_132bit(13).s_o; c_layer2(2) := Cat(CSA_132bit(13).c_o(130, 0), 0.U); 
    s_layer2(3) := CSA_132bit(14).s_o; c_layer2(3) := Cat(CSA_132bit(14).c_o(130, 0), 0.U); 
    s_layer2(4) := CSA_132bit(15).s_o; c_layer2(4) := Cat(CSA_132bit(15).c_o(130, 0), 0.U); 
    s_layer2(5) := CSA_132bit(16).s_o; c_layer2(5) := Cat(CSA_132bit(16).c_o(130, 0), 0.U); 
    s_layer2(6) := CSA_132bit(17).s_o; c_layer2(6) := Cat(CSA_132bit(17).c_o(130, 0), 0.U); 
    // third layer, 5 csa, 15->10
    val s_layer3   = Wire(Vec(5, UInt(132.W)))
    val c_layer3   = Wire(Vec(5, UInt(132.W)))
    CSA_132bit(18).x_i := s_layer2(0); CSA_132bit(18).y_i := s_layer2(1);  CSA_132bit(18).c_i := c_layer2(0);   
    CSA_132bit(19).x_i := s_layer2(2); CSA_132bit(19).y_i := c_layer2(1);  CSA_132bit(19).c_i := c_layer2(2);   
    CSA_132bit(20).x_i := s_layer2(3); CSA_132bit(20).y_i := s_layer2(4);  CSA_132bit(20).c_i := c_layer2(3);   
    CSA_132bit(21).x_i := s_layer2(5); CSA_132bit(21).y_i := c_layer2(4);  CSA_132bit(21).c_i := c_layer2(5);   
    CSA_132bit(22).x_i := s_layer2(6); CSA_132bit(22).y_i := c_layer2(6);  CSA_132bit(22).c_i := c_layer1(10);   
    s_layer3(0) := CSA_132bit(18).s_o; c_layer3(0) := Cat(CSA_132bit(18).c_o(130, 0), 0.U); 
    s_layer3(1) := CSA_132bit(19).s_o; c_layer3(1) := Cat(CSA_132bit(19).c_o(130, 0), 0.U); 
    s_layer3(2) := CSA_132bit(20).s_o; c_layer3(2) := Cat(CSA_132bit(20).c_o(130, 0), 0.U); 
    s_layer3(3) := CSA_132bit(21).s_o; c_layer3(3) := Cat(CSA_132bit(21).c_o(130, 0), 0.U); 
    s_layer3(4) := CSA_132bit(22).s_o; c_layer3(4) := Cat(CSA_132bit(22).c_o(130, 0), 0.U); 
    // forth layer, 3 csa, 10->7
    val s_layer4   = Wire(Vec(3, UInt(132.W)))
    val c_layer4   = Wire(Vec(3, UInt(132.W)))
    CSA_132bit(23).x_i := s_layer3(0); CSA_132bit(23).y_i := s_layer3(1);  CSA_132bit(23).c_i := c_layer3(0);   
    CSA_132bit(24).x_i := s_layer3(2); CSA_132bit(24).y_i := c_layer3(1);  CSA_132bit(24).c_i := c_layer3(2);   
    CSA_132bit(25).x_i := s_layer3(3); CSA_132bit(25).y_i := s_layer3(4);  CSA_132bit(25).c_i := c_layer3(3);    // c_layer3(4) 剩余
    s_layer4(0) := CSA_132bit(23).s_o; c_layer4(0) := Cat(CSA_132bit(23).c_o(130, 0), 0.U); 
    s_layer4(1) := CSA_132bit(24).s_o; c_layer4(1) := Cat(CSA_132bit(24).c_o(130, 0), 0.U); 
    s_layer4(2) := CSA_132bit(25).s_o; c_layer4(2) := Cat(CSA_132bit(25).c_o(130, 0), 0.U); 
    // fifth layer, 2 csa, 7->5
    val s_layer5   = Wire(Vec(2, UInt(132.W)))
    val c_layer5   = Wire(Vec(2, UInt(132.W)))
    CSA_132bit(26).x_i := s_layer4(0); CSA_132bit(26).y_i := s_layer4(1);  CSA_132bit(26).c_i := c_layer4(0);   
    CSA_132bit(27).x_i := s_layer4(2); CSA_132bit(27).y_i := c_layer4(1);  CSA_132bit(27).c_i := c_layer4(2);   // c_layer3(4) 剩余
    s_layer5(0) := CSA_132bit(26).s_o; c_layer5(0) := Cat(CSA_132bit(26).c_o(130, 0), 0.U); 
    s_layer5(1) := CSA_132bit(27).s_o; c_layer5(1) := Cat(CSA_132bit(27).c_o(130, 0), 0.U); 
    // sixth layer, 1 csa, 5->4
    val s_layer6   = WireInit(0.U(132.W))
    val c_layer6   = WireInit(0.U(132.W))
    CSA_132bit(28).x_i := s_layer5(0); CSA_132bit(28).y_i := s_layer5(1);  CSA_132bit(28).c_i := c_layer5(0);   // c_layer3(4) c_layer5(1)剩余
    s_layer6 := CSA_132bit(28).s_o; c_layer6 := Cat(CSA_132bit(28).c_o(130, 0), 0.U); 
    // seven layer, 1 csa, 4->3
    val s_layer7   = WireInit(0.U(132.W))
    val c_layer7   = WireInit(0.U(132.W))
    CSA_132bit(29).x_i := s_layer6; CSA_132bit(29).y_i := c_layer6;  CSA_132bit(29).c_i := c_layer3(4);   // c_layer5(1)剩余
    s_layer7 := CSA_132bit(29).s_o; c_layer7 := Cat(CSA_132bit(29).c_o(130, 0), 0.U); 
    // eight layer, 1 csa, 3->2
    val s_layer8   = WireInit(0.U(132.W))
    val c_layer8   = WireInit(0.U(132.W))
    CSA_132bit(30).x_i := s_layer7; CSA_132bit(30).y_i := c_layer7;  CSA_132bit(30).c_i := c_layer5(1);   
    s_layer8 := CSA_132bit(30).s_o; c_layer8 := Cat(CSA_132bit(30).c_o(130, 0), 0.U); 
    
    io.result_o(1) := c_layer8
    io.result_o(0) := s_layer8  
}


class ALU_MUL_Input extends Bundle {
    val multiplier   = Input(UInt(64.W)) // 乘数 x   
    val multiplicand = Input(UInt(64.W)) // 被乘数 y  
    val mul_signed   = Input(UInt(4.W))  // 2’b11(signed x signed); 2’b00(unsigned x unsigned)
    val mulw         = Input(UInt(1.W))  // 为高表示是 32 位乘法；
}

class MUL_ALU_Output extends Bundle {
    // val result_hi   = Output(UInt(64.W)) // 高 64位 bits 结果    
    // val result_lo   = Output(UInt(64.W)) // 低 64位 bits 结果  
    val mul_result   = Output(UInt(64.W))    
}  

class MUL extends Module {
    val alu_mul_i = IO(Flipped(Valid(new ALU_MUL_Input))) 
    val mul_alu_o = IO(Valid(new MUL_ALU_Output)) 
    // step 1: x, y符号位拓展
    val x = MuxLookup(alu_mul_i.bits.mul_signed, 0.U(66.W), Seq(
        "b11".U -> Cat(Fill(2, ~alu_mul_i.bits.multiplier(63)), alu_mul_i.bits.multiplier),   // signed   x signed
        "b00".U -> Cat(Fill(2, 0.U),                       alu_mul_i.bits.multiplier)    // unsigned x unsigned
    )) 
    val y = MuxLookup(alu_mul_i.bits.mul_signed, 0.U(66.W), Seq(
        "b11".U -> Cat(Fill(2, ~alu_mul_i.bits.multiplicand(63)), alu_mul_i.bits.multiplicand),   // signed   x signed
        "b00".U -> Cat(Fill(2, 0.U),                         alu_mul_i.bits.multiplicand)    // unsigned x unsigned
    )) 
    // step 2: 生成partial product
    val pp_num  = 33 
    val pp                = WireInit(VecInit(Seq.fill(pp_num)(0.U(132.W))))
    val inst_pp_generator = VecInit(Seq.fill(pp_num)(Module(new pp_generator).io))
    
    inst_pp_generator(0).x_i     :=  x  
    inst_pp_generator(0).y_bus_i :=  Cat(y(1, 0), 0.U)     
    pp(0)                        :=  Cat(Fill(65, inst_pp_generator(0).pp_sum_o(66)), inst_pp_generator(0).pp_sum_o)
    inst_pp_generator(1).x_i     :=  x  
    inst_pp_generator(1).y_bus_i :=  y(3, 1)
    pp(1)                        :=  Cat(Fill(63, inst_pp_generator(0).pp_sum_o(66)), inst_pp_generator(1).pp_sum_o, 0.U, inst_pp_generator(0).pp_c_o)
    for (i <- 2 until pp_num) {
        inst_pp_generator(i).x_i     :=  x  
        inst_pp_generator(i).y_bus_i :=  y(i * 2 + 1, i * 2 - 1)     
        pp(i)                        := Cat(Fill(65 - 2 * i, inst_pp_generator(i).pp_sum_o(66)), inst_pp_generator(i).pp_sum_o, 0.U, inst_pp_generator(i - 1).pp_c_o, Fill(2 * (i - 1), 0.U))
    }
    // step 3: 转置
    // val pp_t_num  = 132
    // val pp_t              = WireInit(VecInit(Seq.fill(pp_t_num)(0.U(33.W)))) 
    // val inst_switch_unit  = Module(new switch_unit)
    // inst_switch_unit.io.pp_i := pp   
    // pp_t                     := inst_switch_unit.io.pp_o  
    // step 4: 输入华莱士树
    val wallace_results  = WireInit(VecInit(Seq.fill(2)(0.U(132.W)))) 
    val wallace_33  = Module(new wallace_33)           
    // for (i <- 0 until pp_t_num) {
        wallace_33.io.pp_i := pp 
        wallace_results     := wallace_33.io.result_o  
    // }
    // step 5: 华莱士树输出结果由RCA相加
    val mul_result = WireInit(0.U(133.W))   
    // for (i <- 0 until 132) {
    val RCA_132bit = Module(new RCA_132bit)
    RCA_132bit.io.x_i := wallace_results(1)
    RCA_132bit.io.y_i := wallace_results(0)
    RCA_132bit.io.c_i := 0.U
    mul_result := RCA_132bit.io.r_o
    // }

    mul_alu_o.bits.mul_result := mul_result
    mul_alu_o.valid           := true.B
}

