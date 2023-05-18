#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head node
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
