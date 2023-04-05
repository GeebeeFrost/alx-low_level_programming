#include "lists.h"

/**
 * free_listint_safe - Frees a linked list that has loops
 * safely
 * @h: Address of pointer to head node
 *
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int flag;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h != NULL)
	{
		flag = *h - (*h)->next;
		if (flag > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			count++;
			*h = NULL;
		}
	}
	return (count);
}
