#include "search_algos.h"
/**
 * linear_search- a function that searches for a vlueو
 * in an array of intergers using liner search.
 * @array:a pointer to the first element of the array to search in.
 * @size:is the number of elements in array
 * @value:the value to search for
 * *Return:the first index where value is located or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
