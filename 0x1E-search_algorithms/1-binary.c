#include "search_algos.h"

/**
 * binary_search - search for value in a sorted array
 * using the binary search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: searched value
 * Return: int value:search value or -1 if unsuccessful
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;
	size_t mid, i;

	if (!array)
		return (-1);

	

	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				print("%d", array[i]);
			else
				print("%d ," array[i]);
		}

		mid = (start + end) / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			start += mid;
		else
			end -= mid;
	}

	return (-1);
}
