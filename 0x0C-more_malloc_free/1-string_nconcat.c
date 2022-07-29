#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: the number of characters to be copied
 * Return: the pointer to the concatinated string or NULL if er
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x = 0;
unsigned int i = 0;
unsigned int y;
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[x])
{
x++;
}
while (s2[i])
{
i++;
}
concat = malloc(sizeof(*concat) * (i + x + 1));
if (concat)
{
for (y = 0; y < x; y++)
{
concat[y] = s1[y];
}
for (y = 0; y < n && s2[y]; y++)
{
concat[x] = s2[y];
x++;
}
concat[x++] = '\0';
return (concat);
}
free(concat);
return (NULL);
}
