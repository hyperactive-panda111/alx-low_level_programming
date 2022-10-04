#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int a = 0, c, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	arr = malloc(sizeof(char) * (i + j + 1));

	if (arr == NULL)
	{
		free(arr);
		return (arr);
	}
	for (; a < i; a++)
		arr[a] = s1[a];
	a++;
	for (c = 0; c <= j; c++)
		arr[a] = s2[c];

	return (arr);
}

