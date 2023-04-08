#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments including the first
 * @argc: number of arguments
 * @argv: string parameter
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
