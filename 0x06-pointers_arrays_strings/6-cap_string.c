#include "main.h"

/**
 * cap_string - capitalize each word
 * @n: parameter
 * Return: pointer to string
 */

char *cap_string(char *n)
{
	int i = 0;

	if (n[0] >= 97 && n[0] <= 122)
		n[0] -= 32;
	++i;

	while (n[i] != '\0')
	{
		if (n[i] == 9 || n[i] == 10 || n[i] == 32 || n[i] == 40 || n[i] == 41 || n[i] == 123 || n[i] == 125)
		{
			continue;
			if (n[i] >= 97 && n[i] <= 122)
				n[i] -= 32;
		}

		else if (n[i] == 33 || n[i] == 44 || n[i] == 46 || n[i] == 59 || n[i] == 63 || n[i] == 34)
		{
			i = i + 2;
			if (n[i] >= 97 && n[i] <= 122)
				n[i] -= 32;
		}
		i++;
	}

	return (n);
}

