#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array- creates an array of chars, and init it with c.
 * @size: array size
 * @c: the first Element
 * Return: pointer to the first element if success and NULL if not
 */


char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
ar = (char *)malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ar[i] = c;
}
if (ar)
{
return (ar);
}
return (NULL);

}
