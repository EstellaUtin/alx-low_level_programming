#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generate random valid passwords for program
 *
 * Return: (0) random valid passwords
 */
int main(void)
{
	srand(time(0));
	int num = rand();

	printf("%i\n", num);
	return (0);
}
