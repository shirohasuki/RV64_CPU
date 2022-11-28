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
 _______                                 _______
|       |---(write address channel)-->  |      |
| 主机  |---(write data channel)------> | 从机  |
|______|<---(write response channel)-->|______|
   

 _______                              _______
| 主机  |---(read address channel)--> | 从机  |
|______|<---(read data channel)--    |______|



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

`define DISABLE                              1'b0
`define ENABLE                               1'b1
`define DEVICE_SLAVE_ROM                     4'b0000
`define DEVICE_SLAVE_RAM                     4'b0001
`define DEVICE_SLAVE_GPIO                    4'b0010
`define DEVICE_SLAVE_TIMER                   4'b0011

// ============= AXI主机 =========== //
// AXI4协议分为以下几个通道：
// AR：读地址通道 
// R ：读数据通道
// AW：写地址通道 与AXI4-Lite不同此处adress和data我们不分两路
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
    input  [AXI_MID_WIDTH-1:0]          mid_i,            //IF&MEM输入信号  规定IF为0，mem为1
    input  [AXI_SID_WIDTH-1:0]          sid_i,            //IF&MEM输入信号  规定IF为0，mem为1
    input                               rwvalid_i,         //IF&MEM输入信号 规定1为读0为写
    input  [RW_DATA_WIDTH-1:0]          rwdata_i,          //IF&MEM&外设输入信号
    input  [RW_ADDR_WIDTH-1:0]          rwaddr_i,          //IF&MEM输入信号 
    input  [AXI_STRB_WIDTH-1:0]         wmask_i,          //IF&MEM输入信号
    // input  [7:0]                        rsize_i,          //IF&MEM输入信号
    // input  [7:0]                        wsize_i,          //IF&MEM输入信号
    //此处可优化，rvalid_i和wvalid_i合并，将raddr_i和waddr_i合并，将rsize_i和wsize_i合并
    
    // to IF&MEM
    output                              rready_o,       //IF&MEM输入信号
    output                              wready_o,       //IF&MEM输入信号
    output reg [RW_DATA_WIDTH-1:0]      rdata_o,        //IF&MEM输入信号

    // AXI-Lite bus
    // Wrtite Address Channel AW：写地址通道 (修改后) (写请求信号)
    // s->m
    input                            maxi_waready, // 写地址握手通路，表明可以接受写地址信号
    // m->s
    output                           maxi_wavalid, // wen
    output [AXI_ADDR_WIDTH - 1:0]    maxi_waddr, 
    output [AXI_DATA_WIDTH - 1:0]    maxi_wdata,
    output                           maxi_wstrb, // WSTRB

    // Write Channel W ：写数据通道 (写响应信号)
    // s->m
    input                            maxi_wdready, // 写数据握手通路，表明可以接受写数据信号
    // m->s
    output                           maxi_wdvalid, // 写数据握手信号 wen 
    /* TODO: 1.maxi_wdvalid和maxi_wavalid有什么区别？（解决）
             2.是否可以去掉need response 每次valid来了等一个时钟周期
             3.为什么R在AR后
             4.多主机，调用两次和同时写在一个模型里的区别（解决）
             5.取指连上AXI取指就得打拍了，时序违例怎么办，需要停流水线吗*/
    
    //  B ：写反馈通道
    // s->m
    input                            maxi_bvalid, // 写响应握手信号，表明完成一次写
    // m->s
    output                           maxi_bready, // 写反馈握手通路，表明m可以接受写反馈信号
    
    // Read Address Channel AR：读地址通道 (读请求信号)
    // s->m
    input                            maxi_raready, 
    // m->s
    output                           maxi_ravalid,   // ren， 是想要写的信号
    output [AXI_ADDR_WIDTH - 1:0]    maxi_raddr, 

    // Read Channel R ：读数据通道 (读响应信号)
    // s->m
    input [AXI_ADDR_WIDTH - 1:0]     maxi_rdata,
    input                            maxi_rdvalid, // 不是ren，是可以写的信号
    input                            maxi_rlast,   // 读结束的信号
    // m->s                          
    output                           maxi_rdready
);

    wire rvalid_i;         
    wire wvalid_i;  
    // 判断读写
    assign rvalid_i = rwvalid_i; 
    assign wvalid_i = ~rwvalid_i; 
  
// ====================== 主从机选择 ================ //    
// 直接通过id单主机, 不仲裁了
    wire[AXI_MID_WIDTH-1:0] mid;
    wire[AXI_SID_WIDTH-1:0] sid;
    
    // reg       grant; // 权限信号
    // parameter if_grant0  = 1'b1;
    // parameter mem_grant1 = 1'b0;
    
    // reg       req; // 主机请求信号

    // 主机仲裁
    assign mid = mid_i;
// /* TODO: 主机仲裁还没写*/
    
    // 从机选择
    assign sid = sid_i;
// always @(*) begin
//     // 初始化片选信号
//     reg s0_cs = `DISABLE;
//     reg s1_cs = `DISABLE;
//     reg s2_cs = `DISABLE;
//     reg s3_cs = `DISABLE;
//     // 选择地址对应的从机
//     case (sid) 
//         `DEVICE_SLAVE_ROM: begin
//             s0_cs = `ENABLE;
//         end
//         `DEVICE_SLAVE_RAM: begin
//             s1_cs = `ENABLE;
//         end
//         `DEVICE_SLAVE_GPIO: begin
//             s2_cs = `ENABLE;
//         end
//         `DEVICE_SLAVE_TIMER: begin
//             s3_cs = `ENABLE;
//         end
//         default: begin

//         end
//     endcase
// end

    reg[AXI_ADDR_WIDTH - 1:0] maxi_waddr_buff;
    reg[AXI_ADDR_WIDTH - 1:0] maxi_raddr_buff;
    reg[AXI_DATA_WIDTH - 1:0] maxi_wdata_buff;
    reg                       maxi_wmask_buff;
    reg[AXI_DATA_WIDTH - 1:0] maxi_rdata_buff; // 用于等待握手期间缓存数据的buff

// ============ READ =============================== //
// ========== AR channel (读请求信号) 
always @(posedge clk or negedge rst) begin
    if (!rst) begin 
        maxi_ravalid <= 1'b0;
    end
    else begin
        if (rvalid_i) begin // 输入ren为1
            maxi_ravalid <= 1'b1;
            maxi_raddr_buff <= rwaddr_i;
        end
        else begin
            maxi_ravalid <= 1'b0;
        end
    end
end // AR握手

always @(posedge clk or negedge rst) begin
    if (!rst) begin 
        maxi_ravalid <= 1'b0;
    end
    else begin
        if (maxi_raready & maxi_ravalid) begin
            maxi_raddr <= maxi_raddr_buff;
        end
    end
end // 握手成功发送读地址

// ========== R channel (读响应信号) 
always @(posedge clk or negedge rst) begin
    if (!rst) begin 
        maxi_rdready <= 1'b1;
    end
    else begin
        if (maxi_rlast) begin
            maxi_rdready <= 1'b1;
        end
    end
end // 收到读完信号，maxi_rdready拉高

always @(posedge clk or negedge rst) begin
    if (!rst) begin 
        maxi_rdready <= 1'b1;
    end
    else begin
        if (maxi_rdvalid & maxi_rdready) begin
            maxi_rdata_buff <= rwdata_i;
        end
    end
end // 握手成功发送读地址


// ============ WRITE =============================== //

endmodule