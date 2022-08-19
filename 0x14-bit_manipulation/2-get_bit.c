#include "main.h"
/**
 * get_bit- a function that returns the value of a bit at a given index.
 * @n: the number to be converted to binary
 * @index: the index of the binary to be returned
 * Return: the bit if success or -1 if not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int number;
	int x;
	unsigned int y;

	number = n;

	if (n == 0)
	{
		if (index == 0)
		{

			return ('0');
		}

	}
	for (x = 0; n != 0; x++)
	{
		n = n >> 1;
	}
	y = x - 1;
	if (index > y)
	{
		return (-1);
	}
	for (x -= 1; x >= 0; x--)
	{
		y = x;
		if (y == index)
		{

			return (((number >> x) & 1));

		}

	}
	return (-1);
}
