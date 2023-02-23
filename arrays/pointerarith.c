#include <stdio.h>

int main(void)
{
    int nums[3]={1,2,3};
    int i;
    int len = sizeof(nums)/sizeof(nums[0]);
        printf("This is first element in the array is %d\n", *(nums));
    for(i =0; i<len; i++)
    {
        printf("This is element number %d whose value is %d\n",i, *(nums+i));
    }
    // like we said earlier if we use an array variable in an expression it will be converted to a pointer 
    // we then use the dereference operator on the pointer generated to obtain the values
    return(0);
}