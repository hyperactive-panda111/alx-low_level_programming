#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated memory
 * @str: string
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0, j, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	count++;

	arr = malloc(sizeof(char) * count);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j <= count; j++)
		arr[j] = str[i];

	return (arr);
}

