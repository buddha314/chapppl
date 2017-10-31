#include <stdio.h>
#include "worker.h"
#include "chpl-init.h"

int tryInt() {
  int w;
  const char* dummyArg0 = "";
  chpl_library_init(0, &dummyArg0);
  w = doWork();
  printf("Work is %d \n", w);
  chpl_library_finalize();
  printf("I'm done with this...");
  return w;
}


int main(int argc, char* argv[]) {
  printf("Heading in to tryInt");
  tryInt();
  printf("Done trying Int, did it work?");
  tryInt();

  /*
  chpl_library_init(argc, argv);
  sw = sayWork();
  printf("I think I heard you say %s\n", sw);
  chpl_library_finalize();
  */

  return 0;
}
