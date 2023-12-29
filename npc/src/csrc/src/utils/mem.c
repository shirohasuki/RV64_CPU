#include "npc.h"
#include <utils/debug.h>
#include <string.h>
#include <sys/time.h>
#include <device/serial.h>
#include <device/rtc.h>
#include <device/mmio.h>

uint8_t mem[MEM_SIZE] = {0};
// uint8_t interface_mem[INTERFACE_MEM_SIZE] = {0};

extern CPU_state cpu_npc;

unsigned long rtc;
unsigned long keycode;
unsigned long vgactl;

uint8_t* cpu2mem(ll addr) { 
    return mem + (addr - MEM_BASE); 
}

extern "C" void pmem_read(ll raddr, ll *rdata) {
    if (raddr < MEM_BASE) { return ;}
    
    if (RTC_MMIO <= raddr && raddr <= RTC_MMIO + 8) { 
        rtc = mmio_read(raddr, 8); 
        // if (cpu_npc.pc != 0) { rtc = mmio_read(raddr, 8); } // 判断不要多次执行 
        if (raddr == RTC_MMIO) { 
            *rdata = rtc;
        } else if (raddr == RTC_MMIO + 4) {
            *rdata = rtc >> 32;
        } // 下面放在if里面 cpu_npc.pc == 0时会没有值给rdata
        // printf("rdata=%llx\n", *rdata);
#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count], "read:  addr:%016llx data:%016llx", raddr, (*rdata));
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
        return ; 
    } // 时钟

    if (KBD_MMIO <= raddr && raddr <= KBD_MMIO + 4) { 
            keycode = mmio_read(raddr, 4); 
        *rdata = keycode; // 下面放在if里面 cpu_npc.pc == 0时会没有值给rdata
#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count], "read:  addr:%016llx data:%016llx", raddr, (*rdata));
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
        return ; 
    } // 键盘

    if (VGA_MMIO <= raddr && raddr <= VGA_MMIO + 8) {  // VGA w, h, sync
        vgactl = mmio_read(raddr, 4); 
        *rdata = vgactl;
        // Printf("raddr=%llx, rdata=%llx\n", GREEN, raddr, *rdata);
        return ;
    }      
    // Printf("[pmem_read] Invalid Read Mem, raddr is:%llx\n", RED, raddr);

    // Printf("raddr=%llx\n", RED, raddr);

    uint8_t *pt = cpu2mem(raddr) + 7;
    ll ret = 0;
    for (int i = 0; i < 8; ++i) {
        ret = (ret << 8) | (*pt--);
    }
    *rdata = ret;

#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count], "read:  addr:%016llx data:%016llx", raddr, (*rdata));
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
    return ;
}

extern "C" void pmem_read_Icacheline(ll raddr, svBitVecVal rdata[16]) {
    if (raddr < MEM_BASE) { return ;} 
    // Printf("raddr=%llx\n", GREEN, raddr);
    uint8_t *pt = cpu2mem(raddr); // 指向64个字节的末尾
    ll ret = 0;
    // ll ret_hi = 0;
    // ll ret_lo = 0;
    for (int i = 0; i < 8; i++) {
        // pt += 3;
        // for (int k = 0; k < 4; k++) {
        //     ret_lo = (ret_lo << 8) | (*pt--);
        // } 
        // // 这时候 pt= -1， 所以加8而不是7
        // pt += 8; 
        // for (int j = 0; j < 4; j++) {
        //     ret_hi = (ret_hi << 8) | (*pt--);
        // } 
        // pt += 5; // 加到下一个字节
        // rdata[i * 2]     = ret_hi; // 读取每8字节存一次
        // rdata[i * 2 + 1] = ret_lo; 
        pmem_read(raddr + i * 8, &ret);
        rdata[i * 2]     = (uint32_t)(ret >> 32); // 读取每8字节存一次
        rdata[i * 2 + 1] = (uint32_t)(ret); 
        // printf("sizeof rdata = %ld\n", sizeof(rdata[0])); // bit最大只能32位
    }   // 存8次
}

extern "C" void pmem_read_Dcacheline(ll raddr, svBitVecVal rdata[8]) {
    if (raddr < MEM_BASE) { 
        for (int i = 0; i < 4; i++) {
            rdata[i * 2]     = 0; // 读取每8字节存一次
            rdata[i * 2 + 1] = 0;
        }   
        return ; 
    } 
    // Printf("raddr=%llx\n", RED, raddr);
    uint8_t *pt = cpu2mem(raddr); 
    ll ret            = 0;
    ll ret_hi, ret_lo = 0;
    if (raddr > DEVICE_BASE) {
        for (int i = 0; i < 4; i++) {
            pt += 3;
            for (int k = 0; k < 4; k++) {
                ret_lo = (ret_lo << 8) | (*pt--);
            } 
            // 这时候 pt= -1， 所以加8而不是7
            pt += 8; 
            for (int j = 0; j < 4; j++) {
                ret_hi = (ret_hi << 8) | (*pt--);
            } 
            pt += 5; // 加到下一个字节
            rdata[i * 2]     = ret_hi; // 读取每8字节存一次
            rdata[i * 2 + 1] = ret_lo; 
        }   // 存4次   
        return ;
    } else {
        for (int i = 0; i < 4; i++) {
            pmem_read(raddr + i * 8, &ret);
            // printf("raddr=%llx\n", raddr + i * 8);
            rdata[i * 2]     = (uint32_t)(ret >> 32); // 读取每8字节存一次
            rdata[i * 2 + 1] = (uint32_t)(ret);
        }   // 存4次   
        return ;
    } // 访问外设不记录
}


// Memory Write
extern "C" void pmem_write(unsigned char wen, ll waddr, ll wdata, char mask) {
    if (wen == 0) { return ;}

    // Printf("here1\n", YELLOW);
    if (waddr < MEM_BASE) { Printf("[pmem_write] waddr < MEM_BASE: addr is:%llx, MEM_BASE is %x\n", RED, waddr, MEM_BASE); return ;} 
    uint64_t maskedData = wdata; 
    // for (int i = 0; i < 8; ++i) {
    //     if (mask & 1) maskedData |= (wdata & 0xff);
    //     wdata >>= 8, mask >>= 1;
    //     Printf("maskedData=%llx\n", BLUE, maskedData);
    // }

#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count],"write: addr:%016llx data:%016llx wmask:%08x", waddr,  wdata, mask);
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
    // &mask是有必要的，因为在chisel代码中没有帮忙改造过
    if (SERIAL_MMIO <= waddr && waddr <= SERIAL_MMIO + 8) { // 写串口
        mmio_write(waddr, 1, maskedData); return ;
    } 
    if (VGA_MMIO <= waddr && waddr <= VGA_MMIO + 8) {  // sync_addr
        mmio_write(waddr, 4, maskedData); return ;
    } 
    if (FB_MMIO <= waddr && waddr <= FB_MMIO + 480000) { // 写显存 400x300x4 = 0x75300 
        mmio_write(waddr, 4, maskedData); return ;
    } 
    // Printf("[pmem_write] Invalid write Mem, waddr is:%llx wdata is:%llx\n", RED, waddr, wdata);
    uint8_t *pt = cpu2mem(waddr);
    // for (int i = 0; i < 8; ++i) {
    //     if (mask & 1) *pt = (wdata & 0xff);
    //     Printf("pt=%x ", GREEN, *pt);
    //     wdata >>= 8, mask >>= 1, pt++;
    // }
    // Printf("wdata=%llx\n", GREEN, maskedData);
    for (int j = 0; j < 8; j++) {
        *pt++ = maskedData;
        // *pt++ = wdata;
        // Printf("pt=%x wdata=%llx\n", GREEN, *(pt-1), maskedData);
        maskedData >>= 8;
    }
    return ;
}


extern "C" void pmem_write_Dcacheline(unsigned char wen, ll waddr, const svBitVecVal wdata[8]) {
    if (wen == 0) {return ;}
    if (waddr < MEM_BASE) { return ; } 
    // Printf("waddr=%llx\n", RED, waddr);
    uint64_t wdata_array[4];  
    for (int i = 0; i < 4; i++) {
        wdata_array[i] = ((uint64_t)wdata[i*2+1] << 32) | wdata[i*2]; 
    }
    uint8_t *pt = cpu2mem(waddr);
    for (int i = 0; i < 4; i++) {
        // for (int j = 0; j < 8; j++) {
        //     *pt++ = wdata_array[i];
        //     wdata_array[i] >>= 8;
        // }
        pmem_write(1, waddr + i * 8, wdata_array[i], 0xff);
        // Printf("waddr %llx\n", RED, waddr + i * 8);
    }
    return ;
} // 一次写一行进去


// Load image from am-kernels (Makefile -> ./image.bin)
long load_image(char const *img_file) {
    if (img_file == NULL) {
        printf("No image is given. Use the default build-in image.");
        return 4096; // built-in image size
    }
    FILE *fp = fopen(img_file, "rb");
    Assert(fp, "Can not open '%s'", img_file);

    fseek(fp, 0, SEEK_END);  // fseek:把与fp有关的文件位置指针放到一个指定位置 // fseek(fp, 0, SEEK_END)文件指针定位到文件末尾，偏移0个字节
    static long img_size = ftell(fp);    // ftell:返回文件大小

    printf("The image is %s, size = %ld\n", img_file, img_size);

    fseek(fp, 0, SEEK_SET); // fseek(fp, 0, SEEK_SET)文件指针定位到文件末尾，偏移0个字节
    int ret = fread(mem, img_size, 1, fp); // 从fp向mem读img_size大小
    assert(ret == 1);

    fclose(fp);
    return img_size;
}
