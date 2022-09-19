#include "main.h"

/**
 * puts_half - print second half of string
 * @str: paramater (string)
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int a;
	int n;
	int length;

	while (str[i] != '\0')
	{
		++length;
		++i;
	}
	
	n = ((length -1) / 2)
	for (a = (n + 1); a < length; a++)
		_putchar(str[a]);
	_putchar(10);
}

