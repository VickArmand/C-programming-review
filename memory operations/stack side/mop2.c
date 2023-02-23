#include <stdio.h>

void bar(int *cpy)
{
    printf("Hi -> %d\n", *cpy);
    // bar() is popped off the stack
}
void foo (void)
{
    int x =5;
    int *ptr = &x;
    bar(ptr);
    // bar() is pushed in the stack
}
int main(void)
{
    // main() is pushed in the stack
    int i;
    for(i=0;i<20;i++)
    {
        foo();
        // foo() is pushed in the stack
    }
    return (0);
}