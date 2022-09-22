#include "main.h"

/**
 * cap_string - capitalize each word
 * @n: parameter
 * Return: pointer to string
 */

char *cap_string(char *n)
{
	int i = 0, y;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125,};

	if (n[i] >= 97 && n[i] <= 122)
		n[i] -= 32;
	i++;

	while (n[i] != '\0')
	{
		for (y = 0; y < 13; y++)
		{
			if (n[i] == sep[y])
			{
				if (n[i + 1] >= 97 && n[i + 1] <= 122)
		
					n[i + 1] = n[i + 1] - 32;
				break;
			}	
		}
		i++;
	}

	return (n);
}

