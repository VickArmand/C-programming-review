#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
    int sum = 0;
    /* Check whether 2 arguments ignoring the program name have been passed*/
    if (argc < 3)
    {
        printf("Error\n");
        return 1;
    }
    // atoi is a function to converting char to int
    sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum of the 2 arguments is %d", sum);
    return 0;
}