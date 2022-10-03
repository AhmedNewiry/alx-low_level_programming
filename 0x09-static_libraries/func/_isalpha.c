#include "main.h"
/**
 * _isalpha - checks if the input is a letter:
 * Return: 1 if a letter and 0 if otherwise
 * @c:is the input
 */
int _isalpha(int c)

{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
