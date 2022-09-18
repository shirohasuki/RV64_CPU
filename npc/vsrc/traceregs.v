// import "DPI-C" function void get_regs(input logic [63:0] regs[]);
// module traceregs(
//     input wire[63:0] regs[32]
// );
//     wire[63:0] regs_trace[32];
    
//     // always @(*) begin
//         // for (integer i = 0; i < 32; i = i + 1) begin
//             // assign regs_trace[0] = regs[0];
//         // end // 初始化寄存器
//     // end
//     assign regs_trace[0]  = regs[0];
//     assign regs_trace[1]  = regs[1];
//     assign regs_trace[2]  = regs[2];
//     assign regs_trace[3]  = regs[3];
//     assign regs_trace[4]  = regs[4];
//     assign regs_trace[5]  = regs[5];
//     assign regs_trace[6]  = regs[6];
//     assign regs_trace[7]  = regs[7];
//     assign regs_trace[8]  = regs[8];
//     assign regs_trace[9]  = regs[9];
//     assign regs_trace[10] = regs[10];
//     assign regs_trace[11] = regs[11];
//     assign regs_trace[12] = regs[12];
//     assign regs_trace[13] = regs[13];
//     assign regs_trace[14] = regs[14];
//     assign regs_trace[15] = regs[15];
//     assign regs_trace[16] = regs[16];
//     assign regs_trace[17] = regs[17];
//     assign regs_trace[18] = regs[18];
//     assign regs_trace[19] = regs[19];
//     assign regs_trace[20] = regs[20];
//     assign regs_trace[21] = regs[21];
//     assign regs_trace[22] = regs[22];
//     assign regs_trace[23] = regs[23];
//     assign regs_trace[24] = regs[24];
//     assign regs_trace[25] = regs[25];
//     assign regs_trace[26] = regs[26];
//     assign regs_trace[27] = regs[27];
//     assign regs_trace[28] = regs[28];
//     assign regs_trace[29] = regs[29];
//     assign regs_trace[30] = regs[30];
//     assign regs_trace[31] = regs[31];



//     initial get_regs(regs_trace);
// endmodule