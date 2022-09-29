#include "lists.h"
/**
 * dlistint_len-  a function that returns the number of elements in a linked
 * @h: pointer to the linked list head
 * Return: the length of the linked list
 */


size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);

}
