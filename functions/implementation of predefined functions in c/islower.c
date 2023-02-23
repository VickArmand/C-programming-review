#include <stdio.h>
int islower(int a)
{
    char i;
    int islow = 0;
    for (i = 'a'; i<='z'; i++)
    {
        if(a == i)
        {
            islow = 1;
            break;
        }

    }
    return (islow);
}
int main(void)
{
    char a = 'H';
    printf("%c: %d\n", a, islower(a));
    return (0);
}