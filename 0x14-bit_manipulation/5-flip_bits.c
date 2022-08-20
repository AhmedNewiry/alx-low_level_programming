#include "main.h"
/**
 * flip_bits-function that returns the number\
 of different bits between 2 nums
 * @n: the first number
 * @m: the second number
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int diffCount = 0;

	diff = n ^ m;
	while (diff != 0)
	{
		if ((diff & 1) == 1)
		{
			diffCount++;
		}
		diff = diff >> 1;
	}
	return (diffCount);
}
