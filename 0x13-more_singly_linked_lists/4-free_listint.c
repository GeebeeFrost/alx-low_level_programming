#include "lists.h"

/**
 * free_listint - Frees a linked list of integers
 * @head: Pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
