#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table to look into
 * @key: key to be looked for
 *
 * Return: Value associated with element or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
