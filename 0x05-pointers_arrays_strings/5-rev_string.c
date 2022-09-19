#include "main.h"

/**
 * rev_string - print string in reserve order
 * @s: array of chars
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
		++length;

	int a;

	for (a = 0; a < length - 1; a++)
		_putchar(s[a]);
	_putchar(10);

	for (a = length - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar(10);
}

