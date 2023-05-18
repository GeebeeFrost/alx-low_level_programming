#include "lists.h"

/**
 * sum_dlistint - computes the sum of all integers in a doubly linked list
 * @head: pointer to the head node
 *
 * Return: sum of all the integers in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
