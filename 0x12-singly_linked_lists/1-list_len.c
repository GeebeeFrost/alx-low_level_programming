#include "lists.h"

/**
 * list_len - Returns the number of nodes in linked list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
