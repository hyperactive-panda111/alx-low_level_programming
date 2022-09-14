#include "main.h"

/**
 * _isalpha - function to check whether input is an alphabetical character
 *
 * @c: input to check for ASCII value
 *
 * Return: 1 for success
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && 122))
		return (1);
	else
		return (0);
}
