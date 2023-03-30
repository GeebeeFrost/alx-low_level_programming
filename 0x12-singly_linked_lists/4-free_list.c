#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to head node
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
