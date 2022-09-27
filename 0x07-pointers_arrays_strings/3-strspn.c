#include "main.h"

/**
 * _strspn - returns number of bytes in s found in accept
 * @s: string
 * @accept: second string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == ''\0')
			return (i);
		i++;
	}
	return (i);
		
}

