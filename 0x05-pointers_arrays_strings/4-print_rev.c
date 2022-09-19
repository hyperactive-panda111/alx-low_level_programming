#include "main.h"

/**
 * print_rev - print charactersin reverse order
 * @s: array of chars
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[i] != '\0')
		++length;

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

