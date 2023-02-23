#include <stdio.h>
#include <string.h>
/**
 * write a function that splits a string and returns an array of each word of the string
*/
int main()
{
    int i = 1;
    int j;
    char str[] = "Hello everyone how are you doing!";
    char *arr[7];
    arr[0] = strtok(str, " ");
    // Returns an address to "Hello"
    while((arr[i]=strtok(NULL," "))!= NULL)
    {
        printf("%s\n", arr[i]);
        i++;
    }
    for(j = 0; arr[j]!=NULL; j++)
    {
        printf("%s\n", arr[j]);
    }
    return 0;
}