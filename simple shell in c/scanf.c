#include <stdio.h>
/**
 * program to print $ and waits for user to enter a command
 * and prints it on the next line
*/
int main()
{
    char str[80], ch;
    printf("$ ");
    scanf("%s\n",str);
    // scanf does not accept linespaces and does not flushes the line
    getchar(); // flushes the line
    ch = getchar();
    printf("%s\n", str);
    printf("%d\n", ch);
    return (0);
}