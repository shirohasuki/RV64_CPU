#include "npc.h"
#include <utils/debug.h>
#include <string.h>
#include <sys/time.h>
#include <device/serial.h>
#include <device/rtc.h>
#include <device/mmio.h>

uint8_t mem[MEM_SIZE] = {0};

extern CPU_state cpu_npc;

unsigned long rtc;
unsigned long keycode;

uint8_t* cpu2mem(ll addr) { return mem + (addr - MEM_BASE); }

extern "C" void pmem_read(ll raddr, ll *rdata) {
    if (RTC_MMIO <= raddr && raddr <= RTC_MMIO + 8) { 
        if (cpu_npc.pc != 0) { rtc = mmio_read(raddr, 8); } // 判断不要多次执行 
        if (raddr == RTC_MMIO) { 
            *rdata = rtc;
        } else if (raddr == RTC_MMIO + 4) {
            *rdata = rtc >> 32;
        } // 下面放在if里面 cpu_npc.pc == 0时会没有值给rdata
#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count], "read:  addr:%016llx data:%016llx", raddr, (*rdata));
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
        // printf("[pmem_read] raddr is:%llx rdata is:%llx\n", raddr, *rdata);
        return ; 
    } // 时钟

    if (KBD_MMIO <= raddr && raddr <= KBD_MMIO + 4) { 
        if (cpu_npc.pc != 0) { keycode = mmio_read(raddr, 4); } // 判断不要多次执行 
        *rdata = keycode; // 下面放在if里面 cpu_npc.pc == 0时会没有值给rdata
#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count], "read:  addr:%016llx data:%016llx", raddr, (*rdata));
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
        // printf("[pmem_read] raddr is:%llx rdata is:%llx\n", raddr, *rdata);
        return ; 
    } // 键盘
    
    if (raddr < MEM_BASE) {
        printf("[pmem_read]  raddr < MEM_BASE: addr is:%llx, MEM_BASE is %x\n", raddr, MEM_BASE);
        return ;
    }

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
}

// Memory Write
extern "C" void pmem_write(ll waddr, ll wdata, char mask) {
#ifdef CONFIG_NPC_MTRACE
    sprintf(mtrace_buf[mtrace_count],"write: addr:%016llx data:%016llx\n            wmask:%08x", waddr,  wdata, mask);
    mtrace_count = (mtrace_count + 1) % SIZE_MTRACEBUF;
#endif
    if (SERIAL_MMIO <= waddr && waddr <= SERIAL_MMIO + 8) { 
        if (cpu_npc.pc != 0){
            mmio_write(waddr, 1, wdata); // 写串口
        } // 判断不要多次执行
        return ;
    } 
    if (waddr < MEM_BASE) {
        Printf("[pmem_write] waddr < MEM_BASE: addr is:%llx, MEM_BASE is %x\n", RED, waddr, MEM_BASE);
        return;
    }

    uint8_t *pt = cpu2mem(waddr);
    for (int i = 0; i < 8; ++i) {
        if (mask & 1) *pt = (wdata & 0xff);
        wdata >>= 8, mask >>= 1, pt++;
    }

}

extern "C" void inst_fetch(ll raddr, ll *rdata) {
    if (raddr < MEM_BASE) {
#ifdef CONFIG_NPC_IFTRACE
        printf("[inst_fetch] raddr < MEM_BASE: addr is:%llx, MEM_BASE is %x\n", raddr, MEM_BASE);
#endif
        return;
    }
    uint8_t *pt = cpu2mem(raddr) + 7;
    ll ret = 0;
    for (int i = 0; i < 8; ++i) {
        ret = (ret << 8) | (*pt--);
    }
    *rdata = ret;
#ifdef CONFIG_NPC_IFTRACE
    printf("[inst_fetch] addr is:%llx, data is:%llx\n", raddr, *rdata);
#endif
} // 和pmem_read一样，引用方便临时改个名字

// Load image from am-kernels (Makefile -> ./image.bin)
long load_image(char const *img_file) {
    if (img_file == NULL) {
        printf("No image is given. Use the default build-in image.");
        return 4096; // built-in image size
    }
    FILE *fp = fopen(img_file, "rb");
    assert(fp);

    fseek(fp, 0, SEEK_END);  // fseek:把与fp有关的文件位置指针放到一个指定位置 // fseek(fp, 0, SEEK_END)文件指针定位到文件末尾，偏移0个字节
    static long img_size = ftell(fp);    // ftell:返回文件大小

    printf("The image is %s, size = %ld\n", img_file, img_size);

    fseek(fp, 0, SEEK_SET); // fseek(fp, 0, SEEK_SET)文件指针定位到文件末尾，偏移0个字节
    int ret = fread(mem, img_size, 1, fp); // 从fp向mem读img_size大小
    assert(ret == 1);

    fclose(fp);
    return img_size;
}
