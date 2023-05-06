#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: number of flips need to equal m to n
 * @m: number to set
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
