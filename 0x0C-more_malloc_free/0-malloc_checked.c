#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: unsigned int type memory size.
 * Description: where memory allocation fails, terminate process with 98
 * Return: void pinter
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
