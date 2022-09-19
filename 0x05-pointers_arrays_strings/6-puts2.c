#include "main.h"

/**
 * puts2 - prints every other character
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int a;
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		++length;
		++i;
	}

	for (a = 0; a < length; a++)
	{
		if (a % 2 != 0)
			continue;
		_putchar(str[a]);
	}
	_putchar(10);
}

