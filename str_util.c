#include "shell.h"

/**
 * is_interactive_shell - Checks if the shell is in interactive mode.
 * @info: Pointer to the info struct.
 *
 * Return: 1 if in interactive mode, 0 otherwise.
 */
int is_interactive_shell(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delimiter - Checks if a character is a delimiter.
 * @c: The character to check.
 * @delim: The delimiter string.
 *
 * Return: 1 if true, 0 otherwise.
 */
int is_delimiter(char c, char *delim)
{
	while (*delim)
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}

/**
 * is_alphabetic - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int is_alphabetic(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * string_to_integer - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer, or 0 if no numbers in the string.
 */
int string_to_integer(char *s)
{
	int i, sign = 1, output = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			output *= 10;
			output += (s[i] - '0');
		}
		else if (output != 0)
			break;
	}

	return (output * sign);
}
