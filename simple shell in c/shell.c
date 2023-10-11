#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>

int _strtok(char *arr[], char *buffer);
int _strlen(char *s);
void _strcpy(char *from, char *to, int size);
/**
 * program to print $ and waits for user to enter a command
 * and prints it on the next line
*/
int main(int argc, char *argv[])
{
    char *lineptr = NULL, *new_cmd, *txt = "cisfun$ ", *curr = argv[0];
    int bytes_read;
    pid_t pid;
    size_t n = 0;

    write(1,txt,9);
    bytes_read = getline(&lineptr, &n, stdin);
    if (bytes_read == -1)
    {
        perror("Error");
        return (1);
    }
    fflush(stdin);
    printf("%d\n", bytes_read);
    new_cmd = malloc(sizeof(char) * (bytes_read - 1));
    /**(lineptr + (bytes_read - 1)) = '\0';*/
    _strcpy(lineptr, new_cmd, (bytes_read - 1));
    argc = _strtok(argv, new_cmd);
    printf("%d\n", argc);
    pid = fork();
	if (pid == -1)
	{
		perror("Error creating a child process");
		return (1);
	}
    else if (pid == 0)
    {
        if (execvp(argv[0], argv) == -1)
        {
            perror(curr);
            free(lineptr);
            free(new_cmd);
        }
    }
    return (0);
}

int _strtok(char *arr[], char *buffer)
{
    int i = 0;
    char *token;

    token = strtok(buffer, " ");
    while (token != NULL)
    {
            arr[i] = token;
            printf("%s\n", token);
            token = strtok(NULL, " ");
            i++;
    }
    arr[i] = NULL;
    return (i);
}

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);

}

/**
 * 
 * 
 * 
*/
void _strcpy(char *from, char *to, int size)
{
    int i = 0;

    while (i < size)
    {
        to[i] = from[i];
        printf("%c => %d\n", to[i], i);
        i++;
    }
}