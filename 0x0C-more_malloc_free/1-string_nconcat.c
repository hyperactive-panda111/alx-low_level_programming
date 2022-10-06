#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a, b, count, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		n = b;

	count = a + n;

	c = malloc(count + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		if (i < a)
			c[i] = s1[i];
		else
			c[i] = s2[i - a];

	c[i] = '\0';

	return (c);
}

