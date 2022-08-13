#include "lists.h"
/**
 * _strlen- a function that finds string length
 * @s: the pointer to the string
 * Return: the string length
 */

int _strlen(const char *s)
{
int i = 0;

while (s[i])
{
i++;
}
return (i);
}
/**
 * add_node_end-a function that adds a new node at the end of a list_t list.
 * @head: double pointer to the first element of the list
 * @str: pointer to the string
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node = NULL;
list_t *temp = NULL;

if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));

if (new_node != NULL)
{
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(new_node->str);

new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next)
{
temp = temp->next;
}
temp->next = new_node;
return (new_node);
}
return (NULL);
}
