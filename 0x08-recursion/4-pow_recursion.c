#include "main.h"

/**
 * _pow_recursion - prints value of x raised to the power of y
 * @x: number
 * @y: exponent
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

