/*************************************************************************
    > File Name: CSRS.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-12-16 00:42:35
    > Description: 
*************************************************************************/

package CSRS

import chisel3._
import chisel3.util._

import define.MACRO._

class WBU_CSR_Input extends Bundle {
    val csr_wen       = Input(Bool())
    val csr_waddr     = Input(UInt(12.W))
    val csr_wdata     = Input(UInt(64.W))
}

class Bypass_CSR_Input extends Bundle {
    val csr_raddr     = Input(UInt(64.W))
}

class CSR_Bypass_Output extends Bundle {
    val csr_rdata     = Output(UInt(64.W))
}

class Clint_CSR_Input extends Bundle {
    val csr_wen   = Input(Bool())
    val mstatus   = Input(UInt(64.W))
    val mepc      = Input(UInt(64.W))
    val mcause    = Input(UInt(64.W))
}
 
class Clint_CSR_Output extends Bundle {
    val mstatus   = Output(UInt(64.W))
    val mtvec     = Output(UInt(64.W))
    val mepc      = Output(UInt(64.W))
    val mcause    = Output(UInt(64.W))
}


class CSRS extends Module {
    val wb_csr      = IO(new WBU_CSR_Input)
    val bypass_csr  = IO(new Bypass_CSR_Input)
    val csr_bypass  = IO(new CSR_Bypass_Output)
    val clint_csr_i = IO(new Clint_CSR_Input)
    val csr_clint_o = IO(new Clint_CSR_Output)
    
    val mstatus = RegInit(0x0001800.U(64.W))    // 保存全局中断使能, MIE位控制全局是否开启中断
    val mtvec   = RegInit(0.U(64.W))            // 存储异常入口地址（需要跳转到的地址）
    val mepc    = RegInit(0.U(64.W))            // 遇到异常时的pc（执行ecall时的）
    val mcause  = RegInit(0.U(64.W))            // 指示异常的事件

    // to bypass
    csr_bypass.csr_rdata := MuxLookup(bypass_csr.csr_raddr, 0.U, Seq(
        CSR_MSTATUS ->  mstatus,
        CSR_MTVEC   ->  mtvec  ,
        CSR_MEPC    ->  mepc   ,
        CSR_MCAUSE  ->  mcause
    ))

    // write from wbu
    when (wb_csr.csr_wen) {
        switch (wb_csr.csr_waddr) {
            is (CSR_MSTATUS) { mstatus := wb_csr.csr_wdata }
            is (CSR_MTVEC  ) { mtvec   := wb_csr.csr_wdata }
            is (CSR_MEPC   ) { mepc    := wb_csr.csr_wdata }
            is (CSR_MCAUSE ) { mcause  := wb_csr.csr_wdata }
        }
    }

    // read from clint
    csr_clint_o.mstatus := mstatus 
    csr_clint_o.mtvec   := mtvec   
    csr_clint_o.mepc    := mepc    
    csr_clint_o.mcause  := mcause  

    // write from clint
    when (clint_csr_i.csr_wen) {
        mstatus := clint_csr_i.mstatus
        mepc    := clint_csr_i.mepc   
        mcause  := clint_csr_i.mcause 
    }
}


