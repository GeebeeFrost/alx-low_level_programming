#include "lists.h"

/**
 * free_listint - Frees a linked list of integers
 * @head: Pointer to head node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
