#include "hash_tables.h"


/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 * Return: The created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned int i = 0;

	/**Allocates memory to the hash table**/
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		free(hash_table);
		return (NULL);
	}

	/**Allocates memory to the array**/
	hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	/**Initializes the array and assigns NULL values to it**/
	for (; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
