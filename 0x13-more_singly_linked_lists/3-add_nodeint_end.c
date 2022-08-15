#include "lists.h"

/**
 * add_nodeint_end- a function that adds a new node at the end of a list.
 * @head : pointer to the first element of the list
 * @n : the  integer to be added to the node
 * Return: pointer to the added node if success or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;
new_node = malloc(sizeof(listint_t));
if (new_node)
{
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->next = NULL;
return (new_node);
}
return (NULL);

}
