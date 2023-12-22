#include "hash_tables.h"


/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 * Return: The created hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t *array = NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		fprintf(stderr, "Error: cannot malloc");
		exit(EXIT_FAILURE);
	}

	array = malloc(sizeof(hash_node_t));
	if (!array)
	{
		fprintf(stderr, "Error: cannot malloc");
		exit(EXIT_FAILURE);
	}

	hash_table->size = size;
	hash_table->array = &array;

	return (hash_table);
}
