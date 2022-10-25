#include "lists.h"

/**
 * add_nodeint_end - adds node to end
 * @head: head of list
 * @n: number of elements
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, node1;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	node1 = *head;
	while (node1->next != NULL)
		node1 = node1->next;
	node1->next = node;
	return (*head);
}

