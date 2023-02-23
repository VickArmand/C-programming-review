#include <stdio.h>
int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
        // Increments from 65 to 90 and prints
    }
    putchar('\n');
    for (ch = '1'; ch <= '9'; ch++)
    {
        putchar(ch);
        // Increments from 49 to 57 and prints
    }
    putchar('\n');
    return 0;
}