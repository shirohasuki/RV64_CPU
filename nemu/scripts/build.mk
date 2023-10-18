# 指定了默认的目标，当运行make命令时，默认会构建app目标。
.DEFAULT_GOAL = app

# Add necessary options if the target is a shared library
ifeq ($(SHARE),1)
SO = -so
CFLAGS  += -fPIC
LDFLAGS += -rdynamic -shared -fPIC
endif

# 存储了当前工作目录的路径
WORK_DIR  = $(shell pwd)
# 存储了构建输出的目录，生成的目标文件和可执行文件放在这个目录中。
BUILD_DIR = $(WORK_DIR)/build

INC_PATH := $(WORK_DIR)/include $(INC_PATH)
# -so为共享库后缀
OBJ_DIR  = $(BUILD_DIR)/obj-$(NAME)$(SO)
# 可执行文件
BINARY   = $(BUILD_DIR)/$(NAME)$(SO)

# Compilation flags
ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDESL= $(addprefix -I, $(INC_PATH))
# CFLAGS 包含了编译器选项，例如优化级别、警告选项等。
CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
# LDFLAGS 包含了链接器选项，例如优化级别、链接库选项等。
LDFLAGS := -O2 $(LDFLAGS)
# OBJS是所有的目标文件（.o文件）的列表，包括从源文件编译得到的目标文件。
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
# 两条规则，一个用于编译.c文件，另一个用于编译.cc（C++）文件。生成的可执行文件都在build文件夹下。
# 0行 定义了目标文件（OBJ_DIR下的以.o为扩展名的文件）和它们对应的源文件类型（.c）。
# 1行 $<为规则中的第一个依赖文件，即源文件的路径。用于输出一条消息，显示正在编译的源文件的类型和路径。使用@来抑制Make工具默认的命令输出。
# 2行 用于创建目标文件所在的目录（如果目录不存在）。 $@表示目标文件，$(dir $@) 表示提取目标文件的目录部分。
# 3行 -c 选项告诉编译器生成目标文件而不是可执行文件。-o 指定输出目标文件的名称（$@）。
# 4行 用于生成依赖文件（.d文件）什么玩意儿?
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules

.PHONY: app clean

app: $(BINARY)

$(BINARY): $(OBJS) $(ARCHIVES)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

clean:
	-rm -rf $(BUILD_DIR)