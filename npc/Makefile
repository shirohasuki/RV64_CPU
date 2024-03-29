BUILD_DIR = $(abspath ./build)

export PATH := $(PATH):$(abspath ./utils)

# ARGS

# ========= verilator ==============
TOPNAME = tb
INC_PATH ?= /home/shiroha/Code/ysyx/ysyx-workbench/npc/src/csrc/include \
			/usr/lib/llvm-11/include # for disasm 

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  --trace \
				-O3 --x-assign fast --x-initial fast --noassert \
				-Wno-fatal \
				-j 16
#  --cc 参数告诉 Verilator 转换为 C++。 Verilator 还支持转换为 SystemC，这可以通过使用 --sc 来完成，但我们暂时不会使用此功能。
# -Wall - 打开所有 C++ 警告。不是必需的，但在您刚开始时很有用
# --trace - 启用波形跟踪	
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(OBJ_DIR)/V$(TOPNAME) # 可执行文件在这

# project source
VSRCS = $(shell find $(abspath ./build) -name "*.v")
CSRCS = $(shell find $(abspath ./src/csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" #-Og -ggdb3 # -Og -ggdb3为添加gdb调试
LDFLAGS += -lSDL2 -lSDL2_image "-ldl $(shell llvm-config-11 --cxxflags) -fPIE $(shell llvm-config-11 --libs)" -lreadline
# 使用readline函数的是否需要链接-lreadline
# ====================================

$(BIN): ${VSRCS} ${CSRCS} 
	@rm -rf $(OBJ_DIR)
# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_CFLAGS) +incdir+$(BUILD_DIR)\
		--top $(TOPNAME) $^\
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe 
	$(MAKE) -C ${OBJ_DIR} -f V$(TOPNAME).mk V$(TOPNAME) 

.PHONY: run test verilog help compile bsp reformat checkformat clean sim wave

run: verilog $(BIN) sim
# 生成verilog代码->构建bin->仿真

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
# mkdir -p $(BUILD_DIR)
	$(shell mkdir -p $(BUILD_DIR))
	mill -i __.test.runMain Elaborate -td $(BUILD_DIR) -X mverilog
# mill -i __.test.runMain Elaborate -td $(BUILD_DIR) 
# -X mverilog 生成verilog取消优化


sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(BIN) $(ARGS)
	  @$^
# 关于$(BIN)放在前后的对比（sim任务和default任务的不同）
# default任务中$(BIN)放在default:后，表示依赖于$(BIN),在执行default前会先构建$(BIN)
# sim任务中$(BIN)放在命令行中，表示普通的指令，即执行该可执行文件，而不会进行构建
# 所以这个任务，只负责执行，不进行可执行文件的生成

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

wave:
	gtkwave dump.vcd &


include ../Makefile
