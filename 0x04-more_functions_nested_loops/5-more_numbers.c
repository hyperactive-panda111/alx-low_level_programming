#include "main.h"

/**
* more_numbers - print 0 to 14 10x
* Return: void
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 11; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
		_puthchar(10);
	}
}
