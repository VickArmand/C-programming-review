#include <stdio.h>
void val(ptr)
{
    int *ptrx;
	ptrx=ptr;
    printf("%d\n", *ptrx); 
}
void test(void)
{
    int x = 5;
    int *ptr= &x;
    val(ptr);
}

void bar(void)
{
    printf("Hi\n");
}
int main (void)
{
    // main() is pushed in the stack
    test();
    // Here the test() is pushed to the stack then after the address is returned the function is popped off the stack 
    // printf() is then pushed to the stack then popped
    bar();
    //bar() gets pushed to the stack then popped
    test();
    // printf() is then pushed to the stack then popped
    return 0;
    // There is garbage output because we are returning a local variable after the function has been popped off the stack
    // We should finsh using the pointer before the function returning it is popped from the stack
}