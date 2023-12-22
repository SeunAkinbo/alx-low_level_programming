#include "hash_tables.h"


/**
 * hash_table_get - Retrives a value associated with a key
 * @ht: The hash table
 * @key: The String item being searched for
 * Return: Value associated with key or NULL if none
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}

	return (NULL);
}
