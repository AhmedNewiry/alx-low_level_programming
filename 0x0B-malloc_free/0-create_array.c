#include "main.h"
/**
 * create_array- creates an array of chars, and init it with c.
 * @size: array size
 * @c: the first Element
 * Return: pointer to the first element if success and NULL if not
 */


char *create_array(unsigned int size, char c)
{
char *ar;
ar = (char *)malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
ar[0] = c;
return (ar);

}
