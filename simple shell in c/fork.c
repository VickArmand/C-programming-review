#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int wstatus;
    pid_t pid;

    printf("Before fork");
    pid = fork(); // fork starts a child process wile keeping the existing one running
    if(pid == 0)
    {
        printf("I am a child process with ID = %d\n", getpid());
        printf("I have a parent with ID = %d\n", getppid());
    }
    else
    {
        wait(&wstatus); // waits for process to change state. Without wait () both processes will execute simultaneously
        // the above lineis equivalent to waitpid(-1,&wstatus,0)
        printf("%d\n", WIFEXITED(wstatus)); // WIFEXITED returns true(1) if process terminated normally
        printf("I am a child process with ID = %d\n", getpid());
        printf("I have a parent with ID = %d\n\n", pid);
    }
    return 0;
}