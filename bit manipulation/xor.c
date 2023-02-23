#include <stdio.h>
int main(void)
{
    int a = 3;
    int b = 4;
    a= a ^ b;
    a= a ^ b;
    a= a ^ b;
    printf("after xor a is %d and b is %d",a,b);
}