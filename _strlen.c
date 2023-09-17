#include "shell.h"
/**
 *_strlen - checks for the size of a string
 *@s : the string to be passed in
 *Return: length of string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
