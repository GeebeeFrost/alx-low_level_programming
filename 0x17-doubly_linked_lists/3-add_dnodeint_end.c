#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Address of pointer to head node
 * @n: Data in new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	temp = new;
	return (new);
}
