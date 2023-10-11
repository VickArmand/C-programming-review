#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
/**
 *
 *
 *
 */

int main(int argc, char *argv[], char **env)
{
	char *lineptr = NULL, *token, *txt = "cisfun$ ", *curr = argv[0];
	size_t n = 0;
	pid_t pid;
	int i, bytes_read;

	while (1)
	{
		write(1, txt, 9);
		bytes_read = getline(&lineptr, &n, stdin);
		*(lineptr + (bytes_read - 1)) = 0;
		if (bytes_read == -1)
		{
			free(lineptr);
			perror("Error");
			return (1);
		}
		token = strtok(lineptr, " ");
		i = 0;
		while (token != NULL)
		{
			argv[i] = token;
			printf("%s\n", token);
			token = strtok(NULL, " ");
			i++;
		}
		argv[i] = NULL;
		argc = i;
		printf("%d\n", argc);
		fflush(stdout);
		pid = fork();
		if (pid == -1)
		{
			perror("Error creating a child process");
			return (1);
		}
		if (execve(argv[0], argv, env) == -1)
			perror(curr);
		else
			printf("Success");
		kill(pid, SIGINT);
	}
	free(lineptr);
	return (0);
}
/**
 * _setenv - adds the variable name to the environment with the value value,
 * if name does not already exist.  If name does exist in
 * the  environment,  then  its  value is changed to value if overwrite is
 * nonzero; if overwrite is zero, then the value of name  is  not  changed
 * @name: key
 * @value: value
 * @overwrite: flag
 * Return: 0 on success -1 on error
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char *new_env;

	new_env = getenv(name);
	if (new_env)
	{
		//
	}
	else
	{
		//
	}
	return (0);
}
/**
 * _unsetenv - deletes the variable name from the environment.
 * If name does not exist in the environment, then the function succeeds,
 * and the environment is unchanged.
 * @name: key
 * Return: 0 on success -1 on error
*/
int _unsetenv(const char *name)
{
	char *exist_env;
	
	exist_env = getenv(name);

	if (exist_env)
	{
		//
	}
	return (0);
}

void handle_cd(char *curr, char *arr[])
{
	int status;

	if (_strlen(arr[2]) < 1 || arr[2] == NULL)
	{
		char *dir = getenv("HOME");
		status = chdir(dir);
		if (status == -1)
		{
			perror(curr);
		}
	}
	else if(_strcmp(arr[2], "-"))
	{
		write(1, getcwd(arr[2], 64), 64);
	}
	else if (arr[2])
	{
		status = chdir(arr[2]);
		if (status == -1)
		{
			perror(curr);
		}
	}
}
void handle_env(void)
{
		char *arr_index[] = {"USER", "LANGUAGE", "SESSION", "COMPIZ_CONFIG_PROFILE", "SHLVL",
		"HOME", "C_IS", "DESKTOP_SESSION", "LOGNAME", "TERM", "PATH", "DISPLAY"};
        char *new_env[12];
        int i, j;

		for (j = 0; j < 12; j++)
		{
				new_env[j] = getenv(arr_index[j]) ? getenv(arr_index[j]) : "null";
		}
        for (i = 0; 1 < 12; i++)
        {
				write(1, arr_index[i], _strlen(arr_index[i]));
				write(1, "=", 1);
                write(1, new_env[i], _strlen(new_env[i]));
                write(1, "\n", 1);
        }
}
void handle_env2(char **envp)
{
        char **env;

        for (env = envp; *env != NULL; env++)
        {
                write(1, *env, _strlen(*env));
                write(1, "\n", 1);
        }
}