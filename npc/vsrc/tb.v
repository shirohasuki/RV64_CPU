`timescale 1ns/1ps

module tb(
    input clk,
    input rst 
);

    // wire[31:0] x3  = tb.soc_inst.riscv_inst.regs_inst.regs[3];     // x3:表示在第几个测试
	// wire[31:0] x26 = tb.soc_inst.riscv_inst.regs_inst.regs[26];    // x26:表示测试结束
	// wire[31:0] x27 = tb.soc_inst.riscv_inst.regs_inst.regs[27];    // x27:表示是否成功
	
	// rom 初始值
	initial begin
        $readmemh("/home/shiroha/Code/ysyx/ysyx-workbench/npc/image.hex",tb.soc_inst.ram_inst.ram_mem);
    end

    // integer r;
	// //initial begin
    // always @(posedge clk) begin
	// 	    if (x26 == 32'b1) begin
    //          if(x27 == 32'b1) begin
	// 		        $display("############################");
	// 		        $display("########  pass  !!!#########");
	// 		        $display("############################");
	// 	        end
	// 	        else begin
	// 		        $display("############################");
	// 		        $display("########  fail  !!!#########");
	//     		    $display("############################");
    // 			    $display("fail testnum = %2d", x3);
	// 	    	    for(r = 0; r < 32; r = r + 1) begin
	// 	    		    $display("x%2d register value is %d",r,tb.soc_inst.riscv_inst.regs_inst.regs[r]);	
	// 	    	    end	
	// 	        end
    //      end	
	// end


    soc soc_inst (
        .clk  ( clk ),
        .rst  ( rst )
    );

    // initial begin
    //     $display("########  pass  !!!#########");
    // end

endmodule