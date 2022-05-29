`timescale 1ns/1ps
//`include "./vsrc/soc.v"
//`include "./vsrc/riscv.v"
//`include "./vsrc/regs.v"
//`include "./vsrc/rom.v"

module tb(
    input clk,
    input rst 
);

    wire x3 = tb.soc_inst.riscv_inst.regs_inst.regs[3];
	wire x26 = tb.soc_inst.riscv_inst.regs_inst.regs[26];
	wire x27 = tb.soc_inst.riscv_inst.regs_inst.regs[27];
	
	//rom 初始值
	initial begin
		$readmemh("./vsrc/tb/inst_txt/rv32ui-p-addi.txt",tb.soc_inst.rom_inst.rom_mem);
	end

	initial begin
		//wait(x26 == 32'b1);

		if(x27 == 32'b1) begin
			$display("########  pass  !!!#########");
		end
		else begin
			$display("########  fail  !!!#########");
			$display("fail testnum = %2d", x3);
			for (integer r = 0;r < 32; r = r + 1)begin
				$display("x%2d register value is %d",r,tb.soc_inst.riscv_inst.regs_inst.regs[r]);	
			end	
		end
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