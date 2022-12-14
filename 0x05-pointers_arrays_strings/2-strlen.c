#include "main.h"

/**
 * _strlen - determines length of string
 * @s: parameter
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		++length;
		++i;
	}

	return (length);
}

