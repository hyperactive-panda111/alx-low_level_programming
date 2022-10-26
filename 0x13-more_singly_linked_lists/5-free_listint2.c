#include "lists.h"

/**
 * free_listint2 - sets head to NULL
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, current;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp)
	}

	*head = NULL;
}

