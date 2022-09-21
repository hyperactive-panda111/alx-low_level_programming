#include "main.h"

/**
 * _strcmp - comapre strings
 * @s1: parameter
 * @s2: parameter
 * Return: 0 if strings equal, else other number
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0;
	int i = 0;

	while (y == 0)
	{
		if (s1[i] == '\0' &&  s2[i] == '\0')
			break;
		y = s1[i] - s2[i];
		i++;
	}

	return (y);
}

