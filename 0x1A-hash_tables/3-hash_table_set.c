#include "hash_tables.h"

/**
 * hash_table_set - insert new element in the hash table
 * @ht: hash table passed
 * @value: value for array passed in main
 * @size: size for array passed in main
 * Return: 1/0 if it succeeded/failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head;
	char *dup_key, *dup_value;

	idx = key_index((const unsigned char *) key, ht->size);
	head = malloc(sizeof(ht->array[idx]));
	dup_key = strdup(key);
	dup_value = strdup(value);
	head->key = dup_key;
	head->value = dup_value;

	return (1);
}
