#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list of integers
 * and returns the head node's data
 * @head: Pointer to pointer to head node
 *
 * Return: Head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int result = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		result = (*head)->n;
		*head = temp->next;
		free(temp);
	}
	return (result);
}
