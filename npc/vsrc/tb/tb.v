`timescale 1ns/1ps
`include "./vsrc/soc.v"
`include "./vsrc/riscv.v"
`include "./vsrc/regs.v"
`include "./vsrc/rom.v"

module tb(
    input clk,
    input rst 
);

    wire[31:0] x3 = tb.soc_inst.riscv_inst.regs_inst.regs[3];
	wire[31:0] x26 = tb.soc_inst.riscv_inst.regs_inst.regs[26];
	wire[31:0] x27 = tb.soc_inst.riscv_inst.regs_inst.regs[27];
	
	//rom 初始值
	initial begin
		$readmemh("./vsrc/tb/inst_txt/rv32ui-p-addi.txt",tb.soc_inst.rom_inst.rom_mem);
	end


	integer r;
	initial begin
/* 		while(1)begin
			@(posedge clk) 
			$display("x27 register value is %d",tb.open_risc_v_soc_inst.open_risc_v_inst.regs_inst.regs[27]);
			$display("x28 register value is %d",tb.open_risc_v_soc_inst.open_risc_v_inst.regs_inst.regs[28]);
			$display("x29 register value is %d",tb.open_risc_v_soc_inst.open_risc_v_inst.regs_inst.regs[29]);
			$display("---------------------------");
			$display("---------------------------");
		end */
		//wait(x26 == 32'b1);

		if(x27 == 32'b1) begin
			$display("############################");
			$display("########  pass  !!!#########");
			$display("############################");
		end
		else begin
			$display("############################");
			$display("########  fail  !!!#########");
			$display("############################");
			$display("fail testnum = %2d", x3);
			for(r = 0;r < 31; r = r + 1)begin
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