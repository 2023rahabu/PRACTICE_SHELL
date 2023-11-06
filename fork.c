#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid_t c_pid;

	pid = getpid();
	ppid = getppid();

	printf("Process ID is : %d\n", pid);
	printf("Parent Process ID is : %d\n", ppid);

	c_pid = fork();

	if (c_pid == 0 ) /* if return 0 means no child process formed*/
	{
		printf("This is a child Process\n");
		printf("Parent Process ID (PPID): %d\n", getppid());
		printf("Current process ID (PID): %d\n",getpid());
		printf("=============================================\n");
	}
	else if (c_pid > 0) /*means there is child proces*/
	{
		printf("This is a Parent Process:\n");
		printf("child process ID(PPID): %d\n", c_pid);
		printf("=======================================\n");
	}
	else
	{
		printf("fail");
		return (1);
	}
	return 0;
}
