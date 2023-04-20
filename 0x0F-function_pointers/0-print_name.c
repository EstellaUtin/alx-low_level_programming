#include <stdio.h>

/**
 * print_name - function to print a name
 * @name: char string
 * @f:function pointer
 * Return: name.
 */

void print_name(char *name, void (*f)(char *));
{
	f(name);
}
