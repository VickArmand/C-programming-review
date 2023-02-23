#include <stdio.h>
/**
 * Printing all environmental variables
*/
int main(int argc, char **argv, char *env[])
{
    int i;
    for (i = 0; env[i] != NULL; i++)
    {
        printf("%s\n",env[i]);
    }
    while(*env != NULL)
    {
        printf("%s\n",*env), env++;
    }

    return 0;
}