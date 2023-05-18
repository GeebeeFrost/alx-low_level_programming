#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a particular index
 * @head: Address of pointer to head node
 * @index: Index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (idx == 0)
	{
		*head = head->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (!temp->next && i == index)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		else if (i == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
