#include "main.h"

/**
 * print_rev - print charactersin reverse order
 * @s: array of chars
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		++length;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

