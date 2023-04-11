#include "main.h"
#include <string.h>

/**
 * _strchr - locates character c in string s
 * @s: to locate in s
 * @c: character to locate
 *
 * Return: character c in string s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{

	if (*s != c)
	s++;

	else
		return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
