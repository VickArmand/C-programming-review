#include <stdio.h>
/**
 * we are not able to change the array character is 
 * because it is a literal string.
 * A constant string does not only go in the data section in the initialized read-only area 
 * but all types of const global data go in that section.
 * It is not necessarily that const global and constant 
 * string go in the data section. 
 * It can be also in the text section of the program 
 * (normally the .rodata segment), as it is normally not 
 * modifiable by a program.
*/
int main(void)
{
    char *str = "Hello world";
    printf("%s\n",str);
    str[7]= 'W';// This will cause a segmentation fault after printing the initial string because string literals are read only
    printf("%s\n",str);
    return (0);
}