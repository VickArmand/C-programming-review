#include <stdio.h>
void passbyPtr(int *ptr);

int main()
{
    int x = 5;
    int *xptr = &x;
    printf("_____Before pass by pointer_________\n");
    printf(" *xptr is: %d\n", *xptr);
    printf(" x is: %d\n", x);
    passbyPtr(xptr);
    printf("_____After pass by pointer_________\n");
    printf(" *xptr is: %d\n", *xptr);
    printf(" x is: %d\n", x);
    return 0;
}
void passbyPtr(int *ptr)
{
    *ptr = 30;
}