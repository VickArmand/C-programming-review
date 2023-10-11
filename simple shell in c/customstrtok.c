#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char* my_strtok(char* str, const char* delim) {
    static char* nextToken = NULL;
    char* tokenStart;
    bool foundDelim = false;

    if (str != NULL)
        nextToken = str;

    if (nextToken == NULL || *nextToken == '\0')
        return NULL;

    tokenStart = nextToken;

    while (*nextToken != '\0') {
        const char* delimPtr = delim;
        while (*delimPtr != '\0') {
            if (*nextToken == *delimPtr) {
                foundDelim = true;
                break;
            }
            delimPtr++;
        }
        if (foundDelim)
            break;
        nextToken++;
    }

    if (foundDelim) {
        *nextToken = '\0';
        nextToken++;
    } else {
        nextToken = NULL;
    }

    return tokenStart;
}

int main() {
    char str[] = "                     ls";
    const char delim[] = " ";
    char* token;
     char *argv[1024];
    int i, argc;

    argc = 0;
    i = 0;
    token = my_strtok(str, delim);
    while (token != NULL) {
        if (strlen(token) > 0)
        {
            argv[argc] = token;
            argc++;
        }
        token = my_strtok(NULL, delim);
    }
    while(argv[i])
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return 0;
}