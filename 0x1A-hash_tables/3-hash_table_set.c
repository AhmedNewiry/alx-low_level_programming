#include "hash_tables.h"
/**
 * hash_table_set-a function that adds an element to the hash table.
 * @ht: the hast table
 * @key: the key to generate index
 * @value: the value to be inserted into a specific index
 * Return: 1 if success or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp;


	if (!key)
	{
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->value = strdup(value);
	new_node->key = key;
	index = key_index(key,ht->size);
	if (ht[index] == NULL)
	{
		ht[index] = new_node;
		new_node->next = NULL;
		return (1);
	}


	temp = new_node;
	new_node->next = ht[index];
	ht[index] = temp;
	return (1);

}
