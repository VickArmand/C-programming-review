#include <stdio.h>

char *string(void)
{
    char *str = "Hello World";
    // string literals will be saved in the initialised data segment where it cannot be altered hence can be easily accessed
    return str;
}
int main(void)
{
    char *cpy = string();
    printf("%s\n",cpy);
    return (0);
}