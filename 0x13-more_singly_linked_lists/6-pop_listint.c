#include "lists.h"

/**
 * pop_listint-  a function that deletes the head node of a list
 * @head : pointer to the first element of the list
 * Return: the deleted node date if success of 0 if not
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int i;
while (*head != NULL)
{
temp = *head;
i = (*(head))->n;
*head = (*(head))->next;
free(temp);
return (i);
}
return (0);
}
