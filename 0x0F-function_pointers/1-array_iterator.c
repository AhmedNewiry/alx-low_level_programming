#include "function_pointers.h"
/**
 * array_iterator-a function given as a parameter on each element of an array.
 * @array: the array to be iterated
 * @size:the array length
 * @action: the function that will affect the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int x;
if (array && action)
{
for (x = 0; x < size; x++)
{
action(array[x]);
}
}


}

