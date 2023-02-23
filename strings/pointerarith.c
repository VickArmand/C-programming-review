#include <stdio.h>

int main(void)
{
    char *str= "Hello, World";
    printf("%c\n",str[7]);
    printf("%c\n",*(str+ 7));
    return 0;
}