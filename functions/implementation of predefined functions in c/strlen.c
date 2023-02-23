#include <stdio.h>
int strlen(char *str)
{
    int counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return (counter);
}
int main(void)
{
    char *str = "Hello World";
    printf("%s: %d\n", str, strlen(str));
    return (0);
}