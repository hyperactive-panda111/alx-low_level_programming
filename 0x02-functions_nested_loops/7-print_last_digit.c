#include "main.h"

/**
 * print_last_digit - print last digit of input integer
 *
 * @n: parameter for function
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n%10);
	}

	else 
		return(n%10);
}
