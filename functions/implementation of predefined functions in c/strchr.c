#include <stdio.h>
char * _strchr(char *src, char chr)
{
    int counter = 0, ispresent = 0;
    while(src[counter] != '\0')
    {
        if(src[counter] == chr)
        {
            ispresent = 1;
            break;
        }
        counter++;
    }
    if (ispresent == 1)
        printf("Element %c is present at the string and is at position %d\n", chr, counter);
    else
        printf("Element not present in string");
}
int main(void)
{
    char *str = "Hello World";
    _strchr(str, 'x');
    return (0);
}
