#include <stdio.h>
/**
 *  demonstrating factorial without using recursion
*/

int factorial (int n)
{
    int i, result = 1;

    if (n == 1 || n == 0)
        return (1);
    else
    {
        i = 1;
        while(i <= n)
        {
            result *= i;
            i++;
        }
        return (result);
    }
}

int main(void)
{
    printf("%d\n",factorial(0));
    printf("%d\n",factorial(2));
    printf("%d\n",factorial(5));
}