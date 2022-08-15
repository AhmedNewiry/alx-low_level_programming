#include "lists.h"
/**
 * print_listint- a function that prints all the elements of a listint_t list.
 * @h : pointer to the first element of the list
 * Return: the size of the linked list
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
i++;
}

return (i);
}
