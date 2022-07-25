#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup- copy of the string given as a parameter.
 * @str: a pointer to the first char of the stirng
 * Return: pointer to the first element if success and NULL if not
 */

char *_strdup(char *str)
{
int x;
int i;
char *new = NULL;
for (x = 0; str[x] != '\0'; i++)
{
x++;
}
if (str)
{
new = malloc(x * sizeof(char));
for (i = 0; str[i] != '\0'; i++)
{
new[i] = str[i];
}
new[i++] = '\0';
return (new);
}
return (NULL);
}
