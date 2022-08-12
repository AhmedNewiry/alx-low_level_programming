#include "lists.h"
/**
 * list_len-a function that returns the number of elements in a list.
 * @h: pointer to the first element in the list
 * Return: the size of the linked list
 */

size_t list_len(const list_t *h)
{
size_t size = 0;
while (h != NULL)
{
h = h->next;
size++;
}

return (size);
}
