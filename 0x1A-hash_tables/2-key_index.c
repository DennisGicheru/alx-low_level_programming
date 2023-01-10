#include "hash_tables.h"

/**
 * key_index - finds index of a key
 * @key: key to be searched
 * @size: size of array of hash table
 *
 * Return: Index of the key value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
