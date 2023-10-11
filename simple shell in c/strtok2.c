#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello how are you!";
    char *str_new[4];
    char *token;
    int i = 0, j;

    token = strtok(str, " ");
    while (token != NULL)
    {
        str_new[i] = token;
        printf("%s\n", token);
        token = strtok(NULL, " ");
        i++;
    }
    printf("\n");
    for (j = 0; j < 4; j++)
    {
        printf("%s\n", str_new[j]);
    }
    return 0;
}