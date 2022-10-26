#include "lists.h"

/**
 * sum_listint -  prints sum of values in list
 * @head: head of list
 * Return: sum of values in list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

