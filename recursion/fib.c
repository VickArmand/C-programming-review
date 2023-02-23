#include <stdio.h>
/**
 * @num - index starting from zero
*/
int fib(int num)
{
    if (num <= 1)
    {
        return (1);
    }
    return fib(num - 1) + fib(num - 2);
}

int main(void)
{
    printf("%d\n",fib(9));
}