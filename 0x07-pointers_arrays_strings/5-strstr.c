#include "main.h"

/**
 * _strstr - finds first occurence of substring in needle
 * @haystack: parameter
 * @needle: string to be searched
 * Return: pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}

