#include "search_algos.h"
/**
 * jump_search- a funtion that searches for a value in a sorted array
 * using jump search alghorithm
 * @array: pointer to the first element of the array
 * @size: the array length
 * @value: the value to be searched for
 * Return: the value index if success or -1 if
 * array is NULL or value not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump;

	if (!array)
	{
		return (-1);
	}

	jump = sqrt(size);

	while (array[jump] <= value)
	{
		printf("Value checked array[%zu] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += sqrt(size);
		if (jump > size - 1)
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%zu] and [%zu]\n", i, jump);
	for (; i < jump; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
