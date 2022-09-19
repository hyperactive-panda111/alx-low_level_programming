#include "main.h"

/**
 * puts2 - prints every other character
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int length = 0;

	while (str[i] != '\0')
	{
		++length;
		++i;
	}

	for (i = 0; i < length; i++)
	{
		if ( i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar(10);
}

