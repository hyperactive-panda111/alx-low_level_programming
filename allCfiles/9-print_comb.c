#include <stdio.h>

/**
 * main - print numbers 0 to 1=9
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
