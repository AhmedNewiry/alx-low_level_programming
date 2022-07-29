#include "main.h"
#include <stdlib.h>
/**
 * array_range-  creates an array of integers.
 * @min: the minum number
 * @max: the max number
 * Return: the pointer the array or NULL if er
 */
int *array_range(int min, int max)
{
int *array = NULL;
unsigned int x;
unsigned int size;

if (min > max)
{
return (NULL);
}
size = (unsigned int)max - (unsigned int)min;
size++;
array = malloc(sizeof(*array) * size);
if (array)
{
for (x = 0; x < size; x++)
{
array[x] = min;
min++;
}
}
return (array);


}

