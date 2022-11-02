#include "hash_tables.h"
/**
 *  * hash_table_print-a function that prints a hash table.
 *   * @ht: the hash table
 *    */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp;
	temp = ht->array[index];
	if (temp)
	{
		putchar('{');
		while (temp)
		{
			if (temp->value)
			{
				puts(temp->value);
			}
			index++;
		}
		putchar('}');
	}

}
