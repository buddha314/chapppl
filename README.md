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


Now try

```
> cd chpl/src
> make library
> cd ../../
> make
```

Right now that throws an error on my mac:

```
#clang -o build//connector cpp/src/connector.cpp
`/Users/buddha/github/chapel/util/config/compileline --compile` cpp/src/connector.cpp -L. -lchpl/src/cppsrc/worker `/Users/buddha/github/chapel/util/config/compileline --libraries`
In file included from cpp/src/connector.cpp:1:
In file included from /Library/Developer/CommandLineTools/usr/include/c++/v1/iostream:38:
In file included from /Library/Developer/CommandLineTools/usr/include/c++/v1/ios:216:
In file included from /Library/Developer/CommandLineTools/usr/include/c++/v1/__locale:18:
In file included from /Library/Developer/CommandLineTools/usr/include/c++/v1/mutex:189:
In file included from /Library/Developer/CommandLineTools/usr/include/c++/v1/__mutex_base:17:
/Library/Developer/CommandLineTools/usr/include/c++/v1/__threading_support:156:1: error: unknown type name 'mach_port_t'
mach_port_t __libcpp_thread_get_port();
^
/Library/Developer/CommandLineTools/usr/include/c++/v1/__threading_support:300:1: error: unknown type name 'mach_port_t'
mach_port_t __libcpp_thread_get_port() {
^
/Library/Developer/CommandLineTools/usr/include/c++/v1/__threading_support:301:12: error: use of undeclared identifier 'pthread_mach_thread_np'
    return pthread_mach_thread_np(pthread_self());
           ^
3 errors generated.
make: *** [default] Error 1
```

still trying to figure it out.
