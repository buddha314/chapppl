
#include <iostream>
#ifdef __cplusplus
extern "C"
{
  // C header here
  #include "worker.h"
}
#endif





/*
extern void chpl_library_init(int argc, char* argv[]);
extern void chpl_library_finalize(void);
 */

int main(int argc, char* argv[]) {
  /*
  chpl_library_init(argc, argv);
  doWork();
  chpl_library_finalize();
  */
  std::cout << "hello!" << std::endl;
  return 0;
}
