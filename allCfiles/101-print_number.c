#include "main.h"

/**
 * print_number - print integer(s)
 * @n: parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int a, b, ab;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}

	else
	{
		a = n;
	}

	b = a;
	ab = 1;

	while (b > 9)
	{
		b /= 10;
		ab *= 10;
	}

	for (; ab >= 1; ab /= 10)
		_putchar(((a / ab) % 10) + 48);
}

