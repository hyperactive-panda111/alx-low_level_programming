#include "main.h"

/**
 * rot13 - encodes string
 * @n: input string
 * Return: pointer to dest
 */

char *rot13(char *n)
{
	int i = 0, y;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM ";

	while (n[i] != '\0')
	{
		for (y = 0; y < 52; y++)
		{
			if (n[i] == alpha[y])
			{
				n[i] = rot13[y];
				break;
			}
		}
		i++;
	}
	return (n);
}

