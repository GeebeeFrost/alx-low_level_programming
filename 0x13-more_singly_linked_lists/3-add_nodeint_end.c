#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * of a linked list of integers
 * @head: Pointer to pointer to head node
 * @n: Integer to be added
 *
 * Return: Address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
