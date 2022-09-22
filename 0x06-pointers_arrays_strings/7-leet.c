#include "main.h"
/**
 * leet - encodes  string to 1337
 * @n: input string.
 * Return: the pointer to dest.
 */

char *leet(char *n)
{
	int i = 0, y;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int con[] = {52, 51, 48, 55, 49};

	while (n[i] != '\0')
	{
		for (y = 0; y < 5; i++)
		{
			if (n[i] == lower[y] || n[i] == upper[y])
			{
				n[i] = con[i];
				break;
			}
		}
	i++;

	}

	return (n);
}

