#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *item;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		free_hash_ls(item);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_ls - frees a linked list in a hash table
 * @head: pointer to the head node of the linked list
 */
void free_hash_ls(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
