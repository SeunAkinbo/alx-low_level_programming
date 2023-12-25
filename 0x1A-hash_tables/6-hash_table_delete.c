#include "hash_tables.h"

/**
 * free_node - Frees a hash node and its content
 * @node: The hash node to be freed
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - Deletes a hash table and its nodes
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free_node(current);
			current = temp;
		}
	}

	free(ht->array);
	free(ht);
}
