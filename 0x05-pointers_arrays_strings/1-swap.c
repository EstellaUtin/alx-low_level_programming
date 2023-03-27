#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: Ist int
 * @b: 2nd int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
