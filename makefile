compile:
	 verilator -Wall --binary --trace --timing adder adder_tb
run:
	./obj_dir/Vadder
all: compile run
