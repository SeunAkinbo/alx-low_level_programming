#include "hash_tables.h"


/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 * Return: The created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned int i = 0;

	/**Allocates memory to the hash table**/
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	/**Allocates memory to the array**/
	table->array =
		(hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	/**Initializes the array and assigns NULL values to it**/
	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
