#include <stdio.h>

int main(void)
{
    int nums[3]={1,2,3};
    // when an array name is used in an expression it is converted to a pointer apart from when using the sizeof() and the address of operator (&)
    printf("The array's size is %ld\n", sizeof(&nums));
    // Returns the size of the address which is similar to size of array's first element
    printf("The array's size is %ld\n", sizeof(nums));
    // Returns the size of the whole array 
    // %ld is for long decimals/long integers
    return(0);
}