#include "lists.h"

/**
 * add_nodeint-a function that adds a new node at the beginning of list.
 * @head : pointer to the first element of the list
 * @n : the  integer to be added to the node
 * Return: pointer to the added node if success or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;
new_node = malloc(sizeof(listint_t));
if (new_node)
{
temp = new_node;
new_node->next = *head;
*head = temp;
new_node->n = n;
return (new_node);
}
return (NULL);
}
