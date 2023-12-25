#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
* @size: The size of the hash table
* Return: The created hash table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *t = NULL;

	/**Allocates memory to the hash table**/
	t = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!t)
	{
		free(t);
		return (NULL);
	}
	t->size = size;
	/**Allocates memory to the array**/
	t->array = (hash_node_t **)calloc(t->size, sizeof(hash_node_t *));
	if (!t->array)
	{
		free(t);
		return (NULL);
	}
	/**Initializes the array and assigns NULL values to it**/
	for (; i < size; i++)
		t->array[i] = NULL;

	return (t);
}
