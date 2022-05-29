`timescale 1ns/1ps
`include "./vsrc/soc.v"
`include "./vsrc/riscv.v"
`include "./vsrc/regs.v"
`include "./vsrc/rom.v"

module tb(
    input clk,
    input rst 
);

    initial begin
        $readmemb("./vsrc/tb/inst_data_ADD.txt", tb.soc_inst.rom_inst.rom_mem);
    end

    
    always @(posedge clk) begin
        $display("x27 register value is %d", tb.soc_inst.riscv_inst.regs_inst.regs[27]);
        $display("x28 register value is %d", tb.soc_inst.riscv_inst.regs_inst.regs[28]);
        $display("x29 register value is %d", tb.soc_inst.riscv_inst.regs_inst.regs[29]);
        $display("--------------------------------------------------------");
    end

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb);
    end

    soc soc_inst (
        .clk  ( clk ),
        .rst  ( rst )
    );

endmodule 