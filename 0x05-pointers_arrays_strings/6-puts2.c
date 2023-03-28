#include "main.h"

/**
 * puts2 - to print every other char of a string
 * @str: char type
 * Return: (0)
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
}
