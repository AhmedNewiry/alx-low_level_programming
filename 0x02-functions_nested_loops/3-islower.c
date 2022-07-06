#include "main.h"
/**
 * _islower - checks if the letter is lower case.
 * @c: is the letter input
 * Return: is 1 if lower case and is 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
