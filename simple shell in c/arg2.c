#include <stdio.h>
/**
 * Printing all arguments without using argc
*/
int main(int argc, char **argv)
{
    int i;
    for (i = 0; argv[i] != NULL; i++)
    {
        printf("%s\n",argv[i]);
    }
    while(*argv != NULL)
    {
        printf("%s\n",*argv), argv++;
    }

    return 0;
}