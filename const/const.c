#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 98, i = 77;
    const int *y = &x;/* putting the const before int * makes it such that we cant change the dereferenced value but we can change the value of z*/
    int *const z = &x; /* putting the const before z makes it such that we cant change the value of z but we can change the dereferenced value */
    const int * const a = &i; /*doing this makes us not able to change the address and the dereferenced value*/
    printf("x is %d\n", x);
    printf("*y is %d\n", *y);
    printf("*z is %d\n", *z);
    y = &i;
    *z = 88;
    printf("x is %d\n", x);
    printf("*y is %d\n", *y);
    printf("*z is %d\n", *z);
    return (0);
}