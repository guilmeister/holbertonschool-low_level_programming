#include "hash_tables.h"

/**
 * hash_table_get - get value associated with key
 * @ht: table to search for key
 * @key: string passed in main
 * Return: value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == 0)
		return (NULL);
	else
		return (ht->array[idx]->value);
}
