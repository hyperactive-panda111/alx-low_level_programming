#include "function_pointers.h"

/**
 * int_index - runs a search for an integer
 * @array: pointer to array
 * @size: number of elements
 * @cmp: pointer to function
 * Return: index of matching condition, if successful else
 * -1 for no match or wrong array size
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

