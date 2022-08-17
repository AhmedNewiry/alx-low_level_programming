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
unsigned int y = 0;
listint_t *temp;
listint_t *temp2;
listint_t *new_node;
if (*head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(listint_t));
if (new_node != NULL)
{
new_node->n = n;
if (idx == 0)
{
temp = new_node;
new_node->next = *head;
*head = temp;
return (new_node);
}
temp = *head;
while (temp != NULL)
{
if (x == (idx - 1))
{
temp2 = temp->next;
temp->next = new_node;
y = listint_len(*head);
if (x == (y - 1))
{
new_node->next = NULL;

return (new_node);
}
new_node->next = temp2;

return (new_node);
}

temp = temp->next;
x++;
}
}
return (NULL);
}
