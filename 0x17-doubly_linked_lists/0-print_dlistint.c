#include "lists.h"
/**
 * print-dlistint- a function that prints all data of a linked list
 * @h: pointer to the linked list head
 * Return: the length of the linked list
 */


size_t print_dlistint(const dlistint_t *h)
{

	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;

	}

	return (i);

}
