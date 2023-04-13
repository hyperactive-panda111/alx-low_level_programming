#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: input string.
 * Return: the pointer to dest
 */

char *leet(char *n)
{
	int a = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numb[] = {52, 51, 48, 55, 49};

	while (*(n + a) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(n + a) == low_letters[i] || *(n + a) == upp_letters[i])
			{
				*(n + a) = numb[i];
				break;
			}
		}
	a++;
	}
	return (n);
}

