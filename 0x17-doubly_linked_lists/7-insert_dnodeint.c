#include "lists.h"
/**
 * insert_dnodeint_at_index- insert a new node at a specific index
 * @h: double pointer to the head of a linked list
 * @idx: the index at which the node will be added
 * @n: the data to be added to the new node
 * Return: pointer to the added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node, *temp2, *r_node;

	int i = 0;

	temp = *h;


	new_node = malloc(sizeof(new_node));
	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = *h;
			if (*h != NULL)
			{
				(*(h))->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}

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
			temp->next = new_node;
			new_node->next = NULL;
			new_node->prev = temp;
			return (new_node);
		}
		return (NULL);
	}
}
