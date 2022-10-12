#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints elements of an array
 * @size: size of the array
 * @array: pointer to the array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{

	for (i = 0; i < size; i++)
		(*action)(array[i]);
	}
}

