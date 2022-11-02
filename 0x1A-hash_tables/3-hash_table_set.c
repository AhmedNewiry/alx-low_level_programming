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
	hash_node_t *new_node, *temp, *temp2;

	if (!key || !*key || !value || !ht)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp2 = ht->array[index];
	while (temp2)
	{
		if (strcmp(key, temp2->key) == 0)
		{
			free(temp2->value);
			temp2->value = strdup(value);
			return (1);
		}
		temp2 = temp2->next;
	}
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;

	}
	else
	{
		temp = new_node;
		new_node->next = ht->array[index];
		ht->array[index] = temp;
	}

	return (1);

}
