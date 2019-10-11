#include "hash_tables.h"

/**
 * hash_table_set - insert new element in the hash table
 * @ht: hash table passed
 * @key: value string passed in main
 * @value: value string passed in main
 * Return: 1/0 if it succeeded/failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head;
	char *dup_key, *dup_value;

	idx = key_index((const unsigned char *) key, ht->size);
	head = malloc(sizeof(ht->array[idx]));
	head->next = ht->array[idx];
	ht->array[idx] = head;
	dup_key = strdup(key);
	dup_value = strdup(value);
	head->key = dup_key;
	head->value = dup_value;
	return (1);
}
