#include "main.h"

/**
 * print_last_digit - print last digit of input integer
 *
 * @n: parameter for function
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar((n % 10) + 48);
		return (n % 10);
	}

	else
	{
		_putchar((n % 10) + 48)
		return (n % 10);
	}
}
