#include <stdio.h>
#include <stdlib.h>
// This program is responsible for forming an array of dynamic size using parameters passed in command line arguments during runtime
// Here we may pass any number of elements for array creation 
// There will be no memory wastage because the number of elements pased will be set as the aray size.
int main(int argc, char* argv[])
{
    int i, j, n, space;
    int *arr_ptr;
    space = ((argc-1) * sizeof(int));// space to be occupied by the array
    arr_ptr = malloc(space);// memory allocation
    j = 0;
    for(i = 1; i < argc; i++)
    {
        arr_ptr[j] = atoi(argv[i]);
        j++;
    }
    for(n = 0; n < argc - 1; n++)
    {
        printf("element %d is %d\n",n, arr_ptr[n]);
    }
    free(arr_ptr);
    return 0;
}