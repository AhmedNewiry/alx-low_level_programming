#include "lists.h"
/**
 * get_nodeint_at_index-a function that returns the nth node of a list.
 * @head: pointer to the first element in the list
 * @index: the node index
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
while (head != NULL)
{
head = head->next;
x++;
if (x == (index))
{
return (head);
}
}
return (NULL);
}
