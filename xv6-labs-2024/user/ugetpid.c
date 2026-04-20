/*********HDH_LAB3-speedupSYSCALL***********/
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(int argc, char *argv[])
{
  int pid = ugetpid();
  printf("My PID is %d\n", pid);
  exit(0);
}

// ADDED ugetpid() in ulib.c and user.h
/*********HDH_LAB3-speedupSYSCALL***********/