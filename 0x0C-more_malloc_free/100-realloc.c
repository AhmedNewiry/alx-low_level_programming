#include "main.h"
#include <stdlib.h>
/**
 * _realloc- a function that reallocates a memory block using malloc and free.
 * @ptr: the pointer to the old array
 * @old_size: the size of the old array
 * @new_size: the size of the new array
 * Return: pointer to the new array or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

unsigned int i = 0;
char *new_array = NULL;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);

return (NULL);
}


new_array = malloc(new_size);
if (new_array)
{
while (i < new_size)
{
new_array[i] = 0;
i++;
}
free(ptr);
return (new_array);
}

return (NULL);
}
