#include <stdio.h>
int isupper(int a)
{
    char i;
    int isup = 0;
    for (i = 'A'; i<='Z'; i++)
    {
        if(a == i)
        {
            isup = 1;
            break;
        }

    }
    return (isup);
}
int main(void)
{
    char a = 'H';
    printf("%c: %d\n", a, isupper(a));
    return (0);
}