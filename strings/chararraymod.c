#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int x = 86;
    char i = x;
    char str[] = "Hello, world";
    printf("%s\n",str);
    str[7]='W';
    printf("%s\n",str);
    write(1, &x, 4);
    write(1, "\n", 1);
    write(1, &i, 1);
    write(1, "\n", 1);
    return(0);
}