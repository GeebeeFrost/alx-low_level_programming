#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a
 * linked list
 * @head: Address of pointer to head node
 * @index: Index position of node to be deleted
 *
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	if (index == 1)
	{
		temp1 = (*head)->next;
		(*head)->next = temp1->next;
		free(temp1);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
}
