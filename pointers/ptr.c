#include <stdio.h>
int main(void){
    int n = 98;
    int *p = &n;
    (*p)++;
    printf("%d\n", n);
    *p = 402;
    printf("%d\n", n);
    return (0);
}