#include <stdio.h>
#define BUFSIZE 2048
#define TABLESIZE BUFSIZE
#define BUFSIZE 1024
// This yields an error since BUFSIZE was already defined to 1020
// To achieve this undefine BUFSIZE the define again
int main()
{
    int num1 = BUFSIZE;
    int num2 = TABLESIZE;
    printf("Macros BUFSIZE is %d\n",num1);
    printf("Macros TABLESIZE is %d\n",num2);
    return (0);
}