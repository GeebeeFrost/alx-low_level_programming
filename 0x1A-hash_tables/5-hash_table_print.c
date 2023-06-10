#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, comma = 0;
	hash_node_t *item;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			item = item->next;
			if (!comma)
				comma = 1;
		}
	}
	printf("}\n");
}
