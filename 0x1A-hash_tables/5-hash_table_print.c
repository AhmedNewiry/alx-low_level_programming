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
		if (ht->array[index])
		{
			temp = ht->array[index];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp)
				{
					printf(", ");
				}
			}
			if (index < (ht->size - 1))
			{
				printf(",");
			}
		}
		index++;
	}
	printf("}\n");
}
