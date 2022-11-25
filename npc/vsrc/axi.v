/*
AXI4个功能
1.Clock & Reset
2.Address
3.Write/Read Data
4.Transmission

AXI-Lite
1.全局通道（
    ACLK：同步时钟；
    ARESETn：同步、低电平有效复位
）

2.支持同时读一个通道，写一个通道（
    AWADDR：读地址 Write Address(aw)
    ARADDR：写地址 Read Address(ar)
）
1 byte->1 地址 

3.通信方式：握手 （
    AWVALID：请求   写指令 --> 发往从机
    AWREADY：准备好 写指令  --> 主机接收
    ARVALID：请求   读指令 --> 发往从机
    ARREADY：准备好 读指令 --> 主机接收
）

4.数据（
    WDATA：Write Data(w) --> 发往从机
    RDATA：Read Data(r)  --> 主机接收
）
 _______                  _______
|       |---(AWDATA)-->  |      |
| 主机  |---(AWVALID)--> | 从机  |
|______|---(AWADDR)-->  |______|
   |_______AWREADY________|

 _______                _______
| 主机  |---(ARADDR)--> | 从机  |
|______|---(ARREAD)--> |______|
   |_______ARDATA________|
   |_______ARVALID_______|//0


5.Write Response(B) (
    BVALID    (s->m)
    BREADY    (m->s)
    BRESP[1:0](s->m)
)

6.其余通道（
    WSTRB：字节mask (m->s)
    RRESP[1:0]：读错误(s->m) 00:ok, 01:NULL, 10:Slave Error, 11:Decode Error       
）
*/

`define DEVICE_SLAVE_ROM                     4'b0000
`define DEVICE_SLAVE_RAM                     4'b0001
`define DEVICE_SLAVE_GPIO                    4'b0010
`define DEVICE_SLAVE_TIMER                   4'b0011

// ============= AXI主机 =========== //
// AXI4协议分为以下几个通道：
// AR：读地址通道
// R ：读数据通道
// AW：写地址通道
// W ：写数据通道
// B ：写反馈通道
module axi #(
    parameter RW_DATA_WIDTH    = 64,                 // 输入数据宽度
    parameter RW_ADDR_WIDTH    = 32,                 // 输入地址宽度
    parameter AXI_DATA_WIDTH   = 64,                 // AXI数据宽度
    parameter AXI_ADDR_WIDTH   = 32,                 // AXI地址宽度
    parameter AXI_SID_WIDTH    = 4,                 // 从机ID宽度
    parameter AXI_STRB_WIDTH   = AXI_DATA_WIDTH/8,  // mask宽度 = 8
    parameter AXI_MID_WIDTH    = 1                  // 主机ID宽度（IF和MEM两个）
)
(
    // clock & reset
    input clk,
    input rst,

    // from IF&MEM 
    input  [AXI_MID_WIDTH - 1:0]        mid_i,            //IF&MEM输入信号  规定IF为0，mem为1
    input                               rvalid_i,         //IF&MEM输入信号
    input                               wvalid_i,         //IF&MEM输入信号
    input  [RW_DATA_WIDTH-1:0]          wdata_i,          //IF&MEM输入信号
    input  [RW_ADDR_WIDTH-1:0]          raddr_i,          //IF&MEM输入信号 
    input  [RW_ADDR_WIDTH-1:0]          waddr_i,          //IF&MEM输入信号
    input  [7:0]                        rsize_i,          //IF&MEM输入信号
    input  [7:0]                        wsize_i,          //IF&MEM输入信号
    //此处可优化，rvalid_i和wvalid_i合并，将rdata_i和wdata_i合并，将rsize_i和wsize_i合并
    
    // to IF&MEM
    output                              rready_o,       //IF&MEM输入信号
    output                              wready_o,       //IF&MEM输入信号
    output reg [RW_DATA_WIDTH-1:0]      rdata_o,        //IF&MEM输入信号

    // AXI-Lite bus

    // Wrtite Address Channel AW：写地址通道
    // s->m
    input                            maxi_awready, //写地址握手通路，表明可以接受写地址信号
    // m->s
    output                           maxi_awvalid, // wen
    output [AXI_ADDR_WIDTH - 1:0]    maxi_awaddr, 

    // Write Channel W ：写数据通道
    // s->m
    input                            maxi_wready, //写数据握手通路，表明可以接受写数据信号
    // m->s
    output                           maxi_wvalid, //写数据握手信号
    output [AXI_DATA_WIDTH - 1:0]    maxi_wdata,
    output                           maxi_wmask, //WSTRB
    
    //  B ：写反馈通道
    // s->m
    input                            maxi_bvalid, //写响应握手信号，表明完成一次写
    // m->s
    output                           maxi_bready, //写反馈握手通路，表面m可以接受写反馈信号
    
    // Read Address Channel AR：读地址通道 
    // s->m
    input                            maxi_arready,
    // m->s
    output                           maxi_arvalid,
    output [AXI_ADDR_WIDTH - 1:0]    maxi_araddr,

    // Read Channel R ：读数据通道
    // s->m
    input [AXI_ADDR_WIDTH - 1:0]     maxi_raddr,
    input                            maxi_rvalid,
    // m->s
    output                           maxi_rready
);


    parameter [1:0]grant0 = 2'h0;
    parameter [1:0]grant1 = 2'h1;
    parameter [1:0]grant2 = 2'h2;
    parameter [1:0]grant3 = 2'h3;

    wire[AXI_MID_WIDTH-1:0] mid;
    wire[AXI_SID_WIDTH-1:0] sid;
    reg[1:0] grant;


    // 主机选择信号
    assign mid = mid_i;
    // 从机仲裁


// AXI write channel
always @(posedge clk or negedge rst) begin
    if (!rst) begin 

    end
    else begin

    end
end

endmodule

