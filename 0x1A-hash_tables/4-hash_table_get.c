#include "hash_tables.h"
/**
 * hash_table_get-a function that retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key to generate the index
 * Return: the index corresponding value if success or NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp;

	if (!key || !*key || !ht)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
