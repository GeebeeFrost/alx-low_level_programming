#include "lists.h"

/**
 * dlistint_len - computes number of elements in a doubly linked list
 * @h: pointer to the head node
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
