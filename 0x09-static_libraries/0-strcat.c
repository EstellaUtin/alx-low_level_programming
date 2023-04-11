#include "main.h"

/**
 * _strcat - function with two arguments
 * @dest: 1st char argument
 * @src: 2nd char argument
 *
 * Description: concatenate two strings
 *
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

