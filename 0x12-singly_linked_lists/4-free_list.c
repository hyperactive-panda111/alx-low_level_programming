#include "lists.h"

/**
 * free_list - frees list dynamically
 * @head: singly linked list
 * Return: freed memory
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}

