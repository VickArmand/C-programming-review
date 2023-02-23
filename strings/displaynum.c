#include <stdio.h>
int main(void)
{
    int i,j,n,rem;
    for(i=0; i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            n=i*j;
            //printf("%d ",n);
                if(n/10)
                {
                    putchar(n/10 + '0');
                    // '0' represents an integer equal to 48 in decimal and is the ASCII code for the character 0
                    // '0' + r is the same as 48 + r. When r = 0, the expression evaluates to 48 so a 0 is outputted.
                    // Basically, it's a nice way to convert decimal digits to their ASCII character representations easily. It also works with the alphabet (i.e. 'A' + 2 is the same as C)
                }
            putchar(n%10 + '0');
            putchar('\t');
        }
        putchar('\n');
    }
    return 0;
}