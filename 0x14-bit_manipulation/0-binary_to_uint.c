#include "main.h"
/**
 * binary_to_uint-a function that converts a binary number to an unsigned int
 * @b: pointer to the string containing the binary
 * Return: unsingned number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		sum = sum << 1;

		if (b[x] == '0' || b[x] == '1')
		{
			if (b[x] == '1')
			{
				sum += 1;
			}
			else
			{
				continue;
			}

		}
		else
		{
			return (0);
		}
	}
	return (sum);
}

