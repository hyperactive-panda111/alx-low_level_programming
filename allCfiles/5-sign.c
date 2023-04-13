#include "main.h"

/**
 * print_sign - prints the sign of the input integer
 *
 * @n: testing variable;
 *
 * Return: 1 if positive, 0 if zero or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
