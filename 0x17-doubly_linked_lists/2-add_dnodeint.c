#include "lists.h"
/**
 * add_dnodeint-  a function that adds a node at the beginning of a list
 * @h: pointer to the linked list headX
 * @n: the new node data
 * Return: pointer to the new node if success or NULL if nots
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;
	temp = *head;

	new_node = malloc(sizeof(new_node));
	if (new_node)
	{
		new_node->n = n;
		if (*head = NULL)
		{
			*head = new_node;
			new_node->next = NULL;
			new_node->prev = *head;
			return (new_node);
		}
		*head = new_node;
		new_node->next = temp;
		new_node->prev = *head;
		return (new_node);
	}
	return (NULL);

}
