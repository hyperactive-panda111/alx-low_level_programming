#include "main.h"

/**
 * set_bit - set the value of bit to 1 at given index
 * @n: pointer to unsigned long int
 * @index: index of bit
 * Return: set given bit to 1 
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

