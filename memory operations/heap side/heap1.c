#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;
    int y = 20;
    int *ptr = malloc(4);
    printf("%p\n",&x);
    printf("%p\n",&y);
    //stack side operations
    printf("%p\n",ptr);
    // heap side operation
    // This shows a difference between stack side addresses and heap side addresses
}