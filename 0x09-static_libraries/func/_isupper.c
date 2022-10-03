#include "main.h"
/**
 * _isupper- checks if the letter is capital
 * Return: 1 if capital and - if otherwise
 * @c: is the entered character
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
