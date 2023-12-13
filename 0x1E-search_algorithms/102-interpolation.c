#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using interpolation search.
 * @array: A pointer to the first element of the array
 * @size: the array lenght.
 * @value: the value to search for.
 * Return: value index if present, or -1
 * if array is NULL or value not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t est_val, right, left;

	if (!array)
	{
		return (-1);
	}

	while (left <= right)
	{
		est_val = left + (((right - left) / (array[right] - array[left])) *
									(value - array[left]));
		if (est_val < size)
			printf("Value checked array[%zu] = [%d]\n", est_val, array[est_val]);
		else
		{
			printf("Value checked array[%zu] is out of range\n", est_val);
			break;
		}

		if (array[est_val] == value)
			return (est_val);
		if (array[est_val] > value)
			right = est_val - 1;
		else
			left = est_val + 1;
	}
	return (-1);
}
