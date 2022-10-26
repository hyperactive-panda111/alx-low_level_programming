#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: head of list
 * @idx: index position where new node is to be added
 * @n: new value
 * Return: new node if success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *crnt, *new;

	crnt = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = crnt;
		*head = new;
		return (*head);
	}

	while (idx > 1)
	{
		crnt = crnt->next;
		index--;
		if (!crnt)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = crnt->next;
	crnt->next = new;
	return (new);
}

