#include "main.h"
#include <stdlib.h>
/**
 * _calloc- allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: the size of every element
 * Return: the pointer to the allocated memory or NULL if er
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x;
char *callocx = NULL;
if (!nmemb || !size)
{
return (NULL);
}
callocx = malloc(size * nmemb);
if (callocx)
{
for (x = 0; x < nmemb * size; x++)
{
callocx[x] = 0;
}
return (callocx);
}
return (callocx);


}
