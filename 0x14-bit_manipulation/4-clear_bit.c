#include "main.h"
/**
 * clear_bit-a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to be converted to binary
 * @index: the index of the binary to be converted
 * Return: 1 if success or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitNum;

	bitNum = ((sizeof(unsigned long int) * 8) - 1);
	if (index > bitNum)
	{
		return (-1);
	}

	*n = (*n & ~(1 << index));
	return (1);
}
