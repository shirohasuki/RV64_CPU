TOPNAME = tb
INC_PATH ?= 

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  --trace\
				-O3 --x-assign fast --x-initial fast --noassert \
				-Wno-fatal 
#  --cc 参数告诉 Verilator 转换为 C++。 Verilator 还支持转换为 SystemC，这可以通过使用 --sc 来完成，但我们暂时不会使用此功能。
# -Wall - 打开所有 C++ 警告。不是必需的，但在您刚开始时很有用
# --trace - 启用波形跟踪	

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) 
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN)) \

sim:
	@rm -rf $(OBJ_DIR)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top $(TOPNAME) $^\
		--LDFLAGS "-ldl $(shell llvm-config --cxxflags) -fPIE $(shell llvm-config --libs)" \
		--Mdir $(OBJ_DIR) --exe ${CSRCS} ${VSRCS}\
	make -C ./obj_dir/ -f V$(TOPNAME).mk V$(TOPNAME)
	./obj_dir/V$(TOPNAME)
	# gtkwave waveform.vcd

# 使用 --exe main.cpp 构建仿真可执行文件 	
 

# 要构建我们的可执行文件，我们执行以下操作：make -C obj_dir -f Vtb.mk Vtb
# -C obj_dir 告诉 make 在 obj_dir 目录中工作。然后我们使用 -f Valu.mk 传递所需的 makefile。
# 最后，我们告诉 make 构建目标 Vtb，它是编译后的测试平台可执行文件的名称。
# 如果测试台可执行文件构建成功，您将在 obj_dir 中找到一个 Vtb 二进制文件。
# 运行仿真(obj_dir/Vtb)会在我们的工作目录中生成一个名为waveform.vcd 的波形文件。


run: 	
	$(BIN)
	  @$^

wave:
	gtkwave wave.vcd &

sim:
	$(call git_commit, "sim RTL") 
	$(BIN)
	  @$^
		
clean:
	rm -rf $(BUILD_DIR)
	rm dump.vcd

include ../Makefile

.PHONY: clean run
