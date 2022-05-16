module tb; 

    reg clk;
    reg rst;

    initial begin
        clk = 1'b0;
        rst = 1'b0;
    end

    always #10 clk = ~clk; 
    // 10ns翻转一次，为50MHZ的时钟

    initial begin
        clk = 1'b1; 
        rst = 1'b0;

        #30
        rst = 1'b1;    
    end
    
    // 读入 rom 初始值
    initial begin
        $readmemh("./tb/inst_data_ADD.txt", tb.soc_inst.rom_inst.rom_mem);
    end

    
    initial begin
        while (1) begin
            @(posedge clk) begin
                $display("x27 register value is %d", tb.soc_inst.top_inst.regs_inst.regs[27]);
                $display("x28 register value is %d", tb.soc_inst.top_inst.regs_inst.regs[28]);
                $display("x29 register value is %d", tb.soc_inst.top_inst.regs_inst.regs[29]);
                $display("--------------------------------------------------------");
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