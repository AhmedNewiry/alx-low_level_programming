#include "lists.h"
/**
 * print_list-a function that prints all the elements of a list_t list.
 * @h: pointer to the first element in the list
 * Return: the size of the linked list
 */

size_t print_list(const list_t *h)
{
unsigned int size;
size = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%i] %s\n", h->len, h->str);
}
h = h->next;
size++;
}

return (size);
}
