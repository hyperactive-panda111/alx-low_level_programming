#include "main.h"

/**
 * get_bit - get value of int at given index
 * @n: input
 * @index: index to search
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}

