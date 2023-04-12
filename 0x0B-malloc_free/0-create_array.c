#include <stdlib.h>

/**
 * create_array - create array of chare and init specific char
 * @size: size of array
 * @c: char type argument
 *
 * Return: pointer to array, NULLL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
