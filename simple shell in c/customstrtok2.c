#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
char *_strtok(char *buffer, char *delimiter)
{
        static char *end;
        char *start;
        int i;

        if (buffer == NULL)
        {
                if (end == NULL || *end == '\0')
                        return (NULL);
                start = end;
        }
        else
        {
                end = buffer;
                start = buffer;
        }
        while (end)
        {
                if (*end == '\0')
                {
                        printf("l");
                        end = NULL;
                        return (start);
                }
                i = 0;
                while (delimiter[i])
                {
                        if (*end == delimiter[i])
                        {
                                *end = '\0';
                                end = end + 1;
                                return (start);
                        }
                        i++;
                }
                end++;
        }
        return (start);
}
int main() {
    char str[] = "                     ";
    char *delim = " ";
    char* token;
    char *argv[1024];
    int i, argc;

    argc = 0;
    i = 0;
    token = _strtok(str, delim);
    while (token != NULL) {
        if (strlen(token) > 0)
        {
            argv[argc] = token;
            argc++;
        }
        token = _strtok(NULL, delim);
    }
    while(argv[i])
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return 0;
}