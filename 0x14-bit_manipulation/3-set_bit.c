#include "main.h"
/**
 * set_bit-a function that returns the value of a bit at a given index.
 * @n: pointer to the number to be converted to binary
 * @index: the index of the binary to be converted
 * Return: 1 if success or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitNum;
	unsigned long int EditedNum;
	unsigned int binary;

	EditedNum = *n;
	bitNum = ((sizeof(unsigned long int) * 8) - 1);
	if (index > bitNum)
	{
		return (-1);
	}
	binary = ((EditedNum >> index) & 1);


	if (binary)
	{
		*n = (*n | 1 << index);
		return (binary);
	}
	return (-1);

}
