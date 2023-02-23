#include <stdio.h>
/**
 * @num - index starting from zero
*/
int fib(int num)
{
    int sum = 0, i = 0;
    if (num <= 1)
    {
        return (1);
    }
    else
    {
        for(;i <= num; i++)
        {
            sum += i;
        }
        return sum;
    }
}

int main(void)
{
    printf("%d\n",fib(3));
}