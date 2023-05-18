#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Address of pointer to the head node
 * @idx: Index where new node should be added
 * @n: Data of new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 0;

	if (!*h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while (temp)
	{
		if (i == idx)
			break;
		i++;
		temp = temp->next;
	}
	if (!temp)
		return (NULL);
	new->next = temp;
	new->prev = temp->prev;
	if (idx == 0)
		(*h) = new;
	else
		temp->prev->next = new;
	temp->prev = new;
	return (new);
}
