#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
