#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds new node at the end of a linked list
 * @head: Pointer to pointer to head node
 * @str: String of new node
 *
 * Return: Pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *result;
	list_t *temp = *head;

	result = malloc(sizeof(list_t));
	if (result == NULL)
		return (NULL);
	result->str = strdup(str);
	result->len = strlen(str);
	result->next = NULL;
	if (*head == NULL)
	{
		*head = result;
		return (result);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = result;
	return (result);
}
