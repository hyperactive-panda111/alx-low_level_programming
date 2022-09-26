#include "main.h"

/**
 * _memset - fills the first n bytes of pointed by s with b
 * @b: characters
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}

