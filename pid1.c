#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {
    int id = fork();
    // Inside parent process - child process id - it's going to be different than getpid()
    // Inside child process - 0 - it's going to be different than getpid()
    if (id == 0) {
        sleep(1);
    }
    printf("Returned by fork: %d, Current ID: %d, parent ID: %d\n", id, getpid(), getppid());
    
    int res = wait(NULL);
    
    if (res == -1) {
        printf("No children to wait for\n");
    } else {
        printf("%d finished execution\n", res);
    }
    return 0;
}
