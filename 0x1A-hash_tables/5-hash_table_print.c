#include "hash_tables.h"
/**
 * hash_table_print-a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;

	printf("{");
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp->key)
		{
			printf("%s: %s", temp->key, temp->value);
			temp = temp->next;
			if (temp)
			{
				printf(",");
			}
		}
		printf(",");
		index++;
	}
	printf("}\n");
}
