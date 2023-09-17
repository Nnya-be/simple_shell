#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 *_getenv - A function that returns the value of an environmental variable
 *@name: The name of the environment variable
 *Return: The value of the variable
 */
char *_getenv(const char *name)
{
	extern char **environ;
	char **env_cpy;
	char *env_var;
	const char *delim = "=";

	env_cpy = environ;
	env_var = strtok(*env_cpy, delim);
	while (*env_cpy != NULL)
	{
		env_var = strtok(*env_cpy, delim);
		if (strncmp(name, env_var, strlen(name)) == 0)
		{
			return (*env_cpy + strlen(name) + 1);
		}
		env_cpy++;
	}
	return (NULL);
}
