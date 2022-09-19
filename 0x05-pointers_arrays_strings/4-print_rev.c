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
		++i;
	}
	length -= 1;
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

