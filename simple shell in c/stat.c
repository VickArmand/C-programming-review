#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * This code obtains  the status of a file (if it is present or not)
*/
int main(int argc, char **argv)
{
    unsigned int i;
    struct stat st;
    if (argc < 2)
    {
        printf("Usage: %s path to file ... \n", argv[0]);
        return 1;
    }
    i = 1;
    while(argv[1])
    {
        printf("%s:", argv[1]);
        if(stat(argv[1], &st) == 0)
        {
            printf("found\n");
        }
        else
        {
            printf("Not found");
        }
        i++;
    }
    return 0;    
}