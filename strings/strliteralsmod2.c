#include <stdio.h>
char str[]= "Hello world";
/**
 * data segment can be further classified into 
 * the two-part initialized read-only area and 
 * an initialized read-write area
 * str is a global array, so it will go in the data segment. 
 * You can also see that I am able to change the value so 
 * it has read and write permission.
*/
int main(void)
{
    printf("%s\n",str);
    str[6]= 'W';
    printf("%s\n",str);
    return 0;
}