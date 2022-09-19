#include "main.h"
#include <stdio.h>

/**
 * print_array - print values in array
 * @a: 1st parameter
 * @n: 2nd parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

