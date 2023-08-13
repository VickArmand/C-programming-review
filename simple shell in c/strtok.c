#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Hello how are you!";
    char *str_new;
    int i = 0;
    int len = strlen(str);

    while (*str != '\0')
    {   
        strtok(str, " ");
        //printf("%s\n", strtok(str, " "));
        str += strlen(str);
        str_new = str;
        printf("%s\n", str_new);
    }
    return 0;
}