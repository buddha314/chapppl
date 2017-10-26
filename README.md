# chapppl
Integrating Chapel and C++ Code, mostly to use C++ to get in/out of a Postgres database.  This is an experiment.

## Notes

1. Doing all of this on a Mac, so some of the libraries may seem odd to Windows users.
1. This is all kinda confusing, doing my best.
1. Looks like you have to create `worker.h` manually.  Seems odd.  Since that's the case, I did NOT
check it in.  You should create this file under `cpp/src/worker.h`

```
std::string doWork();
```
