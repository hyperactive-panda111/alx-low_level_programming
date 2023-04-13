#include "main.h"

/**
 * _strpbrk - locates 1st occurence in string s
 * @s: 1st string
 * @accept: 2nd string
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

