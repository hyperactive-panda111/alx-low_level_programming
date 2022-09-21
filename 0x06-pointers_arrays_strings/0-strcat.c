#include "main.h"

/**
 * _strcat - appends src to dest
 * @dest: destination string
 * @src: source string
 * Return: dest string
 */

char *_srtcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++i;
		++j;
	}

	i++;
	dest[i] = '\0';

	return (dest);
}

