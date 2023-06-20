#include <stdio.h>
/**
 * while loop demo pt 2
*/
int main(void)
{
    int i = 0, j;
    while(i < 5)
    {
        j = 0;
        //printf("\ni is %d\n",i);
        while(j < 3)
        {
            printf("2 ");
            //printf("j is %d\n",j);
            j++;
        }
        putchar('\n');
        i++;
    }
    return 0;
}