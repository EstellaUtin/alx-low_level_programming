#include "main.h"

/**
 * _pow_recursion - the value of power
 * @x: integer type argument
 * @y: integer type argument
 *
 * Return: the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
