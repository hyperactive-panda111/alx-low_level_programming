#include "main.h"

/**
 * print_rev - print charactersin reverse order
 * @s: array of chars
 * Return: void
 */

void print_rev(char *s)
{
	
	for (int i = _strlen(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

