#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at given position
 * @head: Address of pointer to head node
 * @idx: Index of list where new node should be added
 * @n: New integer to be added
 *
 * Return: Address of new node at index idx or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	temp = (*head);
	if (idx == 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
