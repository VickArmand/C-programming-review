#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
    char *envp[] = {NULL};
    pid_t cpid;
    int wstatus, i;

    for(i = 0; i < 5; i++)
    {
        if((cpid = fork())== -1)
        {
            perror("fork error");
            exit(-1);
        }
        else if(cpid == 0)
        {
            if(execve(argv[0], argv, envp)== -1)
            {
                perror("execve error");
                exit(-1);
            }
            print("wait for me\n");
            sleep(3);
            exit(0);
           
        }
        else
        {
            wait(&wstatus);
            printf("Loop number %d\n",i);
        }
    }
}