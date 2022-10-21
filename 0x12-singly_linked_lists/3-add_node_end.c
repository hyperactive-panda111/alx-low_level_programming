#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: head of list
 * @str: string
 * Return: node added to end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}

