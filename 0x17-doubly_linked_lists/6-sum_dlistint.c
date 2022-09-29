#include "lists.h"
/**
 * sum_dlistint- a function that returns the sum of data (n) of a  linked list.
 * @head: a pointer to the head of the linked list
 * Return: the sum of all data or there of in nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int res = 0;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (temp)
	{
		res += temp->n;
		temp = temp->next;
	}

	return (res);
}
