#include "main.h"
/**
 * main -print all lowercase alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar(10);
}
