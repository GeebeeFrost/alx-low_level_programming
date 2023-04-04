#include "lists.h"

/**
 * sum_listint - Returns the sum of all the integers in a
 * linked list of integers
 * @head: Pointer to head node
 *
 * Return: Sum of integers in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
