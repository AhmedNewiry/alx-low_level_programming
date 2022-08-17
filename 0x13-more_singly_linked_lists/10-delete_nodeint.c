#include "lists.h"
/**
 * delete_nodeint_at_index-a function that deletes the node at index index of a list.
 * @head: pointer to the first element of the linkd list
 * @index: the position of the node to be deleted
 * Return: 1 if success or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int x = 0;

	temp2 = NULL;
	temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}


	if (index == 0)
	{
		*head = (*(head))->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (x == index)
		{
			temp2->next = temp->next;
			free(temp);

			return (1);
		}

		temp2 = temp;
		temp = temp->next;
		x++;
	}
	return (-1);

}
