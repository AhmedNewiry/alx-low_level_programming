#include "search_algos.h"
/**
 * binary_search- a function that searches for a
 * value in an array of intergers using liner search.
 * @array:a pointer to the first element of the array to search in.
 * @size:is the number of elements in array
 * @value:the value to search for
 * Return:the first index where value is located or -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (!array)
	{
		return (-1);
	}
	print_arr(array, size, left);
	while (left < right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
			print_arr(array, size, left);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
			size = right + 1;
			print_arr(array, size, left);
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}





/**
 * print_arr- a funtion that prints an array of integers
 * @array: a pointer to the array to be printed
 * @size: the array size
 * @left: the array first index
 */
void print_arr(int *array, size_t size, int left)
{
	size_t i;

	printf("Searching in array:")
	for (i = left; i < size; i++)
	{
		if (array[left] != array[(size - 1)])
		{
			printf(" %d,", array[i]);
		}
		else
		{
			printf(array[i]);
		}
	}

}
