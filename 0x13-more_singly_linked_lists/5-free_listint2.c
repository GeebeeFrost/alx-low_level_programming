#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers
 * and sets the head to NULL
 * @head: Pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
