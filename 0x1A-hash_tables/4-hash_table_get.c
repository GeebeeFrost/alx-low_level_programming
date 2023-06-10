#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to be checked
 * @key: key being looked for
 *
 * Return: value associated with the element, or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *check;
	unsigned long int index;

	if (!ht || !key || !strlen(key))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	check = ht->array[index];
	while (check)
	{
		if (strcmp(check->key, key) == 0)
			return (check->value);
		check = check->next;
	}
	return (NULL);
}
