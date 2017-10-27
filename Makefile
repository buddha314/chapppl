EXEC=connector

library: worker.chpl
	chpl --library -o libworker $<

connector: connector.c
	`$(CHPL_HOME)/util/config/compileline --compile` -L. -lworker `$(CHPL_HOME)/util/config/compileline --libraries` -Iworker.h -v -o $(EXEC) $<

run:
	./$(EXEC)

all: library connector run
