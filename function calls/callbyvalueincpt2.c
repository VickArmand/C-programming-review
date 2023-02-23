#include <stdio.h>
int something(int x)
{
    x = 500;
    printf("%d\n",x);
    return (0);
}
int main(void)
{
    int x=2;
    something(x);
    printf("%d\n",x);
    // x will not be modified since the x variable in the main() and the something() are different due to different memory addresses but the values are the same hence the value 2 is copied to the something function hence pass by value
    // the x variable in the function will be destroyed after the function has executed since it is not required anymore
    return 0;
}