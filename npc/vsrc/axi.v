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

    // //  ==================    AXI-Lite bus
    // // Wrtite Address Channel AW：写地址通道 (修改后) (写请求信号)
    // // s->m
    // input                            maxi_waready_i, // 写地址握手通路，表明可以接受写地址信号
    // // m->s
    // output                           maxi_wavalid_o, // wen
    // output [AXI_ADDR_WIDTH - 1:0]    maxi_waddr_o, 
    // output [AXI_DATA_WIDTH - 1:0]    maxi_wdata_o,
    // output                           maxi_wstrb_o, // WSTRB

    // // Write Channel W ：写数据通道 (写响应信号)
    // // s->m
    // input                            maxi_wdready_i, // 写数据握手通路，表明可以接受写数据信号
    // // input                            maxi_wlast_i, 
    // // m->s
    // output                           maxi_wdvalid_o, // 写数据握手信号 wen 
    
    // // //  B ：写反馈通道
    // // // s->m
    // // input                            maxi_bvalid, // 写响应握手信号，表明完成一次写
    // // // m->s
    // // output                           maxi_bready, // 写反馈握手通路，表明m可以接受写反馈信号
    
    // // Read Address Channel AR：读地址通道 (读请求信号)
    // // s->m
    // input                            maxi_raready_i, 
    // // m->s
    // output                           maxi_ravalid_o,   // ren， 是想要写的信号
    // output [AXI_ADDR_WIDTH - 1:0]    maxi_raddr_o, 

    // // Read Channel R ：读数据通道 (读响应信号)
    // // s->m
    // input [AXI_ADDR_WIDTH - 1:0]     maxi_rdata_i,
    // input                            maxi_rdvalid_i, // 不是ren，是可以写的信号
    // // input                            maxi_rlast_i,   // 读结束的信号
    // // m->s                          
    // output                           maxi_rdready_o


`define DISABLE                              1'b0
`define ENABLE                               1'b1

`define SLAVE_BASE_ADDR                      32'h80000000 // 基地址 64'h80000000

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
    parameter RW_ADDR_WIDTH    = 64,                 // 输入地址宽度

    parameter AXI_DATA_WIDTH   = 64,                 // AXI数据宽度
    parameter AXI_ADDR_WIDTH   = 32,                 // AXI地址宽度

    parameter AXI_BURST_WIDTH  = 8,                 // burst传输长度
    // parameter AXI_STRB_WIDTH   = AXI_DATA_WIDTH/8,  // mask宽度 = 8

    parameter AXI_SID_WIDTH    = 4,                 // 从机ID宽度
    parameter AXI_MID_WIDTH    = 1                  // 主机ID宽度（IF和MEM两个）
)
(
    // clock & reset
    input clk,
    input rst,

    
    // input  [AXI_MID_WIDTH-1:0]          mid_i,          
    input  [AXI_SID_WIDTH-1:0]          sid_i,             //MEM输入信号
    // input  [AXI_BURST_WIDTH-1:0]        burst_len_i,       //MEM输入信号
    
    // ==================   MEM (主机0) 
    // from MEM 
    input                               mem_rvalid_i,         //MEM输入信号 规定1为读0为写(已改)
    input                               mem_wvalid_i,         //MEM输入信号 规定1为读0为写(已改)
    input  [RW_DATA_WIDTH-1:0]          mem_wdata_i,          //MEM输入信号
    input  [RW_ADDR_WIDTH-1:0]          mem_rwaddr_i,          //MEM输入信号 
    // input  [AXI_STRB_WIDTH-1:0]         mem_wmask_i,        //MEM输入信号    
    // to MEM
    output reg [RW_DATA_WIDTH-1:0]      mem_rdata_o,        //MEM输出信号

    // ==================   to RAM (从机1) 
    // from RAM
    input  [RW_DATA_WIDTH-1:0]               ram_rdata_i,          //RAM输出信号 
    input                                    ram_raready_i,        //RAM输出信号
    input                                    ram_rdvalid_i,        //RAM输出信号

    input                                    ram_waready_i,        //RAM输出信号
    input                                    ram_wdready_i,        //RAM输出信号
    // to RAM
    output                                   ram_rdready_o,        //RAM输出信号
    output                                   ram_ravalid_o,        //RAM输出信号
    
    output                                   ram_wavalid_o,        //RAM输出信号
    output                                   ram_wdvalid_o,        //RAM输出信号
    output   [RW_DATA_WIDTH-1:0]             ram_wdata_o,          //RAM输出信号 
    // output   [AXI_STRB_WIDTH-1:0]            ram_wmask_o,          //RAM输出信号     
    output   [AXI_ADDR_WIDTH-1:0]            ram_rwaddr_o         //RAM输出信号 
    


);

// ====================== 状态机 ================ //  
// parameter   ST_IDLE             = 'd0 ,
            
//             ST_WRITE_START      = 'd1 ,
//             ST_WRITE_TRANS      = 'd2 ,
//             ST_WRITE_END        = 'd3 ,

//             ST_READ_START      = 'd4 ,
//             ST_READ_TRANCE     = 'd5 ,
//             ST_READ_END        = 'd6 ;

// ====================== 主从机选择 ================ //    
// 直接通过id单主机, 不仲裁了
    // wire[AXI_MID_WIDTH-1:0] mid;
    
    
    // reg       grant; // 权限信号
    // parameter if_grant0  = 1'b1;
    // parameter mem_grant1 = 1'b0;
    
    // reg       req; // 主机请求信号

//     // 主机仲裁
//     assign mid = mid_i;
    
//     // 从机选择
    
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



    wire[AXI_SID_WIDTH-1:0] sid;
    assign sid = sid_i;


    // 判断读写
    reg rvalid;      
    reg wvalid;   

    reg[AXI_ADDR_WIDTH-1:0]  rwaddr; 
    reg[AXI_DATA_WIDTH-1:0]  rdata;
    reg[AXI_DATA_WIDTH-1:0]  wdata;
    // reg[AXI_STRB_WIDTH-1:0]  wmask = mem_wmask_i;

// ================ 主机仲裁
// 主机输入连线 input
    always @(*) begin
        rvalid = mem_rvalid_i;      
        wvalid = mem_wvalid_i;
        rwaddr = mem_rwaddr_i[31:0];
        wdata  = mem_wdata_i;
    end
// 向主机输出连线 output
    always @(*) begin
        mem_rdata_o = maxi_rdata;
    end


// ================ 从机仲裁
// 向从机输入连线 input
    always @(*) begin
        rdata        = ram_rdata_i;

        maxi_raready = ram_raready_i;
        maxi_rdvalid = ram_rdvalid_i;
        maxi_waready = ram_waready_i;
        maxi_wdready = ram_wdready_i;
    end

// 向从机输出连线 output
    always @(*) begin
        case (sid) 
            `DEVICE_SLAVE_RAM: begin
                ram_ravalid_o    = maxi_ravalid;
                ram_rdready_o    = maxi_rdready;
                ram_wavalid_o    = maxi_waready;
                ram_wdvalid_o    = maxi_wdready;
                if (wvalid) begin
                    // ram_rwaddr_o = maxi_waddr - `SLAVE_BASE_ADDR;
                    ram_rwaddr_o = maxi_waddr;
                    ram_wdata_o  = maxi_wdata;
                    // ram_wmask_o  = wmask;

                end
                else if (rvalid) begin
                    // ram_rwaddr_o = maxi_raddr - `SLAVE_BASE_ADDR;
                    ram_rwaddr_o = maxi_raddr;
                    ram_wdata_o  = 64'b0;
                    // ram_wmask_o  = 8'b0;
                end
                else begin
                    ram_wdata_o  = 64'b0;
                    ram_rwaddr_o = 32'b0;
                    // ram_wmask_o  = 8'b0;
                end
            end
            default begin
                ram_wdata_o  = 64'b0;
                ram_rwaddr_o = 32'b0;
                // ram_wmask_o  = 8'b0;
                ram_ravalid_o = 1'b0;
                ram_rdready_o = 1'b0;
            end
        endcase
    end


// // ============ Function ==========================//
// // 返回number的二进制位宽
// function integer cal_width(input integer number);  begin
//     for (cal_width = 0; number > 0; cal_width++) begin
//         number = number >> 1;
//     end
// end
// endfunction

// ============ READ =============================== //
// ========== AR channel (读请求信号) 
    // Read Address Channel AR：读地址通道 (读请求信号)
    // s->m
    // input                            maxi_raready, 
    // m->s
    // output                           maxi_ravalid,   // ren， 是想要写的信号
    // output [AXI_ADDR_WIDTH - 1:0]    maxi_raddr, 

    reg                 maxi_ravalid;
    reg                 maxi_raready;
    // reg                 maxi_wastart;
    reg[31:0]           maxi_raddr;

    always @(posedge clk) begin
        if (!rst || (maxi_ravalid && maxi_raready)) begin 
            maxi_ravalid <= 1'b0;
        end
        else if (rvalid) begin // 输入ren为1
            maxi_ravalid <= 1'b1;
        end
        else begin
            maxi_ravalid <= maxi_ravalid;
        end
    end // AR握手 // 控制ravalid寄存器

    always @(posedge clk ) begin
        if (!rst) begin 
            maxi_raddr <= 32'b0;
        end
        else if (maxi_raready & maxi_ravalid) begin
            maxi_raddr <= rwaddr;
        end
        else begin
            maxi_raddr <= 32'b0;
        end
    end // 握手成功发送读地址 // 控制raddr寄存器

// ========== R channel (读响应信号) 
    // Read Channel R ：读数据通道 (读响应信号)
    // s->m
    // input [AXI_ADDR_WIDTH - 1:0]     maxi_rdata,
    // input                            maxi_rdvalid, // 不是ren，是可以写的信号
    // input                            maxi_rlast,   // 读结束的信号
    // // m->s                          
    // output                           maxi_rdready

    reg                 maxi_rdvalid;
    reg                 maxi_rdready;
    // reg                 maxi_wastart;
    reg[AXI_DATA_WIDTH-1:0]           maxi_rdata;

    always @(posedge clk) begin
        // if (!rst || maxi_rlast_i) begin 
        if (!rst) begin 
            maxi_rdready <= 1'b0; // 读完回0  // 收到读完信号，maxi_rdready拉高
        end
        else if (maxi_ravalid & maxi_raready) begin
            maxi_rdready <= 1'b1; 
        end
        else begin  
            maxi_rdready <= 1'b1;   
        end
    end // 控制maxi_rdready 寄存器

    always @(posedge clk ) begin
        if (!rst) begin 
            maxi_rdata <= 64'b0;
        end
        else if (maxi_rdvalid & maxi_rdready) begin
            maxi_rdata <= rdata;
        end
        else begin
            maxi_rdata <= maxi_rdata;
        end
    end // 控制maxi_rdata 寄存器// 握手成功，接收读数据


// ============ WRITE =============================== //
// ======== Wrtite Address Channel AW：写地址通道 (写请求信号)
    // s->m
    // input                            maxi_waready, // 写地址握手通路，表明可以接受写地址信号
    // m->s
    // output                           maxi_wavalid, // wen
    // output [AXI_ADDR_WIDTH - 1:0]    maxi_waddr, 
    // output [AXI_DATA_WIDTH - 1:0]    maxi_wdata,
    // output                           maxi_wstrb, // WSTRB

    reg                 maxi_wavalid;
    reg                 maxi_waready;
    // reg                 maxi_wastart;
    reg[31:0]           maxi_waddr = rwaddr;

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_wavalid <= 1'b0;
        end
        else if (wvalid) begin // 如果写使能
            maxi_wavalid <= 1'b1; // Valid 拉高之后一直等待
        end
        else if (maxi_wavalid & maxi_waready) begin // 握手成功
            maxi_wavalid <= 1'b0; // 触发回0
            // maxi_wastart <= 1'b1; // 设置写地址开始
        end
        else begin
            maxi_wavalid <= maxi_wavalid;
        end
    end // 控制wavalid寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_waddr <= 32'b0;
        end
        else if (maxi_wavalid & maxi_waready) begin // 如果写地址使能
            maxi_waddr <= rwaddr; // 写入写地址
        end
        else begin
            maxi_waddr <= 32'b0;
        end
    end // 控制waddr寄存器

// ========== Write Channel W ：写数据通道 (写响应信号)
    // s->m
    // input                            maxi_wdready, // 写数据握手通路，表明可以接受写数据信号
    // m->s
    // output                           maxi_wdvalid, // 写数据握手信号 wen 

    reg                         maxi_wdvalid;
    reg                         maxi_wdready;
    reg                         maxi_wlast;
    // reg                 maxi_wdstart;
    reg[AXI_DATA_WIDTH-1:0]     maxi_wdata;
    reg[AXI_BURST_WIDTH-1:0]    maxi_burst_len;
    reg[7:0]                    maxi_burst_cnt;

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_wdvalid <= 1'b0;
        end
        else if (maxi_wavalid & maxi_waready) begin // 写地址握手成功，则写数据使能拉高
            maxi_wdvalid <= 1'b1;
        end
        else begin
            maxi_wdvalid <= 1'b0;
        end
    end // 控制wdvalid寄存器

    always @(posedge clk) begin
        // if (!rst || maxi_wlast) begin 
        if (!rst) begin 
            maxi_wdata <= 64'b0;
        end
        else if (maxi_wdvalid & maxi_wdready) begin // 如果写地址使能
            maxi_wdata <= wdata; // 写入写地址
        end
        else begin
            maxi_wdata <= 64'b0;
        end
    end // 控制wdata寄存器

    // always @(posedge clk) begin // 只有一个周期的脉冲 // 突发长度小于2则不行
    //     if (maxi_burst_cnt >= maxi_burst_len - 2) begin // 写到最后一个数据
    //         maxi_wlast <= 1'b1;
    //     end
    //     else begin
    //         maxi_wlast <= 1'b0;
    //     end
    // end // 控制 maxi_wlast寄存器

    // always @(posedge clk) begin
    //     if (!rst) begin 
    //         maxi_burst_cnt <= 8'b0;
    //     end
    //     else if (maxi_wdvalid & maxi_wdready) begin // 写到最后一个数据
    //         maxi_burst_cnt <= maxi_burst_cnt + 1;
    //     end
    //     else begin
    //         maxi_burst_cnt <= 8'b0;
    //     end
    // end // 控制maxi_burst_cnt寄存器

    
// ========== 响应通道 =========================== //





endmodule