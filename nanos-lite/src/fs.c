#include <fs.h>

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
    char *name;
    size_t size;
    size_t disk_offset;
    ReadFn read;
    WriteFn write;
} Finfo; // 文件记录表
// ReadFn和WriteFn分别是两种函数指针, 它们用于指向真正进行读写的函数, 并返回成功读写的字节数.
// 有了这两个函数指针, 我们只需要在文件记录表中对不同的文件设置不同的读写函数, 就可以通过f->read()和f->write()的方式来调用具体的读写函数了.
// 牛逼!


enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT, FD_DISINFO, FD_FB}; 

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
    [FD_STDIN]  = {"stdin",          0, 0, invalid_read,  invalid_write}, // name, size, disk_offset, ReadFn, WriteFn
    [FD_STDOUT] = {"stdout",         0, 0, invalid_read,  serial_write},
    [FD_STDERR] = {"stderr",         0, 0, invalid_read,  serial_write},
    [FD_EVENT]  = {"/dev/events",    0, 0, events_read,   invalid_write}, // keyboard
    [FD_DISINFO]= {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write}, // VGA: 获取系统屏幕大小以及画布大小
    [FD_FB]     = {"/dev/fb",        0, 0, invalid_read,  fb_write},      // VGA: frame buffer
#include "files.h"
};


void init_fs() {
    // initialize the size of /dev/fb
    AM_GPU_CONFIG_T dispinfo = io_read(AM_GPU_CONFIG);
    Log("dispinfo_WIDTH:%d,dispinfo_HEIGHT:%d", dispinfo.width, dispinfo.height);
  
    // use high 32bit to store w, low 32bit to store h. fast but not support native!
    file_table[FD_FB].size = dispinfo.width * dispinfo.height;  // 4 for 32bit!
}

// char* getFinfoName(int i){
//     return file_table[i].name;
// }

#define TABLE_LEN (int)(sizeof(file_table) / sizeof(Finfo))


size_t open_offset = 0;
int fs_open (const char *pathname, int flags, int mode){
    for (int i = 0; i < TABLE_LEN; i++) {
        if (strcmp(file_table[i].name, pathname) == 0){
            open_offset = 0;
            return i;
        }
    }
    return -1;
}

size_t fs_read(int fd, void *buf, size_t len){
    if (file_table[fd].read != NULL){
        return (file_table[fd].read)(buf, 0, len);
    }
    else {
        size_t f_size = file_table[fd].size;
        if (open_offset >= f_size){
            return -1;
        }
        if (open_offset + len > f_size){
            len = f_size - open_offset;
        }
        ramdisk_read(buf, file_table[fd].disk_offset + open_offset, len);
        open_offset = open_offset + len;
        return len;
    }
}

size_t fs_write(int fd, const void *buf, size_t len){
    if (file_table[fd].write != NULL){
        return (file_table[fd].write)(buf, open_offset, len);
    }
    else {
        size_t f_size = file_table[fd].size;
        if(open_offset >= f_size){
            return -1;
        }
        if (open_offset + len > f_size){
            len = f_size - open_offset;
        }
        ramdisk_write(buf, file_table[fd].disk_offset + open_offset, len);
        open_offset = open_offset + len;
        return len;
    }
}

size_t fs_lseek(int fd, size_t offset, int whence){
    size_t f_size = file_table[fd].size;
    switch (whence) {
        case SEEK_SET: if(offset <= f_size) {open_offset = offset; return open_offset;} else{ return -1;} break;
        case SEEK_CUR: if(open_offset + offset <= f_size) {open_offset = open_offset + offset; return open_offset;} else{ return -1;} break; 
        case SEEK_END: if((signed)offset <= 0)  { open_offset = f_size + offset; return open_offset;} else { return -1; } break;
        default: panic("check your input whence for lseek"); break;
    }
}

int fs_close(int fd){
    open_offset = 0;
    return 0;
}