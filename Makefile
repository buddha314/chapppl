EXEC=connector
LIB=worker

library: worker.chpl
	chpl --library -o libworker $<

connector: connector.c
	`$(CHPL_HOME)/util/config/compileline --compile` -L. -l$(LIB) `$(CHPL_HOME)/util/config/compileline --libraries` -Iworker.h -v -o $(EXEC) $<

run:
	./$(EXEC)

clean:
	rm lib$(LIB).a $(EXEC)

all: library connector run
