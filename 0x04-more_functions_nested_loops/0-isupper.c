#include "main.h"

/**
 * _isupper - check if input is an uppercase character
 * @c: input value
 * Return: 1(Success), else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
