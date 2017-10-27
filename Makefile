CC=clang
BUILD_DIR=build/
EXEC=connector
CHPL_MAKE_HOME = /Users/buddha/github/chapel
CH_COMPILELINE=$(CHPL_MAKE_HOME)/util/config/compileline
WORKER_A=chpl/src/worker

#default: cpp/src/connector.cpp
default: cpp/src/connector.c
	`$(CHPL_HOME)/util/config/compileline --compile` $< -L. -Lchpl/src -lpq -lworker `$(CHPL_HOME)/util/config/compileline --libraries` -Icpp/src/worker.h -v
