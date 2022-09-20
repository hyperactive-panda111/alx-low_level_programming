#include "main.h"

/**
 * _atoi - convert string to int
 * @s: parameter
 *  Return: int
 */

int _atoi(char *s)
{
	int result;
	int a;

	result = 0;
	a = 1;
	while (('-' == (*str)) || ((*str) == '+'))
	{
		if (*str == '-')
			a = a * -1;
			str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result = (result * 10) + ((*str) - '0');
		str++;
	}
	return (result * a);
}

