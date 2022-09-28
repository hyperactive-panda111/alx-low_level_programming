#include "main.h"

/**
 * sqrt_check - computes square root using binary search
 * @a: number
 * @begin: initial number
 * @end: last number
 * Return: square root(int)
 */

int sqrt_check(int begin, int end, int a)
{
	long mid;

	if (end >= begin)
	{
		mid = begin + (end - begin) / 2;
		if (mid * mid == a)
			return (mid);

		if (mid * mid > a)
			return (sqrt_check(begin, mid - 1, a));
		if (mid * mid < a)
			return (sqrt_check(mid + 1, end, a));
	}
	return (-1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: parameter
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_check(2, n, n));
}

