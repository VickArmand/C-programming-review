#include <stdio.h>

int main(void)
{
    char *str = "Hello world";
    printf("%s\n",str);
    str[7]= 'W';// This will cause a segmentation fault after printing the initial string because string literals are read only
    printf("%s\n",str);
    return (0);
}