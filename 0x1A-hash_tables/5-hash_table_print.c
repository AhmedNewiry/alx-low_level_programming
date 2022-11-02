#include "hash_tables.h"
/**
 * hash_table_print-a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;

	putchar('{');
	while (index < ht->size)
	{
		temp = ht->array[index];
		if (temp->key)
		{
			printf("%s: %s", temp->key, temp->value);
		}
		if (temp)
		{
			putchar(',');
		}
		index++;
	}
	putchar('}');
}
