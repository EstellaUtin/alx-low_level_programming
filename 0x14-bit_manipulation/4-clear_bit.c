#include "main.h"

/**
 * clear_bit - A function that sets a bit at a given index
 * @n: The number to set bit in
 * @index: the index to set bit
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
