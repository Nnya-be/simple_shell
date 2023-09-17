#include "shell.h"
/**
 *_strtok - Our implementation of strtok.
 *@str: The string to be tokenize
 *@delim: The delimiter
 *Return: The next token
 */
char *_strtok(char *str, const char *delim)
{
	static char *next_token;
	char *token_end;
	char *token_start;

	if (str != NULL)
		next_token = str;
	if (next_token == NULL)
		return (NULL);

	while (*token_start != '\0' && _strchr((char *)delim, *token_start) != NULL)
		token_start++;

	if (*token_start == '\0')
	{
		next_token = NULL;
		return (NULL);
	}
	while (*token_end != '\0' && _strchr((char *)delim, *token_start) != NULL)
		token_end++;

	if (*token_end != '\0')
	{
		*token_end = '\0';
		next_token = token_end + 1;
	}
	else
	{
		next_token = NULL;
	}

	return (token_start);
}
