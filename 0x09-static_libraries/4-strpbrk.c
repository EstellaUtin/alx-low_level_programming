#include "main.h"
#include <string.h>

/**
 * _strpbrk - function the searches for the first occurence of a string
 *
 * @s: first occurence of s
 * @accept: string
 *
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
