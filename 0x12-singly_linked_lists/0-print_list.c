#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - Prints all elements of list_t list
 * @h: Pointer to head node of the linked list
 *
 * Return: Number of nodes
 */
unsigned int print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;
	int len;
	char *s;

	temp = h;
	while (temp != NULL)
	{
		len = (temp->str) ? temp->len : 0;
		s = (temp->str) ? temp->str : "(nil)";
		printf("[%d] %s\n", len, s);
		count++;
		temp = temp->next;
	}
	return (count);
}
