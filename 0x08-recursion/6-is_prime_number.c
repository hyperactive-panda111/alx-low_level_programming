#include "main.h"

/**
 * check - checks if number is prime
 * @n: input
 * @base: number to check
 * Return: 1 if prime, else 0 for other result
 */

int check(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (check(n + 1, base));
}

/**
 * is_prime_number - checks if number is prime
 * @n: input
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	return (check(2, n));
}

