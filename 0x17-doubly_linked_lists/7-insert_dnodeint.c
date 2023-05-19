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
	if (!new || (!*h && idx != 0))
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
		if (!temp->next && i == (idx - 1))
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if (i == (idx - 1))
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
