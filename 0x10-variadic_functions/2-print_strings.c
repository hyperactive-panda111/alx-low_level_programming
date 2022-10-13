#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_string - prints strings from parameters passed
 * @separator: string
 * @n: number of strings
 * Return: void
 */

void print_string(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		(s) ? (printf("%s", s)) : (printf("(nil)"));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

