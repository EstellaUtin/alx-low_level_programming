#include "main.h"

/**
 * _strcpy - function to copy the string of an array
 * @dest: ist char type pointer
 * @src: 2nd char type pointer
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < src[i]; i++)
		dest[i] = '\0';
	return (dest);
}
