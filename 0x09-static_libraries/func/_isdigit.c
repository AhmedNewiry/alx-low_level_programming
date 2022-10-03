#include "main.h"

/**
 * _isdigit- checks if it's a digit
 * Return: 1 if digit or 0 if otherwise
 * @c: is the input
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
