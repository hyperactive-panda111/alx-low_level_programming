#include "main.h"

/**
 * _strchr - returns first occurrence of character
 * @c: character
 * @s: pointer to c string
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	return ('\0');
}

