#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - to reallocate memory
 * @ptr: a pointer to previous memory block
 * @old_size: size of previously allocated memory block
 * @new_size: size of new memory block to allocate
 *
 * Return: pointer that allocates newsize memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *prvp = ptr;


	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
	       p[i] = prvp[i];
	free(ptr);
	return (p);
}
