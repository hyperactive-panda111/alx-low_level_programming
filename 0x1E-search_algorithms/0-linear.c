#include "search_algos.h"

/**
 * linear_search - search for value in array
 * using the linear search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: input value
 * Return: searched value or -1 if unsuccessfull
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
