#include "lists.h"


/**
 *  * free_dlistint- a function that frees a linked list
 *   * @head: a pointer to the head of a linked list
 *    */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
