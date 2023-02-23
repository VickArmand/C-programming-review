#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    // This program is responsible for forming an array of static size using parameters passed in command line arguments during runtime
    // The problem arises if we pass elements more than the array size or less  hence the need of dynamic memory allocation
    // If the elements are less there will be memory wastage while if it is more there will be overflow
    int i, j, n;
    int arr_ptr[10];
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
    return 0;
}