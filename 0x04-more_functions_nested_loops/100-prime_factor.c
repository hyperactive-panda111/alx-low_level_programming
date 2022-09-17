#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 (SUcess)
 */

int main(void)
{
	long int n, div, maxPrime;

	n = 612852475143;
	div = 2;
	maxPrime = 0;

	while (n != 0)
	{
		if (n != 0)
		div += 1;

		else
		{
			maxPrime = n;
			n /= div;

			if (n == 1)
			{
				printf("%ld\n", maxPrime);
				break;
			}
		}
	}
	return (0);
}

