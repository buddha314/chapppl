#include "worker.h"

extern void chpl_library_init(int argc, char* argv[]);
extern void chpl_library_finalize(void);

int main(int argc, char* argv[]) {
  int w;
  chpl_library_init(argc, argv);
  w = doWork();
  printf("Work is %d \n", w);
  chpl_library_finalize();
  return 0;
}
