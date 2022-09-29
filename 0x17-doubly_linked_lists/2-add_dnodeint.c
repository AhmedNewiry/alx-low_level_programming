#include "lists.h"
/**
 * add_dnodeint-  a function that adds a node at the beginning of a list
 * @head: double pointer to the linked list headX
 * @n: the new node data
 * Return: pointer to the new node if success or NULL if nots
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(new_node));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head == NULL)
		{

			new_node->next = NULL;
		}


		*head = new_node;
		return (new_node);

	}
	return (NULL);

}
