#include <stdio.h>
int isalpha (int a)
{
    char i,j;
    int issa = 0;
    for(i = 'A'; i<='Z'; i++)
    {
        for(j = 'a'; j <= 'z'; j++)
        {
            if (i == a || j == a)
            {
                issa = 1;
                break;
            }
        }
    }
    return (issa);
}
int main(void)
{
    char a = 'H';
    printf("%c: %d\n", a, isalpha(a));
    char b = '2';
    printf("%c: %d\n", b, isalpha(b));
    char c = 'c';
    printf("%c: %d\n", c, isalpha(c));
    return (0);
}