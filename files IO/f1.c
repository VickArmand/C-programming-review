#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_to_read = fopen("mytext.txt","r");
    FILE *file_to_write = fopen("newtext.txt","w");
    // fopen is a library call and it is much faster since it uses buffering 
    if(file_to_read == NULL || file_to_write == NULL)
    {
        printf("Error\n");
        return -1;
    }
    char c;
    while((c=fgetc(file_to_read))!=EOF)
    {
        if (c == '.')
        {
            c = '!';
        }
        fputc(c,file_to_write);
    }
    fclose(file_to_read);
    fclose(file_to_write);
}