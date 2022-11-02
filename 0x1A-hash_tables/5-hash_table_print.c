#include "hash_tables.h"
/**
 * hash_table_print-a function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int comma;
	hash_node_t *temp;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			if (comma)
			{
				printf(", ");
			}
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
			comma = 1;
		}
		index++;
	}
	printf("}\n");
}
