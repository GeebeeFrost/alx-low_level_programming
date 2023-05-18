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
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp || !temp->next)
		return (-1);
	if (temp->next->next)
	{
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
		return (1);
	}
	else
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
