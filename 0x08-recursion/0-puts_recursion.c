#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: character type argument
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
	{
		_putchar('\n')
	}
	return (0);
}
