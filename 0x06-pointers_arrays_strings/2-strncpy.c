#include "main.h"

/**
 *_strncpy - copy string using n bytes/characters
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (src[i] != '\0')
			break;
		dest[i] = src[0];
	}
	++i;
	dest[i] = '\0';

	return (dest);
}

