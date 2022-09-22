#include "main.h"

/**
 * leet - encodes strings to 1337
 * @n: parameter
 * Return: pointer to dest
 */

char *leet(char *n)
{
	int i = 0;
	int y;
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int con[] = {52, 51, 48, 55, 49};

	while (n[i] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (n[i] == upper[y] || n[i] == lower[y])
			{
				n[i] = con[i];
				break;
			}
		}
		i++;
	}
	return (n);
}

