#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: singly linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

