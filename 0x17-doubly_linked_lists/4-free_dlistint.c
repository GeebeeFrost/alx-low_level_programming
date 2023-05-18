#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
