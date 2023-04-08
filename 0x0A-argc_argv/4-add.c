#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of arguments in a function
 * @argv: string argument
 *
 * Return: 0 if no number is passed, otherwise 1
 */

int main(int argc, char *argv[])
{
	int sum;
	int i, j;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '8')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
