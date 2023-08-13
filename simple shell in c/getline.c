#include <stdio.h>
#include <stdlib.h>
/**
 * program to print $ and waits for user to enter a command
 * and prints it on the next line
*/
int main()
{
    char *lineptr = NULL;
    size_t n = 0;
    printf("$ ");
    getline(&lineptr,&n, stdin);
    // getline() reads an entire line from a stream storing the address of the buffer containing the text into lineptr
    // getline takes in a stream, buffer and the size
    // in this case the stream wil be stdin(standard input), buffer will be the lineptr's address
    // n is the size of lineptr
    // if *lineptr is set to null and n is set to 0 then getline() allocates buffer for storing the line. The buffer should be freed by user program even if getline() failed
    printf("%s\n", lineptr);
    free(lineptr);
    return (0);
}