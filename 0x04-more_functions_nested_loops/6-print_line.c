#include "main.h"

/**
 * print_line - print line of n length
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
