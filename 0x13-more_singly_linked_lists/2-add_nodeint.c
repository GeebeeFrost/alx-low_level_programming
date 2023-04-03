#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a linked list of integers
 * @head: Pointer to pointer to head node
 * @n: Integer to be added at the beginning
 *
 * Return: Address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
