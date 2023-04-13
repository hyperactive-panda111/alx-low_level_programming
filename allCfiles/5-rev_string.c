#include "main.h"

/**
 * rev_string - print string in reserve order
 * @s: array of chars
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int a, b;
	int length = 0;
	char tmp, *t;

	while (s[i] != '\0')
	{
		++length;
		++i;
	}


	t = s;

	for (a = 0; a < (length - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			tmp = *(t + b);
			*(t + b) = *(t + (b - 1));
			*(t + (b - 1))  = tmp;
		}
	}
}

