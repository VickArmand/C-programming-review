#include <stdio.h>

void fun(int a)
{
    printf("Value of a is %d\n",a);
}

int main(void)
{
    // fun_ptr is a pointer to the function fun()
    void (*fun_ptr)(int) = &fun;
    /**
     * The above code is equivalent to the following lines of code :
     * void (*fun_ptr)(int);
     * fun_ptr=&fun;
    */
    // Invoking fun() using the pointer and assigning parameter 10
    (*fun_ptr)(10);
    return 0;
}