#include <stdio.h>

int main(void)
{
   int arr[2][2] = {{ 1,2 },{3,4}};
   int *ptr=(int *)arr;
    printf("%p\n",ptr);
    printf("%p\n",ptr + 1);
    printf("%p\n",arr);
    printf("%p\n",arr + 1); 
   return (0);
}