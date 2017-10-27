#include<stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
#include "worker.h"


extern void chpl_library_init(int argc, char* argv[]);
extern void chpl_library_finalize(void);

int main() {
  const char *conninfo;
  PGconn     *conn;
  PGresult   *res;
  int         nFields;
  int         i,
              j;
  char *w;
  printf("Hello World\n");

  conninfo = "user=buddha dbname=buddha host=localhost";
  conn = PQconnectdb(conninfo);

  if (PQstatus(conn) != CONNECTION_OK) {
    printf("sumtin dun gone wrong...");
  }

  res = PQexec(conn, "select corpus_type from results limit 10;");
  for (i=0; i<PQntuples(res); i++) {
    printf("results! %s\n ", PQgetvalue(res,i,0));
  }
  w = doWork();
  printf("Work is %s \n", w);
}
