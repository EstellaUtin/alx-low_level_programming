#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first int
 * @b: second int
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: 1st int
 * @b: 2nd int
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: first int
 * @b: second int
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder of the division of the 2 numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
