export PRJ_PATH=$(shell pwd)/..
export DESIGN=example

all:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wno-fatal -Wall $(DESIGN).v main.cpp --top-module $(DESIGN) --cc --trace --exe
	#verilator -Wall --cc mux21.v --exe main.cpp 
	make -C obj_dir -f V$(DESIGN).mk V$(DESIGN)

run:
	./obj_dir/V$(DESIGN)

wave:
	gtkwave wave.vcd &

clean:
	@rm -rf obj_dir wave.vcd

include ../Makefile
