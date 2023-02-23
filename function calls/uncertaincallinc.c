#include <stdio.h>
int change(int a)
{
    a = 50;
    return a;
}
int main(void)
{
    int num = 10;
    printf("The value of num before function call is %d\n", num);
    num = change(num);
    printf("The value of num after function call is %d\n", num);
}