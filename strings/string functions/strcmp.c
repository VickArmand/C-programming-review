#include<stdio.h>
#include<string.h>
/**
 * strlen() will return the length of the string passed to it and 
 * strcmp() will return the ASCII difference between first unmatching character of two strings.
*/
int main()
{
    int j = strlen("studytonight");
    int i=strcmp("study ", "tonight");
    printf("%d %d",j,i); 
    return(0);
}