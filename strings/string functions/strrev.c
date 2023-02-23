#include <stdio.h>
/**
 * strrev() function - It is used to reverse the given string expression.
*/
int main()
{ 
    char s1[50]; 
  
    printf("Enter your string: "); 
    gets(s1);  
    printf("\nYour reverse string is: %s",strrev(s1)); 
    return(0); 
}