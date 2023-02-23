#include <stdio.h>
/**
 * Printing all environmental variables
*/
extern char **environ;
// for posix systems there is no allowance of the 3rd argument in the main() ie: (env)
int main(int argc, char **argv)
{
    int i;
    for (i = 0; environ[i] != NULL; i++)
    {
        printf("%s\n",environ[i]);
    }
    while(*environ != NULL)
    {
        printf("%s\n",*environ), environ++;
    }

    return 0;
}