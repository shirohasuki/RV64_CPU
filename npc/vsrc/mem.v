`include "./defines.v"
// import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
// import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input byte mask);


// module mem (clk, rst, hold_flag_i, ren_i, wen_i, raddr_i, rdata_o, waddr_i, wdata_i, wmask_i);
//     input             clk;
//     input             rst;

//     input             hold_flag_i;

//     input             ren_i;
//     input             wen_i;
//     input  reg[63:0]  raddr_i;
//     output reg[63:0]  rdata_o;

//     input  reg[63:0]  waddr_i;
//     input  reg[63:0]  wdata_i;
//     input  reg[7:0]   wmask_i;

//     always @(posedge clk) begin
//         // if (ren || rst == 1'b1 || hold_flag_i == 1'b0) pmem_read(raddr, rdata);
//         if (ren_i) pmem_read(raddr_i, rdata_o); 
//         else rdata_o = 64'b0;

//         if (wen_i) pmem_write(waddr_i, wdata_i, wmask_i);

//         if ((ren_i && wen_i) && (raddr_i == waddr_i)) begin
//             //$display("nb");
//             rdata_o = wdata_i;  // 处理读写冲突
//         end
        
//         //if (ren && wen) $display("nb");
//     end
// endmodule

    
import "DPI-C" function void pmem_read( input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write( input longint waddr, input longint wdata, input longint mask);



module mem (
    input               clk,
    input               rst,

    input wire[31:0]    inst_i,
    // input             hold_flag_i,
    input reg[63:0]     inst_addr_i, // 用于验证每级传递的pc
    output reg[63:0]    inst_addr_o, // 用于验证每级传递的pc

    // from ex_mem
    // input reg[2:0]      stall_flag_i,
    // input reg[2:0]      flush_flag_i,
    input reg           axi_busy_i,

    input               ren_i,
    input               wen_i,
    input  reg[63:0]    raddr_i,
    // output reg[63:0]    rdata_o,

    input  reg[63:0]    waddr_i,
    input  reg[63:0]    wdata_i,
    input  reg[7:0]     wmask_i,

    input reg[63:0]     rd_wdata_i,
    input reg[4:0]      rd_waddr_i,
    input reg           reg_wen_i,  // to wb

    // to ram(测试)
    output reg[63:0]    ram_wdata_o,
    output reg[63:0]    ram_waddr_o,
    output reg[63:0]    ram_wmask_o,

    output reg[63:0]    ram_raddr_o,
    input  reg[63:0]    ram_rdata_i, 

    output              ram_ren_o,
    output              ram_wen_o,

    // to mem_wb
    output reg[63:0]       rd_wdata_o,
    output reg[4:0]        rd_waddr_o,
    output reg             reg_wen_o,  // to wb

    // to ctrl 
    input reg              isload_i,
    output reg             isload_o,
    input reg              isstore_i,
    output reg             isstore_o
    // output reg[2:0]     stall_flag_o,
    // output reg[2:0]     flush_flag_o
);

    wire[6:0] opcode; // 7byte (6~0)
    wire[4:0] rd; // 5byte (11~7)
    wire[2:0] func3;
    wire[4:0] rs1;
    wire[4:0] rs2;
    wire[6:0] func7;
    
    assign opcode = inst_i[6:0];
    assign rd     = inst_i[11:7];
    assign func3  = inst_i[14:12];
    assign rs1    = inst_i[19:15];
    assign rs2    = inst_i[24:20];


    assign inst_addr_o = inst_addr_i;
    assign rd_waddr_o  = rd_waddr_i;
    assign reg_wen_o   = reg_wen_i;

    assign isload_o  = isload_i;
    assign isstore_o = isstore_i;

    assign ram_ren_o = ren_i && ~axi_busy_i; // 防止再次读取
    assign ram_wen_o = wen_i && ~axi_busy_i; // TODO：再次读取问题处理的可能有隐患

    reg [63:0]      rdata;
    reg [63:0]      ram_rdata;
    reg [63:0]      device_rdata_tmp;
    reg [63:0]      device_rdata;
    reg             visit_interface;

    assign ram_raddr_o = ren_i && ~visit_interface ? raddr_i     : 64'b0;
   
    assign ram_wdata_o = wen_i && ~visit_interface ? wdata_i     : 64'b0;
    assign ram_waddr_o = wen_i && ~visit_interface ? waddr_i     : 64'b0;


    always @(*) begin
        // if (ren_i && visit_interface) begin
        //     $display("[ read] raddr = %h", raddr_i);             
        // end
        // if (wen_i && visit_interface) begin
        //     $display("[write] waddr = %h, wdata = %h", waddr_i, wdata_i);                  
        // end
        // if (wen_i && ~visit_interface) begin
        //     $display("[write] waddr = %h, wdata = %h", waddr_i, wdata_i);             
        // end
    end

    always @(*) begin
        if ((waddr_i >= 64'ha000_0000) | (raddr_i >= 64'ha000_0000)) begin visit_interface = 1'b1; end 
        else begin visit_interface = 1'b0; end 
    end
 

    always @(*) begin
        // if (visit_interface == 1'b1 && ren_i) pmem_read(raddr_i, device_rdata_tmp);  
        // else device_rdata_tmp = 64'b0;
        if (visit_interface && ren_i) begin pmem_read(raddr_i, device_rdata); end  
        else begin device_rdata = 64'b0; end 
        // if ((ren_i && wen_i) && (raddr_i == waddr_i)) device_rdata_tmp = wdata_i;  // 处理读写冲突
    end

    // always @(posedge clk) begin
    //     device_rdata <= device_rdata_tmp;
    // end

    always @(*) begin
        if (visit_interface && wen_i) begin pmem_write(waddr_i, wdata_i, wmask_o); end 
        // 为了给八位的mask，此处换了ram_wmask_o
        // if (wen_i && (((!ren_i))||((ren_i)&&(raddr_i != waddr_i)))) begin  
    end

    assign ram_rdata = ram_rdata_i;

    always @(*) begin
        if (ren_i == 1'b0) begin rd_wdata_o = rd_wdata_i; end
        else begin
            rdata = visit_interface ? device_rdata : ram_rdata;
            case (opcode) 
                `INST_TYPE_L: begin
                    case (func3)
                        `INST_LB:  begin rd_wdata_o = {{56{rdata[ 7]}}, rdata[ 7:0]}; end
                        `INST_LH:  begin rd_wdata_o = {{48{rdata[15]}}, rdata[15:0]}; end
                        `INST_LW:  begin rd_wdata_o = {{32{rdata[31]}}, rdata[31:0]}; end
                        `INST_LD:  begin rd_wdata_o = {rdata[63:0]};                  end
                        `INST_LBU: begin rd_wdata_o = {56'b0,rdata[7:0]};             end
                        `INST_LHU: begin rd_wdata_o = {48'b0,rdata[15:0]};            end
                        `INST_LWU: begin rd_wdata_o = {32'b0,rdata[31:0]};            end
                        default    begin rd_wdata_o = 64'b0;                          end
                    endcase
                end
                default begin
                    rd_wdata_o = 64'b0;
                end
            endcase
        end
    end 

    reg [63:0] wmask_o;

    always @(*) begin
        if (wen_i) begin
            // if (visit_interface) begin ram_wmask_o = 64'h0; end
            // else begin
                case (wmask_i) 
                    8'b00000001:  wmask_o = 64'h0000_0000_0000_00ff;
                    8'b00000011:  wmask_o = 64'h0000_0000_0000_ffff;
                    8'b00001111:  wmask_o = 64'h0000_0000_ffff_ffff;
                    8'b11111111:  wmask_o = 64'hffff_ffff_ffff_ffff;
                    default begin wmask_o = 64'h0; end
                endcase
            // end
        end
        else begin wmask_o = 64'h0; end
            
    end 

    assign ram_wmask_o = visit_interface ? 64'b0 : wmask_o;

endmodule