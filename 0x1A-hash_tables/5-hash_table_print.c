#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: table to search for key
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;

	printf("{");
	while (x <= ht->size)
	{
		if (ht->array[x] != 0)
		{
			printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			printf(", ");
		}
		x++;
	}
	printf("}");
	printf("\n");
}
