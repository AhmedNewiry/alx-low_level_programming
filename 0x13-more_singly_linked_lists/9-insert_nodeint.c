#include "lists.h"
/**
 * insert_nodeint_at_index- a function that inserts a node at a given index.
 * @head:double pointer to the first element in the list
 * @idx: the index at which the element will be inserted
 * @n: the integer to be Entered in the new node
 * Return: pointer to the new node if success or NULL if not
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x = 0;
listint_t *temp;
listint_t *temp2;
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
temp = *head;
while (temp != NULL)
{
if (x == (idx - 1))
{
temp2 = temp;
temp = new_node;
temp2 = temp2->next;
new_node->next = temp2;
return (new_node);

}

temp = temp->next;
x++;
}
}
return (NULL);
}
