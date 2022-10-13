#include "variadic_functioms.h"
#include <stdio.h>

/**
 * print_numbers - prints variadic integer parameter
 * @separator: separating character
 * @n: number of integer parameters
 * Return: void
 */

void print_numbers(char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
		printf("%d", va_arg(arg, int));

	if (separator && i < n - 1)
		printf("%s", separator);

	va_end(args);
	printf("\n");
}

