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
	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
			a = a * -1;
			s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + ((*s) - '0');
		s++;
	}
	return (result * a);
}

