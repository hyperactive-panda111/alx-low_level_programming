#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 * @old_size: initial value
 * @new_size: updated value
 * @ptr: pointer
 * Return: pointer with updated value for memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

