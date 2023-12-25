#include "hash_tables.h"

/**
 * create_node - Creates a new node
 * @key: A string
 * @value: The value associated to the key
 * Return: A new node
 **/

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

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

	node->key = key;
	node->value = value;

	return (node);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: A string
 * @value: The value associated to the key
 * Return: 1 on success, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *k, *v;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	k = strdup(key);
	if (!k)
	{
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = v;
			return (1);
		}
		node = node->next;
	}

	node = create_node(k, v);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
