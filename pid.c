#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
pid_t pid = getpid();

pid_t ppid = getppid();

printf("pid is %d and the ppid is %d\n", pid,ppid);
return (0);
}
