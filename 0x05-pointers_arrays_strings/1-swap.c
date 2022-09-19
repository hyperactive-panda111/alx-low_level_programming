#include "main.h"

/**
 * swap_int - function to swap values of parameters
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

