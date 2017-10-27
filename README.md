# chapppl
Integrating Chapel and C++ Code, mostly to use C++ to get in/out of a Postgres database.  This is an experiment.

At this stage, I had to revert to standard C but it appears to be working.

## Notes

1. Doing all of this on a Mac, so some of the libraries may seem odd to Windows users.

You have to create `worker.h` manually.  Seems odd. I checked it in, but if you want to be macho, delete it and create `worker.h`

```
int doWork();
```


Now try

```
> make all
```
