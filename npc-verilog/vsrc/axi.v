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

    parameter AXI_BURST_WIDTH  = 8,                  // burst传输长度
    parameter AXI_STRB_WIDTH   = AXI_DATA_WIDTH,     //8     // mask宽度

    parameter AXI_SID_WIDTH    = 4,                  // 从机ID宽度
    parameter AXI_MID_WIDTH    = 1                   // 主机ID宽度（IF和MEM两个）
)
(
    // clock & reset
    input clk,
    input rst,

    // from mem
    // input  wire[63:0]                      inst_addr_i,  // 用于调试
    // // to ram
    // output wire[63:0]                      inst_addr_o,  // 用于调试

    // to ctrl
    output reg                     axi_busy_o,
    output reg                     axi_busy_end_o,
    
    // input  [AXI_MID_WIDTH-1:0]          mid_i,          
    // input  [AXI_SID_WIDTH-1:0]          sid_i,             //MEM输入信号
    // input  [AXI_BURST_WIDTH-1:0]        burst_len_i,       //MEM输入信号
    
    // ==================   MEM (主机0) 
    // from MEM 
    // input                               mem_rvalid_i,         //MEM输入信号 规定1为读0为写(已改)
    // input                               mem_wvalid_i,         //MEM输入信号 规定1为读0为写(已改)
    // input  [RW_DATA_WIDTH-1:0]          mem_wdata_i,          //MEM输入信号
    // input  [RW_ADDR_WIDTH-1:0]          mem_rwaddr_i,          //MEM输入信号 
    // input  [AXI_STRB_WIDTH-1:0]         mem_wmask_i,        //MEM输入信号    
    // to MEM
    // output reg [RW_DATA_WIDTH-1:0]      mem_rdata_o,        //MEM输出信号

    // ==================   IF (主机1) 
    // input                               if_rvalid_i,         //IF输入信号 
    // input [AXI_ADDR_WIDTH-1:0]          if_raddr_i,         //IF输入信号 
    // output [RW_DATA_WIDTH-1:0]          if_rdata_o,         //IF输入信号 
    
    // output                              if_rvalid_o,         //IF输入信号 
    // output  [AXI_ADDR_WIDTH-1:0]        if_raddr_o,         //IF输入信号 
    // input   [RW_DATA_WIDTH-1:0]         if_rdata_i

    // ==================   to RAM (从机1) 
    // from RAM
    // input                                    ram_waready_i,        //RAM输出信号
    // input                                    ram_wdready_i,        //RAM输出信号

    // output                                   ram_wavalid_o,        // RAM输出信号
    // output                                   ram_wdvalid_o,        // RAM输出信号
    // output   [RW_DATA_WIDTH-1:0]             ram_wdata_o,          // RAM输出信号 
    // output   [AXI_STRB_WIDTH-1:0]            ram_wmask_o,          // RAM输出信号     

    // from core
    input                                       core_ren_i,            // RAM输出信号
    input [RW_ADDR_WIDTH-1:0]                   core_raddr_i,
    // to core
    output reg[RW_DATA_WIDTH-1:0]               core_rdata_o,          // RAM输出信号 
    // from ram
    input                                       ram_rready_i,            // RAM输出信号
    input [RW_DATA_WIDTH-1:0]                   ram_rdata_i,                  
    // to RAM
    output reg[AXI_ADDR_WIDTH-1:0]              ram_raddr_o,           // RAM输出信号                           
    output                                      ram_ren_o,

    // from core
    input                                       core_wen_i,  
    input [RW_ADDR_WIDTH-1:0]                   core_waddr_i,
    input reg[RW_DATA_WIDTH-1:0]                core_wdata_i,
    input reg[AXI_STRB_WIDTH-1:0]               core_wmask_i,
    // from ram
    input                                       ram_wready_i, 
    input                                       ram_bvalid_i,   
    // to RAM
    output reg[AXI_ADDR_WIDTH-1:0]              ram_waddr_o, 
    output reg[AXI_DATA_WIDTH-1:0]              ram_wdata_o,
    output reg[AXI_STRB_WIDTH-1:0]              ram_wmask_o,
    output                                      ram_wen_o
    // output                                      ram_bready_o,
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

    // reg [AXI_SID_WIDTH-1:0] sid_i = 4'b0001;

    // wire[AXI_SID_WIDTH-1:0] sid;
    // assign sid = sid_i;


    reg[AXI_ADDR_WIDTH-1:0]  rwaddr; 
    reg[AXI_DATA_WIDTH-1:0]  wdata; 

    // assign inst_addr_o = inst_addr_i;

    always @(posedge clk) begin
        if (!rst) begin 
            rwaddr <= 32'b0;
        end
        else if (core_ren_i) begin
            rwaddr <= core_raddr_i[31:0];
        end
        else if (core_wen_i) begin
            rwaddr <= core_waddr_i[31:0];
        end
        else begin
            rwaddr <= rwaddr;
        end
    end // 握手成功发送读地址 // 控制rwaddr寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            wdata <= 64'b0;
        end
        else if (core_wen_i) begin
            wdata <= core_wdata_i;
        end
        else begin
            wdata <= wdata;
        end
    end // 控制wdata寄存器

    // reg[AXI_DATA_WIDTH-1:0]  rdata;
    // reg[AXI_DATA_WIDTH-1:0]  wdata;
    // reg[AXI_STRB_WIDTH-1:0]  wmask = mem_wmask_i;

    reg ren_i;
    reg ren_o;
    reg rready;
    
    reg wen_i; 
    reg wen_o;
    reg wready;

    reg bvalid; 
    
    reg axi_busy;
    reg busy_end;
    // reg [2:0] stall_flag;
    // reg [2:0] flush_flag;

// ================ 主机仲裁(转换接口，内部reg不再这决定)
// 主机输入连线 input
    always @(*) begin
        ren_i = core_ren_i;
        wen_i = core_wen_i;
    end
// 向主机输出连线 output
    always @(*) begin
        core_rdata_o = maxi_rdata;
    end


// ================ 从机仲裁(转换接口，内部reg不再这决定)
// 向从机输入连线 input
    always @(*) begin
        rready = ram_rready_i;      
        wready = ram_wready_i;  
        bvalid = ram_bvalid_i;
    end

// 向从机输出连线 output
    always @(*) begin
        ram_raddr_o = maxi_raddr;
        ram_ren_o   = ren_o;

        ram_waddr_o = maxi_waddr;
        ram_wdata_o = maxi_wdata;
        ram_wmask_o = maxi_wmask;
        ram_wen_o   = wen_o;       
        // case (sid) 
            // `DEVICE_SLAVE_RAM: begin
            //     ram_ravalid_o    = maxi_ravalid;
            //     ram_rdready_o    = maxi_rdready;
            //     // ram_wavalid_o    = maxi_waready;
            //     // ram_wdvalid_o    = maxi_wdready;
            //     // if (wvalid) begin
            //     //     // ram_rwaddr_o = maxi_waddr - `SLAVE_BASE_ADDR;
            //     //     ram_rwaddr_o = maxi_waddr;
            //     //     // ram_wdata_o  = maxi_wdata;
            //     //     // ram_wmask_o  = wmask;
            //     // end
            //     // else 
            //     if (rvalid) begin
            //         // ram_rwaddr_o = maxi_raddr - `SLAVE_BASE_ADDR;
            //         ram_rwaddr_o = maxi_raddr;
            //         // ram_wdata_o  = 64'b0;
            //         // ram_wmask_o  = 8'b0;
            //     end
            //     else begin
            //         // ram_wdata_o  = 64'b0;
            //         ram_rwaddr_o = 32'b0;
            //         // ram_wmask_o  = 8'b0;
            //     end
            // end
            // default begin
            //     // ram_wdata_o  = 64'b0;
            //     ram_rwaddr_o = 32'b0;
            //     // ram_wmask_o  = 8'b0;
            //     ram_ravalid_o = 1'b0;
            //     ram_rdready_o = 1'b0;
            // end
        // endcase
    end

// ===============  控制流水线
    always @(*) begin
        // axi_busy_o = axi_busy | maxi_ravalid_i;
        axi_busy_o = axi_busy;
        axi_busy_end_o = busy_end;
    end

// // ============ Function ==========================//
// // 返回number的二进制位宽
// function integer cal_width(input integer number);  begin
//     for (cal_width = 0; number > 0; cal_width++) begin
//         number = number >> 1;
//     end
// end
// endfunction

// ================== READ ========================= //
// ========== AR channel (读请求信号) 
    // Read Address Channel AR：读地址通道 (读请求信号)
    // s->m
    // input                            maxi_raready, 
    // m->s
    // output                           maxi_ravalid,   // ren， 是想要写的信号
    // output [AXI_ADDR_WIDTH - 1:0]    maxi_raddr, 

    reg                                 maxi_ravalid;
    reg                                 maxi_raready;
    reg[31:0]                           maxi_raddr;
    
    reg                                 maxi_rdvalid;
    reg                                 maxi_rdready;
    reg [AXI_DATA_WIDTH-1:0]            maxi_rdata;

    assign maxi_rdvalid = 1'b1;

    always @(posedge clk) begin
        if (!rst || (maxi_ravalid && maxi_raready)) begin 
            maxi_ravalid <= 1'b0;
        end
        else if (ren_i) begin // 输入ren为1
            maxi_ravalid <= 1'b1;
        end
        else begin
            maxi_ravalid <= maxi_ravalid;
        end
    end // AR握手 // 控制ravalid寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_raready <= 1'b0;
        end
        else begin
            maxi_raready <= rready;
        end
    end // 握手成功// 控制maxi_raready寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_raddr <= 32'b0;
        end
        else if (maxi_raready & maxi_ravalid) begin
            maxi_raddr <= rwaddr;
        end
        else begin
            maxi_raddr <= 32'b0;
        end
    end // 控制raddr寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            ren_o <= 1'b0;
        end
        else if (maxi_raready & maxi_ravalid) begin
            ren_o <= 1'b1;
        end
        else begin
            ren_o <= 1'b0;
        end
    end // 控制ren寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            axi_busy <= 1'b0;
        end
        else if ((core_ren_i) || (core_wen_i)) begin
            axi_busy <= 1'b1;
        end
        // else if ((maxi_rdready && maxi_rdvalid) || (maxi_bvalid && maxi_bready)) begin
        else if (busy_end) begin
            axi_busy <= 1'b0;
        end
        else begin
            axi_busy <= axi_busy;
        end
    end // 控制axi_busy寄存器
    
    // always @(*) begin
    //     if (!rst) begin 
    //         axi_busy = 1'b0;
    //     end
    //     else if (maxi_ravalid) begin
    //         axi_busy = 1'b1;
    //     end
    //     else if (maxi_rdready & maxi_rdvalid) begin
    //         axi_busy = 1'b0;
    //     end
    //     else begin
    //         axi_busy = 1'b0;
    //     end
    // end // 控制axi_busy寄存器

// ========== R channel (读响应信号) 
    // Read Channel R ：读数据通道 (读响应信号)
    // s->m
    // input [AXI_ADDR_WIDTH-1:0]       maxi_rdata,
    // input                            maxi_rdvalid, // 不是ren，是可以写的信号
    // input                            maxi_rlast,   // 读结束的信号
    // m->s                          
    // output                           maxi_rdready

    always @(posedge clk) begin
        // if (!rst || maxi_rlast_i) begin 
        if (!rst) begin 
            maxi_rdready <= 1'b0; // 读完回0  // 收到读完信号，maxi_rdready拉高
        end
        else if (maxi_ravalid & maxi_raready) begin
            maxi_rdready <= 1'b1; 
        end
        else if (~maxi_ravalid) begin
            maxi_rdready <= 1'b0; 
        end
        else begin  
            maxi_rdready <= maxi_rdready;   
        end
    end // 控制 maxi_rdready 寄存器

    always @(*) begin
        if (!rst) begin 
            maxi_rdata = 64'b0;
        end
        else if (maxi_rdvalid & maxi_rdready) begin
            maxi_rdata = ram_rdata_i;
        end
        else begin
            maxi_rdata = 64'b0;
        end
    end // 控制 maxi_rdata 寄存器 // 握手成功，接收读数据

    always @(*) begin
        if (!rst) begin 
            busy_end = 1'b0;
        end
        else if ((maxi_rdvalid && maxi_rdready) || (maxi_bvalid && maxi_bready)) begin
            busy_end = 1'b1;
        end
        else begin
            busy_end = 1'b0;
        end
    end // 控制 busy_end 寄存器 // 握手成功，接收读数据


// // ============ WRITE =============================== //
// // ======== Wrtite Address Channel AW：写地址通道 (写请求信号)
//     // s->m
//     // input                            maxi_waready, // 写地址握手通路，表明可以接受写地址信号
//     // m->s
//     // output                           maxi_wavalid, // wen
//     // output [AXI_ADDR_WIDTH - 1:0]    maxi_waddr, 
//     // output [AXI_DATA_WIDTH - 1:0]    maxi_wdata,
//     // output                           maxi_wstrb, // WSTRB

    reg                 maxi_wavalid;
    reg                 maxi_waready;
    // reg                 maxi_wastart;
    reg[31:0]           maxi_waddr;

    always @(posedge clk) begin
        if (!rst || (maxi_wavalid && maxi_waready)) begin 
            maxi_wavalid <= 1'b0;
        end
        else if (wen_i) begin // 如果写使能
            maxi_wavalid <= 1'b1; // Valid 拉高之后一直等待
        end
        else begin
            maxi_wavalid <= maxi_wavalid;
        end
    end // 控制wavalid寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_waready <= 1'b0;
        end
        else begin
            maxi_waready <= wready;
        end
    end // 控制waready寄存器



// // ========== Write Channel W ：写数据通道 (写响应信号)
//     // s->m
//     // input                            maxi_wdready, // 写数据握手通路，表明可以接受写数据信号
//     // m->s
//     // output                           maxi_wdvalid, // 写数据握手信号 wen 

    reg                         maxi_wdvalid;
    reg                         maxi_wdready;
    // reg                         maxi_wlast;
    // reg                 maxi_wdstart;
    reg[AXI_DATA_WIDTH-1:0]     maxi_wdata;
    reg[AXI_STRB_WIDTH-1:0]     maxi_wmask;
    // reg[AXI_BURST_WIDTH-1:0]    maxi_burst_len;
    // reg[7:0]                    maxi_burst_cnt;

    assign maxi_wdvalid = 1'b1;

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_wdready <= 1'b0;
        end
        else if (maxi_wavalid & maxi_waready) begin // 写地址握手成功，则写数据使能拉高
            maxi_wdready <= 1'b1;
        end
        else begin
            maxi_wdready <= 1'b0;
        end
    end // 控制wdready寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            wen_o <= 1'b0;
        end
        else if (maxi_wdready & maxi_wdvalid) begin
            wen_o <= 1'b1;
        end
        else begin
            wen_o <= 1'b0;
        end
    end // 控制wen寄存器

    always @(posedge clk) begin
        if (!rst) begin 
            maxi_waddr <= 32'b0;
        end
        else if (maxi_wdvalid & maxi_wdready) begin // 如果写地址使能
            maxi_waddr <= rwaddr; // 写入写地址
        end
        else begin
            maxi_waddr <= 32'b0;
        end
    end // 控制waddr寄存器

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

    always @(posedge clk) begin
        // if (!rst || maxi_wlast) begin 
        if (!rst) begin 
            maxi_wmask <= 64'b0;
        end
        else if (maxi_wdvalid & maxi_wdready) begin // 如果写地址使能
            maxi_wmask <= core_wmask_i; // 写入写地址
        end
        else begin
            maxi_wmask <= 64'b0;
        end
    end // 控制wmask寄存器

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

    
// ========== 写响应通道 =========================== //

    reg                     maxi_bready;
    reg                     maxi_bvalid;
    assign maxi_bready = 1'b1;
    assign maxi_bvalid = bvalid;





endmodule