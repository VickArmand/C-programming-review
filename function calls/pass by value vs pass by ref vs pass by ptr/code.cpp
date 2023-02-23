#include <stdio.h>
/**
 * difference between pass by value and pass by reference and pass by pointer
*/
void passbyValue(int x);
void passbyRef(int &ref);
void passbyPtr(int *ptr);

int main()
{
    int x = 5;
    printf("_____Before pass by value_________\n");
    printf(" x is: %d\n", x);
    passbyValue(x);
    printf("________After pass by value________\n");
    printf(" x is: %d\n", x);
    printf("_____Before pass by pointer_________\n");
    printf(" x is: %d\n", x);
    passbyPtr(&x);
    printf("_____After pass by pointer_________\n");
    printf(" x is: %d\n", x);
    printf("_____Before pass by reference_________\n");
    printf(" x is: %d\n", x);
    passbyRef(x);
    printf("_____After pass by reference_________\n");
    printf(" x is: %d\n", x);
    return 0;
}
void passbyValue(int val)
{
    val = 10;
    printf(" val is: %d\n", val);
}
void passbyRef(int &ref)
{
    ref = 20;
    printf(" ref is: %d\n", ref);
}
void passbyPtr(int *ptr)
{
    *ptr = 30;
    printf(" *ptr is: %d\n", *ptr);
}