#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"
/**
 *_getenv - A function that returns the value of an environmental variable
 *@name: The name of the environment variable
 *Return: The value of the variable
 */
char *_getenv(const char *name)
{
	char **env_cpy;
	char *env_var;
	const char *delim = "=";

	env_cpy = environ;
	env_var = _strtok(*env_cpy, delim);
	while (*env_cpy != NULL)
	{
		env_var = _strtok(*env_cpy, delim);
		if (_strncmp(name, env_var, _strlen(name)) == 0)
		{
			return (*env_cpy + _strlen(name) + 1);
		}
		env_cpy++;
	}
	return (NULL);
}
