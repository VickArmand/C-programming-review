#include <stdio.h>
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37

int main()
{
    int num1 = BUFSIZE;
    int num2 = TABLESIZE;
    printf("Macros BUFSIZE is %d\n",num1);
    printf("Macros TABLESIZE is %d\n",num2);
    return (0);
}