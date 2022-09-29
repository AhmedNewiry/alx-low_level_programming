#include "lists.h"

/**
 * get_dnodeint_at_index-a function that returns the nth node of a linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the wanted node
 * Return: a pointer to the required node if success or NULL if not
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t i;
       
	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
