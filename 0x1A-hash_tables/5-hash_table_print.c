#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	int checker = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			if (checker == 1)
				printf(",");
			printf("\'%s\':\'%s\'", node->key, node->value);
			checker = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
