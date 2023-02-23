#include <stdio.h>

int main (void)
{
    int i = 133;
    char * ch = (char *) &i;
    printf("%c\n",*ch);
    printf("%p\n",ch);
    printf("%p\n",ch + 1);
    printf("%p\n",&i);
    printf("%p\n",&i + 1);
    return(0);
}