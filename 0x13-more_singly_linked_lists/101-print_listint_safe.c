#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list safely
 * @head: Pointer to head node
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *fast = head;
	size_t s_count;
	const listint_t *slow;

	if (head == NULL)
		exit(98);
	while (fast != NULL)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		count++;
		fast = fast->next;
		slow = head;
		s_count = 0;
		while (s_count < count)
		{
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				return (count);
			}
			slow = slow->next;
			s_count++;
		}
	}
	return (count);
}
