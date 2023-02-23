#include <stdio.h>

char *test(void)
{
    char str[] = "Hello World";
    return (str);
}
int main(void)
{
    printf("%s\n",test());
    return (0);
}