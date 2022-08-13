#include "lists.h"
/**
 * free_list-a function that frees a list_t list.
 * @head: pointer to the first element int the list
 */

void free_list(list_t *head)
{
int size = 0;

while (head != NULL)
{
head = head->next;
size++;
}
while (size > 0)
{
free(head->str);
free(head);
head--;
size--;
}

}
