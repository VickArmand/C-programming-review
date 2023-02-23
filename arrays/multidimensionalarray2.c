#include <stdio.h>

int main(void)
{
    int arr[2][2] = {
        {1,2},
        {3,4}
    };
    printf("%p\n",arr[1]);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[1]);
    printf("%p\n",*(arr+1));
    return (0);
}