#include "main.h"
/**
 * get_bit- a function that returns the value of a bit at a given index.
 * @n: the number to be converted to binary
 * @index: the index of the binary to be returned
 * Return: the bit if success or -1 if not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitNum;
	unsigned int binary;

	bitNum = ((sizeof(unsigned long int) * 8) - 1);
	if (index > bitNum)
	{
		return (-1);
	}
	binary = ((n >> index) & 1);
	return (binary);
}
