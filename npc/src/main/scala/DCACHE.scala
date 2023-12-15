/*************************************************************************
    > File Name: DCACHE.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:08:32
    > Description: 
*************************************************************************/

package DCACHE

import chisel3._
import chisel3.util._
import define.function._

import DPIC.pmem_read_Dcacheline
import DPIC.pmem_write_Dcacheline
import DPIC.ctrace_dcache


class EXU_DCACHE_Input extends Bundle{
    val rd_req  = Flipped(Valid(new Bundle { val raddr = UInt(64.W)}))
    val wr_req  = Flipped(Valid(new Bundle {
        val waddr = UInt(64.W) 
        val wdata = UInt(64.W) 
        val wmask = UInt(8.W) 
    }))
}

class DCACHE_MEM_Output extends Bundle{
    val resp = Valid(new Bundle{ 
        val rdata = UInt(64.W)
        // val offsetbit = UInt(3.W)
    })
}


class DCACHE extends Module {
    val ex_dcache  = IO(new EXU_DCACHE_Input)
    val dcache_mem = IO(new DCACHE_MEM_Output)

    val dcache_ctrl = IO(new Bundle { val dcache_busy  = Output(Bool())})


    val nSets = 16 // 组数:16组
    val nWays =  8 // 路数:8路

    // 1. define DCache
    // memory
    // val vMem    = Reg(Vec(16, UInt(8.W)))             // 16组，8行，每行占一位
    // val dMem    = Reg(Vec(16, UInt(8.W)))             // 16组，8行，每行占一位
    val vMem    = RegInit(VecInit(Seq.fill(nSets)(0.U(8.W))))             // 16组，8行，每行占一位
    val dMem    = RegInit(VecInit(Seq.fill(nSets)(0.U(8.W))))             // 16组，8行，每行占一位
    val ageMem  = Reg(Vec(16, UInt(7.W)))             // 16组，三层age位
    val tagMem  = Reg(Vec(16, (Vec(8, UInt(55.W)))))   // 16组，8行tag 
    val dataMem = Reg(Vec(16, (Vec(8, (Vec(4, UInt(64.W))))))) // 16组，8行,每行4个64位

    // Reg
    // val ren_reg     = RegInit(false.B)
    // val wen_reg     = RegInit(false.B)    

    // wire
    val raddr   = ex_dcache.rd_req.bits.raddr
    // val ren     = WireInit(false.B)
    // val wen     = WireInit(false.B)    
    // ren         := ex_dcache.rd_req.valid | ren_reg
    // wen         := ex_dcache.wr_req.valid | wen_reg
    val ren     = ex_dcache.rd_req.valid 
    val wen     = ex_dcache.wr_req.valid 
    val waddr   = ex_dcache.wr_req.bits.waddr
    val wdata   = ex_dcache.wr_req.bits.wdata
    val wmask   = ex_dcache.wr_req.bits.wmask

    val tag     = Mux(ren, raddr(63, 9), waddr(63, 9))
    val set_idx = Mux(ren, raddr(8, 5), waddr(8, 5))
    val way_idx = WireInit(0.U(3.W))
    val offset  = Mux(ren, raddr(4, 3), waddr(4, 3))
    val offsetbit  = Mux(ren, raddr(2, 0), waddr(2, 0))
    val rdata   = WireInit(0.U(64.W))

    // 2. FSM
    val sIdle :: sHit :: sMiss :: sWb :: Nil = Enum(4)   // sIdle 00 sHit 01 sMiss 10 sWb 11
    val state      = RegInit(sIdle)
    val next_state = WireInit(sIdle)

    val hit             = WireInit(false.B)
    val miss            = WireInit(false.B)
    val full            = WireInit(false.B)
    val dirty           = WireInit(false.B)
    val rd_complete     = RegInit(false.B)
    val reload_complete = RegInit(false.B)
    val wb_complete     = RegInit(false.B)

    // ren_reg := Mux(ex_dcache.rd_req.valid, true.B, 
    //                 Mux(state === sHit, false.B, ren_reg))
    // wen_reg := Mux(ex_dcache.wr_req.valid, true.B, 
    //                 Mux(state === sHit, false.B, wen_reg))


    switch (state) {
        is (sIdle) {
            when (hit) {
                next_state := sHit
            }.elsewhen (dirty) {
                next_state := sWb
            }.elsewhen (miss) {
                next_state := sMiss
            }
        }
        is (sHit) {
            when (hit) {
                next_state := sHit
            }.elsewhen (dirty) {
                next_state := sWb
            }.elsewhen (miss) {
                next_state := sMiss
            }.otherwise {
                next_state := sIdle
            }
        }
        is (sMiss) {
            when (dirty) {
                next_state := sWb
            }.elsewhen (reload_complete) {
                next_state := sHit
            }.otherwise {
                next_state := sMiss
            }
        }
        is (sWb) {
            when (wb_complete) {
                next_state := sHit
            }.otherwise {
                next_state := sWb
            }
        }
    }
    state := next_state
    
    // 3. IDLE    
    val indices  = (0 until nWays).map(i => Mux(vMem(set_idx)(i) & (tag === tagMem(set_idx)(i)), 1.U, 0.U)).reverse.reduce(_ ## _)

    val hit_line = PriorityEncoder(indices) 
    val top_line = PopCount((0 until nWays).map(i => vMem(set_idx)(i)))
    val lru_line = Lookup(ageMem(set_idx), 0.U, Seq(
                            BitPat("b11?1???")   ->  0.U,
                            BitPat("b11?0???")   ->  1.U,
                            BitPat("b10??1??")   ->  2.U,
                            BitPat("b10??0??")   ->  3.U,
                            BitPat("b0?1??1?")   ->  4.U,
                            BitPat("b0?1??0?")   ->  5.U,
                            BitPat("b0?0???1")   ->  6.U,
                            BitPat("b0?0???0")   ->  7.U
                        ))

    when (ren || wen) {
        hit         := indices =/= 0.U
        miss        := indices === 0.U
        full        := Mux(PopCount((0 until nWays).map(i => vMem(set_idx)(i))) === 8.U, 1.U, 0.U)
        dirty       := full & miss & dMem(set_idx)(lru_line)

        way_idx     := Mux(hit, hit_line, 
                        Mux(dirty, lru_line,
                        Mux(miss, top_line, 0.U))) // 没满就按顺序取,满了根据LRU判断
    }

    // 4. HIT
    // Read
    rdata := MuxLookup(offsetbit, 0.U, Seq(
        0.U -> dataMem(set_idx)(way_idx)(offset)(63, 0),
        1.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 1*8)),
        2.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 2*8)),
        3.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 3*8)),
        4.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 4*8)),
        5.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 5*8)),
        6.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 6*8)),
        7.U -> ZEXT(dataMem(set_idx)(way_idx)(offset)(63, 7*8))
    )) // TODO:B溃了位数不给用UInt, 怎么改写哇

    dcache_mem.resp.valid          := ren && next_state === sHit// 1.U //state === sHit // (ren && state === sHit )
    dcache_mem.resp.bits.rdata     := Mux(dcache_mem.resp.valid, rdata, 0.U)
    // dcache_mem.resp.bits.offsetbit := Mux(dcache_mem.resp.valid, offsetbit, 0.U)

    rd_complete := Mux(dcache_mem.resp.valid, 1.U, 0.U)

    // Write
    val masked_wdata     = WireInit(0.U(64.W))
    val wmask_64         = WireInit(0.U(64.W))
    // for (i <- 0 until 8) { wmask_64(i * 8 + 7, i * 8) := Mux(wmask(i)===1.U, "b11111111".U, 0.U)}
    // wmask_64 := VecInit.tabulate(8) { i => Fill(8, wmask(i)) }.reduce(_ | _)
    wmask_64 := Cat(Fill(8, wmask(7)), Fill(8, wmask(6)), Fill(8, wmask(5)), Fill(8, wmask(4)),
                    Fill(8, wmask(3)), Fill(8, wmask(2)), Fill(8, wmask(1)), Fill(8, wmask(0)))
    // val masked_wdata_tmp = (0 until 64).map(i => Mux(wmask(i / 8), wdata(i), 0.U)).reverse.reduce(_ ## _)
    
    val old_data         = WireInit(0.U(64.W))
    // val shift_data       = WireInit(0.U(64.W))
    old_data   := dataMem(set_idx)(way_idx)(offset)
    // shift_data := ((wdata & wmask_64) | (old_data & ~wmask_64)) << (offsetbit*8.U)

    // masked_wdata := MuxLookup(offsetbit, 0.U, Seq(
    //     0.U -> shift_data(63, 0),
    //     1.U -> Cat(shift_data(63, 1*8), old_data(1*8-1, 0)),
    //     2.U -> Cat(shift_data(63, 2*8), old_data(2*8-1, 0)),
    //     3.U -> Cat(shift_data(63, 3*8), old_data(3*8-1, 0)),
    //     4.U -> Cat(shift_data(63, 4*8), old_data(4*8-1, 0)),
    //     5.U -> Cat(shift_data(63, 5*8), old_data(5*8-1, 0)),
    //     6.U -> Cat(shift_data(63, 6*8), old_data(6*8-1, 0)),
    //     7.U -> Cat(shift_data(63, 7*8), old_data(7*8-1, 0))
    // )) // TODO:B溃了位数不给用UInt, 怎么改写哇

    masked_wdata := MuxLookup(offsetbit, 0.U, Seq(
        0.U -> ((wdata & wmask_64) | (old_data & ~wmask_64)),
        1.U -> Cat(((wdata(63-1*8, 0) & wmask_64(63-1*8, 0)) | (old_data(63, 1*8) & ~wmask_64(63-1*8, 0))), old_data(1*8-1, 0)),
        2.U -> Cat(((wdata(63-2*8, 0) & wmask_64(63-2*8, 0)) | (old_data(63, 2*8) & ~wmask_64(63-2*8, 0))), old_data(2*8-1, 0)),
        3.U -> Cat(((wdata(63-3*8, 0) & wmask_64(63-3*8, 0)) | (old_data(63, 3*8) & ~wmask_64(63-3*8, 0))), old_data(3*8-1, 0)),
        4.U -> Cat(((wdata(63-4*8, 0) & wmask_64(63-4*8, 0)) | (old_data(63, 4*8) & ~wmask_64(63-4*8, 0))), old_data(4*8-1, 0)),
        5.U -> Cat(((wdata(63-5*8, 0) & wmask_64(63-5*8, 0)) | (old_data(63, 5*8) & ~wmask_64(63-5*8, 0))), old_data(5*8-1, 0)),
        6.U -> Cat(((wdata(63-6*8, 0) & wmask_64(63-6*8, 0)) | (old_data(63, 6*8) & ~wmask_64(63-6*8, 0))), old_data(6*8-1, 0)),
        7.U -> Cat(((wdata(63-7*8, 0) & wmask_64(63-7*8, 0)) | (old_data(63, 7*8) & ~wmask_64(63-7*8, 0))), old_data(7*8-1, 0))
    )) // TODO:B溃了位数不给用UInt, 怎么改写哇


    when (wen && hit) {
        dataMem(set_idx)(way_idx)(offset)  := masked_wdata
        dMem(set_idx) := dMem(set_idx).bitSet(way_idx, true.B) 
    }


    // 5. MISS
    // not dirty
    val DPIC_pmem_read_Dcacheline    = Module(new pmem_read_Dcacheline())

    when ((ren || wen) && miss && ~dirty) {
        DPIC_pmem_read_Dcacheline.io.raddr      := Cat(raddr(63, 5), Fill(5, 0.U))
        for (i <- 0 until 4) { dataMem(set_idx)(way_idx)(i) := DPIC_pmem_read_Dcacheline.io.rdata(i)}
        tagMem(set_idx)(way_idx)    := tag
        dMem(set_idx)               := dMem(set_idx).bitSet(way_idx, false.B) 
        vMem(set_idx)               := vMem(set_idx).bitSet(way_idx, true.B) 
        reload_complete                         := 1.U
    }.otherwise {
        reload_complete                         := 0.U
    }


    // is dirty(WB)
    val DPIC_pmem_write_Dcacheline = Module(new pmem_write_Dcacheline())
    when ((ren || wen) && miss && dirty) {
        // 把dirty的 cache line 写进下一级
        DPIC_pmem_write_Dcacheline.io.wen          := (ren || wen) && miss && dirty
        DPIC_pmem_write_Dcacheline.io.waddr        := Cat(tagMem(set_idx)(way_idx), set_idx, Fill(5, 0.U))
        for (i <- 0 until 4) { DPIC_pmem_write_Dcacheline.io.wdata(i) := dataMem(set_idx)(way_idx)(i)}
        // read需要的 Data block 进 cache 
        DPIC_pmem_read_Dcacheline.io.raddr      := Cat(waddr(63, 5), Fill(5, 0.U))
        for (i <- 0 until 4) { dataMem(set_idx)(way_idx)(i) := DPIC_pmem_read_Dcacheline.io.rdata(i)}
        dMem(set_idx).bitSet(way_idx, false.B) 
        wb_complete := 1.U
    }.otherwise {
        wb_complete := 0.U
    }
    

    // 伪LRU
    ageMem(set_idx) := ageMem(set_idx).bitSet(6.U, Mux(way_idx > 3.U, true.B, false.B))

    ageMem(set_idx) := ageMem(set_idx).bitSet(5.U, Mux(ageMem(set_idx)(6) === 1.U, (ageMem(set_idx)(5) & 1.U).asBool,  // 维持原值
                    Mux(way_idx > 1.U, true.B, false.B))) 
    ageMem(set_idx) := ageMem(set_idx).bitSet(4.U, Mux(ageMem(set_idx)(6) === 0.U, (ageMem(set_idx)(4) & 1.U).asBool,  // 维持原值
                    Mux(way_idx > 5.U, true.B, false.B)))

    ageMem(set_idx) := ageMem(set_idx).bitSet(3.U, Mux(ageMem(set_idx)(5) === 1.U, (ageMem(set_idx)(3) & 1.U).asBool,  // 维持原值
                    Mux(way_idx === 1.U, true.B, false.B)))
    ageMem(set_idx) := ageMem(set_idx).bitSet(2.U, Mux(ageMem(set_idx)(5) === 0.U, (ageMem(set_idx)(2) & 1.U).asBool,  // 维持原值
                    Mux(way_idx === 3.U, true.B, false.B))) 

    ageMem(set_idx) := ageMem(set_idx).bitSet(1.U, Mux(ageMem(set_idx)(4) === 1.U, (ageMem(set_idx)(1) & 1.U).asBool,  // 维持原值
                    Mux(way_idx === 5.U, true.B, false.B))) 
    ageMem(set_idx) := ageMem(set_idx).bitSet(0.U, Mux(ageMem(set_idx)(4) === 0.U, (ageMem(set_idx)(0) & 1.U).asBool,  // 维持原值
                    Mux(way_idx === 7.U, true.B, false.B))) 


    // DPIC Ctrace
    val DPIC_ctrace_dcache_record    = Module(new ctrace_dcache())
    when (ren || wen) {
        DPIC_ctrace_dcache_record.io.set_idx        := set_idx
        DPIC_ctrace_dcache_record.io.way_idx        := way_idx
        DPIC_ctrace_dcache_record.io.age            := lru_line//ageMem(set_idx)
        DPIC_ctrace_dcache_record.io.dirty          := dMem(set_idx)
        DPIC_ctrace_dcache_record.io.tag            := tag
        when (ren) { for (i <- 0 until 4) { DPIC_ctrace_dcache_record.io.cacheline(i) := DPIC_pmem_read_Dcacheline.io.rdata(i)}} 
        when (wen) { 
            for (i <- 0 until 4) { 
                when (i.asUInt =/= offset) {
                    DPIC_ctrace_dcache_record.io.cacheline(i) := dataMem(set_idx)(way_idx)(i)
                }.otherwise {
                    DPIC_ctrace_dcache_record.io.cacheline(i) := masked_wdata
                }
            }
        }
        // when (wen) { for (i <- 0 until 4) { DPIC_ctrace_dcache_record.io.cacheline(i) := dataMem(set_idx)(way_idx)(i)}}
    }


    // 7. to ctrl
    val dcache_miss     = next_state === sMiss //|| state === sMiss
    val dcache_wb       = next_state === sWb   //|| state === sWb
    val dcache_latency  = RegInit(false.B)  // 同步读写自带的一周期latency
    when (next_state === sHit && ~dcache_latency) {
        dcache_latency := 1.U
    }.otherwise {
        dcache_latency := 0.U
    }
    dcache_ctrl.dcache_busy := dcache_miss | dcache_wb //| dcache_latency 
}
