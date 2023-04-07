#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: interger
 *
 * Return: 0 or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
