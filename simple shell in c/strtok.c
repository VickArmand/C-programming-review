#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[] = "Hello how are you!";
    strtok(str, " ");
    strtok(NULL, " ");
    printf("%s\n", str);
    for(i = 0; i< 19; i++)
        printf("%c ", str[i]);
    putchar(10);
    return 0;
}
