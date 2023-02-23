#include <stdio.h>

int main(void)
{
    char str[] = "Hello, world";
    printf("%s\n",str);
    str[7]='W';
    printf("%s\n",str);
    return(0);
}