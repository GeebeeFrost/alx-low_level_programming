#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * of integers
 * @head: Pointer to the nth node
 * @index: Position whose node should be returned
 *
 * Return: Pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
