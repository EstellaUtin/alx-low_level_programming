#include "main.h"

/**
 * get_bit - A function that gets a bit at the index
 * @n: The number to get the bit from
 * @index: the index position of bit
 * Return: the value of the bit, other -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
