#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - print the sum of two diagsums
 * @a: pointer to the array
 * @size: size of memory
 *
 * return 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, 1 = 0, r = 0;
	
	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		1 += *(
