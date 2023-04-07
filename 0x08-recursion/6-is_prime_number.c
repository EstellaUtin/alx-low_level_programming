#include "main.h"

/**
 * is_prime_number - returns an input that is a prime number
 * @n: integer type argument
 *
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return  (0);
	return (prnum_solver(n, n - 1));
}

/**
 * prnum_solver - calculates if a prime number is prime recursively
 * @n: integer type of argument
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prnum_solver(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prnum_solver(n, i - 1));
}
