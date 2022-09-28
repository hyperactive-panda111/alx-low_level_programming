#include "main.h"

/**
 * factorial - prints factorial of input integer
 * @n: input
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

