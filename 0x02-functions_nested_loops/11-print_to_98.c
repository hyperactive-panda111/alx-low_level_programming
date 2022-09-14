#include "main.h"

/**
 * print_to_98 - print sequentially from n to 98
 *
 * Return: 0(Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d, ", n);
		}
	}
}
		