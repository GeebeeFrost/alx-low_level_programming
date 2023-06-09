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

	new = create_item(key, value);
	if (!new)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	check = ht->array[index];
	if (!check)
		ht->array[index] = new;
	else
	{
		if (strcmp(check->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			if (!check->next)
			{
				check->next = new;
			}
			else
			{
				temp = check->next;
				check->next = new;
				new->next = temp;
			}
		}
	}
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

/**
 * key_index - generates a hash table index for a key
 * @key: key to generate index for
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
