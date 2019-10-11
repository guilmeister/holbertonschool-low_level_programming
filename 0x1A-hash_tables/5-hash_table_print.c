#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: table to search for key
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, y = 0;
	int counter = 0;

	if (ht == NULL)
		return;
	while (x <= ht->size)
	{
		if (ht->array[x] != 0)
			counter++;
		x++;
	}
	printf("{");
	while (y <= ht->size)
	{
		if (ht->array[y] != 0)
		{
			if (ht->array[y]->key == NULL)
				return;
			if (ht->array[y]->value == NULL)
				return;
			printf("'%s': '%s'", ht->array[y]->key, ht->array[y]->value);
			if (counter != 1)
				printf(", ");
			counter--;
		}
		y++;
	}
	printf("}");
	printf("\n");
}
