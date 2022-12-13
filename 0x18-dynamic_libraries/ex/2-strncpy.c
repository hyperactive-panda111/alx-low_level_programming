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
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

