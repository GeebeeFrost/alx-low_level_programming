#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *check, *temp;
	unsigned long int index;

	if (!ht || *key == '\n' || *value == '\n')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	check = ht->array[index];
	if (!check)
	{
		new = create_item(key, value);
		if (!new)
			return (0);
		ht->array[index] = new;
		return (1);
	}
	while (check)
	{
		if (strcmp(check->key, key) == 0)
		{
			free(check->value);
			check->value = strdup(value);
			return (1);
		}
		check = check->next;
	}
	new = create_item(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * create_item - creates a new hash table key-value pair
 * @key: key
 * @value: value
 *
 * Return: pointer to the item or NULL if it fails
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new;

	if (!key || !strlen(key) || !value)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
