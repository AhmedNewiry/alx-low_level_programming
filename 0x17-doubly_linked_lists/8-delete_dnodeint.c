#include "lists.h"
/**
 * delete_dnodeint_at_index- a function that deletes a node from a linked list
 * @head: double pointer to the head of the linked list
 * @index: the index of the node to be deleted
 * Return: i if success or -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp, *temp2;
	size_t i = 0;
	temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{

		*head = (*(head))->next;
		 if (temp->next)
			  {
				      (*(head))->prev = NULL;
				       }
		 free(temp);
		 return (1);
	}
	while (temp->next)
	{
		if (i == (index - 1))
		{
			temp2 = temp->next->next;
			temp2->prev = temp;
			free(temp->next);
			temp->next = temp2;
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
