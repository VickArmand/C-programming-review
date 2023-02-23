#include <stdio.h>
// The main function can only 0 or 2 arguments
int main(int argc, char **argv)
{
    int i = 0;
    printf("Number of arguments passed are %s", argc);
    for (; i< argc;i++)
    {
        printf("Argument %d is %s",i,argv[i]);
    }
    return (0);
}
// after compiling run ./a.exe test hello