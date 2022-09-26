#include "main.h"

/**
 * _strspn - returns number of bytes in s found in accept
 * @s: string
 * @accept: second string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}

	return (n);
}

