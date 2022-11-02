#include "hash_tables.h"
/**
 * hash_table_delete- a function that deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *temp2;

	if (!ht)
	{
		return;
	}
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			temp = ht->array[index];
			while (temp)
			{
				temp2 = temp;
				temp = temp->next;
				free(temp2);
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
