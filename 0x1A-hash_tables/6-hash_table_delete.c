#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node, *temp;

	if (!ht)
		return

	for (idx = 0; idx < ht->size; idx++)
	{
		if (!ht->array[idx])
		{
			node = ht->array[idx];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
