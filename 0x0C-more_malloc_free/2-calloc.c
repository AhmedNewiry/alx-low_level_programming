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
void *callocx = NULL;
if (!nmemb || !size)
{
return (NULL);
}
callocx = malloc(size * nmemb);
if (callocx)
{
return (callocx);
}
return (callocx);


}
