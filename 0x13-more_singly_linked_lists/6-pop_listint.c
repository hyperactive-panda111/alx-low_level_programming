#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of list
 * Return: data in node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *crnt;
	int i;

	if (*head == NULL)
		return (0);

	crnt = *head;

	i = crnt->n;
	tmp = crnt->next;

	free(crnt);

	*head = tmp;

	return (i);

