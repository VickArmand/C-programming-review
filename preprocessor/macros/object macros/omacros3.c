#include <stdio.h>
#define TABLESIZE BUFSIZE
#define BUFSIZE 2048
// When a preprocessor expands a macroname, the macro's expansion replaces the macro invocation
// then the expansion is examined for more macros to expand
// by expanding we mean obtaining the value of the macroname
// in this the preprocessor expands TABLESIZE first and finds out its value is BUFSIZE which is 
// another macro therefore BUFSIZE gets expanded to obtain 2048 which will also be the value of TABLESIZE
int main()
{
    int num1 = BUFSIZE;
    int num2 = TABLESIZE;
    printf("Macros BUFSIZE is %d\n",num1);
    printf("Macros TABLESIZE is %d\n",num2);
    return (0);
}