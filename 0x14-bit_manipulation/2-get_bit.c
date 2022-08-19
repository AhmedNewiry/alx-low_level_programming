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
	unsigned int x;
	unsigned int checker;
	unsigned int check;

	number = n;

	for (x = 0; n != 0; x++)
	{
		n = n >> 1;
	}
	if (index > x - 1)
	{
		return (-1);
	}
	checker = 1 << index;
	check = number & checker;
	if (check == checker)
	{
		return (1);
	}
	return (0);
}
