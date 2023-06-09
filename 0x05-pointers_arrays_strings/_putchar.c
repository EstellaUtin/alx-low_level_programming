#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: the character to be printed
 *
 * Return: 1
 * on error, -1 is returned, and ernrno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
