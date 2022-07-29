#include "main.h"
#include <stdlib.h>
/**
 * _realloc- a function that reallocates a memory block using malloc and free.
 * @ptr: the pointer to the old array
 * @old_size: the size of the old array
 * Return: pointer to the new array or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int x = 0;
unsigned int i = 0;
char *new_ptr = ptr;
char *new_array = NULL;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0)
{
free(ptr);
free(new_ptr);
return (NULL);
}
while (new_ptr[x])
{
x++;
}
if (!ptr)
{
new_array = malloc(new_size);
return (new_array);
}
new_array = malloc(sizeof(*new_array) * new_size);
if (new_array)
{
while (i < x)
{
new_array[i] = new_ptr[i];
}
free(ptr);
free(new_ptr);
return (new_array);
}
return (NULL);
}

