#define NUMBERS 1,\
2,\
3
/**
 * You may continue the definition onto multiple lines, 
 * if necessary, using backslash-newline.
 * When the macro is expanded, however, 
 * it will all come out on one line.
*/
#include <stdio.h>
int main(void)
{
    int i;
    int x[] = { NUMBERS };
    for (i = 0; i < 3; i++)
    {
        printf("%d\n",x[i]);
    }
}