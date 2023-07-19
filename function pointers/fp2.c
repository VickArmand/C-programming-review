
// C Program to illustrates how to declare a function
// pointer
#include <stdio.h>
int add(int a, int b) { return a + b; }
 
int main()
{
    // Assigning function address using & operator
    int (*add_ptr)(int, int) = &add;
    // or
    // Assigning
    // function address without & operator
 
    // int (*add_ptr)(int, int) = add;
 
    // Calling the function using the function pointer
    int result = add_ptr(3, 4);
    printf("Result: %d\n", result);
 
    return 0;
}