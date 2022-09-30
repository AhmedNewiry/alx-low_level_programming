#include "lists.h"
/**
 * insert_dnodeint_at_index- insert a new node at a specific index
 * @h: double pointer to the head of a linked list
 * @idx: the index at which the node will be added
 * @n: the data to be added to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node, *temp2, *returned_node;

	int i = 0;
	temp = *h;

	if (idx == 0)
	{
		returned_node = add_dnodeint(h, n);
		return (returned_node);
	}

	new_node = malloc(sizeof(new_node));
	if (new_node)
	{
		new_node->n = n;

		while (temp->next)
		{
			if (i == (idx - 1))
			{
				temp2 = temp->next;
				temp->next = new_node;
				new_node->next = temp2;
				temp2->prev = new_node;
				new_node->prev = temp;
				return (new_node);
			}

			temp = temp->next;
			i++;
		}

		if (!temp->next && idx == (i + 1))
		{
			returned_node = add_dnodeint_end(h, n);
			return (returned_node);
		}

		return (NULL);

	}
