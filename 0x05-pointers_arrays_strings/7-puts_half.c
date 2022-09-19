#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int a, b;
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		++length;
		++i;
	}

	b = (length / 2) - 1;

	for (a = b + 1; b < length; b++)
		_putchar(str[a]);
	_putchar(10);
}

