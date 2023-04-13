#include "main.h"

/**
 * print_square - print n squares n times
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (a != size - 1)
			_putchar(10);
	}
	_putchar(10);
}
