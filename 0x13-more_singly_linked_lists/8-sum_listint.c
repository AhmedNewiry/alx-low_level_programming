#include "lists.h"
/**
 * sum_listint- a function getting the sum of all the data (n) of a list.
 * @head: pointer to the first element in the list
 * Return: the sum if success or 0 if not
 */

int sum_listint(listint_t *head)
{
listint_t *temp;
int sum = 0;
if (head == NULL)
{
return (0);
}
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
