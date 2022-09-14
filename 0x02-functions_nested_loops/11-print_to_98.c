#include "main.h"

/**
 * print_to_98 - print sequentially from n to 98
 *
 * Return: 0(Success)
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		_putchar((n/10) + 48);
		_putchar((n%10) + 48);
		_putchar(44);
		_putchar(32);
	}
}