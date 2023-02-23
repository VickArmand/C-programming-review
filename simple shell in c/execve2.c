#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[], char **env)
{
    const char *av[] = {"ls", "-lha", NULL};
    int x;
    x = execve(av[0], av, NULL);
    // execve runs a program while another program is running
    // execve takes in the pathname, argv and envp
    if(x == -1)
    {
        printf("execve failed");
    }
    else
    {
        printf("execve success");
    }
    return 0;
}