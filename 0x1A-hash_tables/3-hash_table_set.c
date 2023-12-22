#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @key: A string
 * @value: The value associated to the key
 * Return: 1 on success, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index, i;
	
	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			strcpy(ht->array[i]->value, value);
			return (1);
		}
	}

	node = (hash_node_t *)malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);

	node->key = (char *)malloc(strlen(key) + 1);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = (char *)malloc(strlen(value) + 1);
	if (!node->value)
	{
		free(node);
		return (0);
	}

	node->next = (hash_node_t *)malloc(sizeof(hash_node_t *));

	if (!node->next)
	{
		free(node);
		return (0);
	}

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
