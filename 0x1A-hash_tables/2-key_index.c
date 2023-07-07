#include "hash_tables.h"

/**
 * key_index - Retrieves the index at which a key/value pair
 *             should be stored in an array of a hash table.
 * @key: The key to retrieve the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: This function uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

