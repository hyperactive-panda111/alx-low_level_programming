#include <stdio.h>

/**
 * main - executing function.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar(',');
			putchar(' ');

			if (a == 98 && b == 99)
				continue;
		}
	putchar('\n');
	return (0);
}
