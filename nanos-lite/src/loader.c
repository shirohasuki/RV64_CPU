#include <proc.h>
#include <elf.h>
#include "fs.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_386
#elif defined(__ISA_MIPS32__)
# define EXPECT_TYPE EM_MIPS
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#elif
# error unsupported ISA __ISA__
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();


static uintptr_t loader(PCB *pcb, const char *filename) {
    // Ramdisk version 
    // ELF Header
    // Elf_Ehdr *elf = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
    // ramdisk_read(elf, 0, sizeof(Elf_Ehdr));
    // // Check ELF magic number
    // Log("elf->e_ident = 0x%p", *(uint32_t *)elf->e_ident);
    // assert(*(uint32_t *)elf->e_ident == 0x464C457F);
    // // Check ELF machine
    // Log("elf->e_machine = 0x%p", elf->e_machine);
    // assert(EXPECT_TYPE == elf->e_machine);
    // // Program Header
    // Elf_Phdr *phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr) * elf->e_phnum);
    // ramdisk_read(phdr, elf->e_phoff, sizeof(Elf_Phdr) * elf->e_phnum);
    // // Analysis of program header table
    // for (int i = 0; i < elf->e_phnum; ++i) {
    //     if (phdr[i].p_type != PT_LOAD) continue;
    //     ramdisk_read((char*)phdr[i].p_vaddr, phdr[i].p_offset, phdr[i].p_filesz);
    //     memset((char*)phdr[i].p_vaddr + phdr[i].p_filesz, 0, phdr[i].p_memsz - phdr[i].p_filesz);
    // }
    // return elf->e_entry;
      // 1. open elf files, get file id:
  int fd = fs_open(filename,0,0);

  // 2. read elf head:
  Elf_Ehdr *elf_head = (Elf_Ehdr*)malloc(sizeof(Elf_Ehdr));
  if(fs_read(fd,elf_head,sizeof(Elf_Ehdr)) == -1) assert(0);
  // ramdisk_read(elf_head,0,sizeof(Elf_Ehdr));
  assert(*(uint32_t *)(elf_head->e_ident) == 0x464c457f);  // check reading file is elf.
  assert(elf_head->e_machine == EXPECT_TYPE);              // check architecture.

  // 3. read program headers, remeber pro_head is a struct pointer!!
  Elf_Phdr *pro_head = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)*elf_head->e_phnum);
  if(fs_read(fd, pro_head,sizeof(Elf_Phdr)*elf_head->e_phnum) == -1)  assert(0);
  // ramdisk_read((void*)(p->p_vaddr), p->p_offset, p->p_filesz);

  // 4. read text/rodata/data/bss segment to mem:
  for(Elf_Phdr *p=pro_head; p<pro_head+elf_head->e_phnum; p++){

    // 4.1 load text/rodata/data segment into mem:
    if(fs_lseek(fd,p->p_offset,SEEK_SET) == -1) assert(0);
    if(fs_read(fd, (void*)(p->p_vaddr),p->p_filesz) == -1)  assert(0);
    // ramdisk_read((void*)(p->p_vaddr), p->p_offset, p->p_filesz);
    
    // 4.2 init bss segment(set to zero):
    memset((void *)(p->p_vaddr+p->p_filesz), 0, p->p_memsz - p->p_filesz);
  }

  free(elf_head);
  free(pro_head);

  return elf_head->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  asm volatile("fence.i");
  ((void(*)())entry) ();
}

