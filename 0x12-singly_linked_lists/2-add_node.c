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
 * add_node- a function that adds a new node at the beginning of a list_t list.
 * @head:double pointer to the first element of the list
 * @str: pointer to the string to be added
 * Return: the address of the new element of NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
if (str == NULL)
{
return (NULL);
}
list_t *new_node = malloc(sizeof(list_t));
if (new_node != NULL)
{
new_node->str = strdup(str);
new_node->len = _strlen(str);
temp = new_node;
new_node->next = *head;
*head = temp;
return (*head);
}
return (NULL);
}
