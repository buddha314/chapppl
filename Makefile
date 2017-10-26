CC=clang
BUILD_DIR=build/
EXEC=connector
CHPL_MAKE_HOME = /Users/buddha/github/chapel
CH_COMPILELINE=$(CHPL_MAKE_HOME)/util/config/compileline
WORKER_A=chpl/src/cppsrc/worker

default: cpp/src/connector.cpp
	#$(CC) -o $(BUILD_DIR)/$(EXEC) $<
	`$(CHPL_HOME)/util/config/compileline --compile` $< -L. -l$(WORKER_A) `$(CHPL_HOME)/util/config/compileline --libraries`
