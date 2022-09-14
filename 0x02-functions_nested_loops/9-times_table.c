#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: no value
 */

void times_table(void)
{
	int a, b, ab;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			ab = a * b;
			_putchar(44);
			_putchar(32);
			if (ab <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');

		