#include "lists.h"

/**
 * pop_listint-  a function that deletes the head node of a list
 * @head : pointer to the first element of the list
 * Return: the deleted node date if success of 0 if not
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int x = 0;
unsigned int i;
if (*head == NULL)
{
return (0);
}
while (*head != NULL && x < 1)
{
temp = (*(head))->next;
i = (*(head))->n;
free(*head);
*head = temp;
}
return (i);
}
