#include <stdio.h>
int main(void)
{
    int x=0;
    int y=0;
    printf("%d\n",++x);//update the value before printing
    printf("%d\n",y++);//print the value before updating it
    return 0;
}