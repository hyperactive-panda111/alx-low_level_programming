#include "main.h"

/**
 * print_number - uses _putchar to print integer
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int i, x, d;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	d = x;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((x / i) % 10) + 48);
	}
}

