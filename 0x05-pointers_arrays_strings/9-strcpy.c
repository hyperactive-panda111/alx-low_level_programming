#incude "main.h"

/**
 * strcpy - copy string
 * @src: original string
 * @dest: copied string
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a= 0;
	int length = 0;

	while (src[i] != '\0')
	{
		++length;
		++i;
	}

	for (; a <= length; a++)
		dest[a] = src[a];
}		dest[a] = '\0';

