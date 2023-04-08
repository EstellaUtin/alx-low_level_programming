#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two munbers
 * @argc: number of arguments
 * @argv: string vector
 *
 * Return: 1.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
