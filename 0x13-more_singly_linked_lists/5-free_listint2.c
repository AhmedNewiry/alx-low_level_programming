#include "lists.h"

/**
 * free_listint2-  a function that frees a listint_t list.
 * @head : pointer to the first element of the list
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
{
return;
}
while (*head != NULL)
{
temp = *head;
*head = (*(head))->next;
free(temp);
}

*head = NULL;

}
