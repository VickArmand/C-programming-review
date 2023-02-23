#include <stdio.h>

int main(void)
{
    int nums[3];
    int i;
    nums[0]=1;
    nums[1]=2;
    nums[2]=3;
    // sizeof is used to give the amount of memory used by the array elements
    // Therefore to obtain the number of elements divide the sizeof array by the sizeof first element of the array 
    int len = sizeof(nums)/sizeof(nums[0]);
    for(i =0; i<len; i++)
    {
        printf("%d\n", nums[i]);
    }
    return(0);
}