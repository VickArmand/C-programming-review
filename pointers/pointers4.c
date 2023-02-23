#include <stdio.h>

char* test(void)
{
    char x = 'a';
    return (&x);
}

int main (void)
{
    printf("%c\n", * test());
    return 0;
}
// brings a warning since we are referencing a local variable that would be deleted after function execution