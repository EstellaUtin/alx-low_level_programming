#include "main.h"
#include <string.h>

/**
 * _memset - this is a 3 character argument to fill memory with constant byte
 * @n: number of bytes
 * @s: pointer address character
 * @b: byte
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
