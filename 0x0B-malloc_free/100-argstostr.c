#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: string point
 * Return: a pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s, *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}


