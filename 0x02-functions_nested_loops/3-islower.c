#include "main.h"

/**
 * _islower - run checks to verify if input is lowercase
 *
 * @c : character checked in ASCII
 * 
 * Return: 1 if successful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	else
		return (0);
}
