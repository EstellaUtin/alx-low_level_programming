#include "main.h"
#include <string.h>

/**
 * _strstr - a function that searches the first occurence of a susbtring
 * @haystack: string variable
 * @needle: string variable
 * Return: a pointer
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Start = haystack;
		char *occurrence = needle;

		while (*haystack && *occurrence && *haystack == *occurrence)
		{
			haystack++;
			occurrence++;
		}

		if (!*occurrence)
		{
			return (Start);
		}
		haystack = Start + 1;
	}
	return (0);
}
