#include <stdio.h>
int main(void)
{
    int i = 0;
    //do while loops are used to run at least once before the condition is checked
    do{
        printf("%d\n", i);
        i++;
    }while(i<10);
    return (0);
}