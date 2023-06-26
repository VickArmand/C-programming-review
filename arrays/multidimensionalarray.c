#include <stdio.h>

int main(void)
{
    int arr [2][2] = {{ 1,2 },{3,4}};
    printf("%d\n",arr[1][1]);
    printf("%d\n",*(*(arr + 1)+1));
    printf("%p\n",*(arr));// Address of first array
    printf("%p\n",&arr);// Address of first array
    printf("%p\n",&arr[1]);// Address of second array
    printf("%p\n",*(arr + 1));// Address of second array
    printf("%p\n",&arr[1]+1); // adds 4 bytes
    printf("%p\n",*(arr+1)+1); // adds 8 bytes
    return (0);
}