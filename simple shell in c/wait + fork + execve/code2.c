#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 * 
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid < 0)
    {
        perror("I am the parent process but child process couldnt be created");
        return (1);
    }
    else if (child_pid == 0)
    {
        printf("Wait for me, wait for me I am the new child process\n");
        sleep(3);
    }
    else if (child_pid > 0)
    {
        printf("I am the parent the child is %d\n", child_pid);
        wait(&status); 
        /* 
        * wait blocks the parent process(puts the parent process to sleep)
        * until the child process exits or changes state
        * It is important to wait for child processes to end before the parent process ends
        * to avoid creation of zombie processes and orphaned process
        */
        printf("End of process Oh, it's all better now\n");
    }
    return (0);
    /**
     * 3 messages will be printed which are:
     * I am the parent the child is ...
     * Wait for me, wait for me I am the new child process
     * End of process Oh, it's all better now
     *  because 2 processes are running
    */
}