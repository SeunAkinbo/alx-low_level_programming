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
	int checker = 1;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			node = ht->array[idx];
			while (node)
			{
				if (!checker)
					printf(", ");
				printf("\'%s\':\'%s\'", node->key, node->value);
				checker = 0;
				node = node->next;
			}
		}
	}
		printf("}\n");
}
