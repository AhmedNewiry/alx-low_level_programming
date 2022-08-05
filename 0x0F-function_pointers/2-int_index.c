#include "function_pointers.h"
/**
 * int_index- searches for an integer.
 * @array: the array to be searched
 * @size: the array length
 * @cmp:the compare function
 * Return: index if success or -1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
{
return (-1);
}
for (x = 0; x < size; x++)
{
if (cmp(array[x]))
{
return (x);
}
}
return (-1);

}
