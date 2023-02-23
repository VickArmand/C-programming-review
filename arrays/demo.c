#include <stdio.h>

int main(void)
{
    int nums[3]={1,2,3};
    int i;
    int len = sizeof(nums)/sizeof(nums[0]);
    printf("The array's memory address is %p\n", &nums);
    printf("The array's memory address is %p\n", nums);
    // when an array name is used in an expression it is converted to a pointer apart from when using the sizeof() and the address of operator (&)
    for(i =0; i<len; i++)
    {
        printf("This is element number %d whose value is %d\n",i, nums[i]);
        printf("whose memory address is %p\n", &nums[i]);
    }
    // Address of the array is similar to the address of the first element in array 
    return(0);
}