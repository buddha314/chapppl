CH=chpl
FLAGS=--fast
CDIR=cppsrc
EXEC=worker
CH_HDR_DIR=chpl/src/cppsrc

default: Worker.chpl
	$(CH) $(FLAGS) -o $(EXEC) $<

library: Worker.chpl
	$(CH) --library --savec $(CDIR) -o $(EXEC) $<
	make -f cppsrc/Makefile
