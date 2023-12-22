#include "hash_tables.h"

/**
 * key_index - Gives the key index
 * @key: The key value
 * @size: The size of the table
 * Return: The hash location of the key
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
