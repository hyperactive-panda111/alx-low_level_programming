#include "main.h"

/**
 * _strncat - apprends src string to dest string
 * @dest: desination of concatenation
 * @src: source string
 * @n: number of characters transferred
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

