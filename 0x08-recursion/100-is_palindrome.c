#include "main.h"
#include <string.h>

/**
 * _strlen - prints the lenght of the string.
 * @s: the string to be printed
 * Return: the length of string
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
/**
 * str_checker - check if s is palindrome.
 * @s: string base memory
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 if otherwise
 */

int str_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (str_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - to check if string is a palindrome
 * @s: base string
 *
 * Return: 1 if s is a palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	return (str_checker(s, 0, _strlen(s) - 1));
}
