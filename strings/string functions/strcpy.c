#include <stdio.h>
#include <string.h>
/**
 * strcpy() function - It copies the second string argument to the first string argument.
*/
int main()
{
    char s1[50], s2[50];

    strcpy(s1, "StudyTonight");     
    strcpy(s2, s1);     

    printf("%s\n", s2);
    
    return(0);
}