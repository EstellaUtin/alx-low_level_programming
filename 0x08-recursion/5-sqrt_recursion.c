#include "main.h"

/**
 * _sqrt_recursion - function to return the natural square of a number
  * @n: interger type argument
  * Return: if no natural square -1
  */

int _sqrt_recursion(int n)
{
	return (sqrtsolver(n, 1));
}

/**
 * sqrtsolver - funtion to help solve sqrt recursion
 * @c: number to determine if square root
 * @i: integer to produce square
 * Return: square root -1 if natural square is not found
 */

int sqrtsolver(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (sqrtsolver(c, i + 1));
	else
		return (-1);
}
