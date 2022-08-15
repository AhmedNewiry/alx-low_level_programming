#include "lists.h"
/**
 * listint_len- a function that returns the size of a linked
 * @h : pointer to the first element of the list
 * Return: the size of the linked list
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
{
return (i);
}
while (h != NULL)
{
h = h->next;
i++;
}
return (i);

}
