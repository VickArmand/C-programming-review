#include <stdio.h>

char* test(void)
{
    char x = 'a';
    char *ptr= &x;
    return (ptr);
}

int main (void)
{
    printf("%c\n", * test());
    return 0;
}
// Not a good programming practice since it is prone to errors