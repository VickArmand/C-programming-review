#include <stdio.h>
int main(void)
{
    int n;
    char *c;
    n = 1;
    c =(char *) &n;
    if(*c == 1)
    {
        printf("Little\n");
    }
    else
    {
        printf("Big\n");
    }
}