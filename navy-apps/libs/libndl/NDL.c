#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/time.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;


// !!!!!!! 修改navy的代码后一定记得update !!!!!!!!

uint32_t NDL_GetTicks() {
    struct timeval now;
    gettimeofday(&now, NULL);
    return now.tv_usec/1000;
}

int NDL_PollEvent(char *buf, int len) {
    int fd = open("/dev/events", 0, 0);
    if (fd == -1) {
        return 0;
    }
    return read(fd, buf, len);
}

void NDL_OpenCanvas(int *w, int *h) {
	/* 
		打开一张(*w) X (*h)的画布
		如果*w和*h均为0, 则将系统全屏幕作为画布, 并将*w和*h分别设为系统屏幕的大小
	*/
	// 获取屏幕大小
	char dispinfo[32];
	int dispinfo_fd = open("/proc/dispinfo", O_RDONLY);
	read(dispinfo_fd, dispinfo, sizeof(dispinfo));
	sscanf(dispinfo, "WIDTH:%d\nHEIGHT:%d\n", &screen_w, &screen_h);
	close(dispinfo_fd);
    // printf("screen_w = %d, screen_h = %d\n", screen_w, screen_h);

	// 如果*w和*h均为0, 将全屏幕设置为画布
	if (*w == 0 && *h == 0) {
		*w = screen_w;
		*h = screen_h;
	}

    if (getenv("NWM_APP")) {
		int fbctl = 4;
		fbdev = 5;
        char buf[64];
        int len = sprintf(buf, "%d %d", screen_w, screen_h);
        // let NWM resize the window and create the frame buffer
        write(fbctl, buf, len);
        while (1) {
        // 3 = evtdev
            int nread = read(3, buf, sizeof(buf) - 1);
            if (nread <= 0) continue;
            buf[nread] = '\0';
            if (strcmp(buf, "mmap ok") == 0) break;
        }
        close(fbctl);
    }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
	/*	
		向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上
		图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
	*/
	// 居中显示下x -> 1/2(screen_w-w), y = 1/2(screen_h-h)
	x += (screen_h - h)/2;
	y += (screen_w - w)/2;  // 之前写1/2(screen_w-w)会等于0，因为1/2直接等于0了
    // printf("offset_x = %d, screen_w = %d, w = %d\noffset_y = %d, screen_h = %d, h = %d\n", x, screen_w, w, y, screen_h, h);
	
	// 打开画布文件
	int fd = open("/dev/fb", 0, 0);
    if (fd == -1){
        printf("open /dev/fb error\n");
        return ;
    } 

    lseek(fd, x * screen_w + y, SEEK_SET);  // x 为行, y 为列
    write(fd, pixels, ((size_t)w << 32) | ((size_t)h & 0x00000000FFFFFFFF)); 
    // w = high 32bit, h = low 32bit.
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
	return 0;
}

int NDL_QueryAudio() {
	return 0;
}

int NDL_Init(uint32_t flags) {
	if (getenv("NWM_APP")) {
		evtdev = 3;
	}
	return 0;
}

void NDL_Quit() {
}