# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtb.mk

default: Vtb

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtb
# Module prefix (from --prefix)
VM_MODPREFIX = Vtb
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/include \
	-I/usr/lib/llvm-11/include \
	-DTOP_NAME="Vtb" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-lSDL2_image \
	-ldl -LDFLAGS -I/usr/lib/llvm-11/include -LDFLAGS -std=c++14 -LDFLAGS -fno-exceptions -LDFLAGS -D_GNU_SOURCE -LDFLAGS -D__STDC_CONSTANT_MACROS -LDFLAGS -D__STDC_FORMAT_MACROS -LDFLAGS -D__STDC_LIMIT_MACROS -LDFLAGS -fPIE -LDFLAGS -lLLVM-11 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	alarm \
	device \
	map \
	mmio \
	keyboard \
	rtc \
	serial \
	vga \
	main \
	difftest \
	disasm \
	mem \
	trace \
	utils \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src \
	/home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe \
	/home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/io \
	/home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/utils \


### Default rules...
# Include list of all generated classes
include Vtb_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

alarm.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/alarm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/io/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/io/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rtc.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/rtc.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/ioe/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/utils/difftest.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/utils/disasm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/utils/mem.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
trace.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/utils/trace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
utils.o: /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/src/utils/utils.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vtb: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
