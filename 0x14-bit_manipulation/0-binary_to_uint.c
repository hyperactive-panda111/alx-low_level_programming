#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to char
 * Return: converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0' || b[len] == '1'))
	{
		i <<= 1;
		num+= b[len] - '0';
		len++;
	}

	return (i);
}

