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

	new = malloc(sizeof(dlistint_t));
	if (!new || !*h)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (temp)
	{
		if (i == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
