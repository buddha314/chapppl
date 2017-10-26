#include <iostream>
#include "worker.h"

/*
#include <sys/_types.h>
typedef __darwin_mach_port_t mach_port_t;
mach_port_t pthread_mach_thread_np(pthread_t);
*/



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
