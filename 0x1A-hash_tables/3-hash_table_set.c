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
	hash_node_t *new;

	if (ht == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	node_finder(ht, new, key);

	return (1);
}

/**
 * node_finder - find the value inside a linked list inside an array
 * @ht: hash table passed
 * @key: value string passed from hash table function
 * @head: node passed malloc'd from hash table function
 */

void node_finder(hash_table_t *ht, hash_node_t *head, const char *key)
{
	unsigned long int idx;
	hash_node_t *new;

	idx = key_index((const unsigned char *) key, ht->size);
	new = ht->array[idx];
	if (ht->array[idx] != NULL)
	{
		new = ht->array[idx];
		while (new != NULL)
		{
			if (strcmp(new->key, head->key) == 0)
				break;
			new = new->next;
		}
		if (new == NULL)
		{
			head->next = ht->array[idx];
			ht->array[idx] = head;
		}
		else
		{
			free(new->value);
			new->value = strdup(head->value);
			free(head->value);
			free(head->key);
			free(head);
		}
	}
	else
	{
		head->next = NULL;
		ht->array[idx] = head;
	}
}
