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
	hash_node_t *new;

	if (ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	new = ht->array[idx];

	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
			break;
		new = new->next;
	}
	if (new == NULL)
		return (NULL);

	return (new->value);
}
