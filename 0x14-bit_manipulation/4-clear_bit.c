#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: input
 * @index: index at which bit should change
 * Return: changed bits of input
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}

