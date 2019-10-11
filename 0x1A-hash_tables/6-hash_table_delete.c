#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: table to search for key
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *temporary;

	if (ht == NULL)
		return;

	while (x <= ht->size)
	{
		if (ht->array[x] != NULL)
		{
			while (ht->array[x] != NULL)
			{
				temporary = ht->array[x]->next;
				free(ht->array[x]->value);
				free(ht->array[x]->key);
				free(ht->array[x]);
				ht->array[x] = temporary;
			}
			free(ht->array[x]);
		}
		x++;
	}
	free(ht->array);
	free(ht);
}
