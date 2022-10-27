#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to char
 * Return: converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len, b2;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b2 = 1; len >= 0; len--, b2 *= 2)
	{
		if (b[len] != '0' || b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += b2;
		}
	}

	return (i);
}

