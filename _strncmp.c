#include "shell.h"
/**
 *_strncmp - a strncmp implementation.
 *@str1: The first string
 *@str2: The second string
 *@n: The size of the strings
 *Return: 0 if successful else it returns the ASCII difference btn the size
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (str1[i] != str2[i])
		{
			return ((int)(str1[i] - str2[i]));
		}
		if (str1[i] == '\0')
		{
			return (0);
		}
	}
	return (0);
}
