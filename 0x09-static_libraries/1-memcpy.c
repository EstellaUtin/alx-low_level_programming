#include "main.h"
#include <string.h>
/**
 * _memcpy - to copy memory area
 * @n: number of bytes
 * @src: memory area
 * @dest: pointer to memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	/*copy n bytes from src to dest*/
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
