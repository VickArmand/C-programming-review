#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello how are you!";
    strtok(str, " ");
    printf("%s\n", str);
    return 0;
}