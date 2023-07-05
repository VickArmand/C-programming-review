#include "main.h"

/**
 * print_alphabet - prints the letters of the alphabet in lowercase
 * c: char
*/

char print_alphabet (char c)
{
    if (c <= 'z')
    {
        _putchar(c);
        c++;
        return(print_alphabet(c));
    }
    _putchar('\n');
}
int main(void)
{
    print_alphabet('a');
}