#include <stdio.h>
int abs (int num)
{
    if (num < 0)
    {
        return (num);
    }
    else
    {
        return (-1 * num);
    }
}
int main(void)
{
    int num = -5;
    printf("%d: %d\n", num, abs(num));
    return (0);
}