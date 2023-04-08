#include "main.h"
#include <stdio.h>

/**
 * main - function to print the number of arguments passed
 * @argc: number of arguments
 * @argv: string of argument in function
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
