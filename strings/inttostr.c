#include <stdio.h>
#define atoa(x) #x

int main (void)
{
    char *str = atoa(123456);
    printf("%s\n", str);
    return (0);
}