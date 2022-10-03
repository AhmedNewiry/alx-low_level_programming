#include "main.h"
/**
 * _strspn- returns the number of bytes of s that equal the bytes from accept
 * @s: pointer to the first sting
 * @accept: pointer to the second string
 * Return: number of bytes if found null if not
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int x;
	unsigned int r = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] != 32)
		{
			for (x = 0; accept[x]; x++)
			{
				if (s[i] == accept[x])
				{
					r++;
				}
			}
		}
		else
		{
			return (r);
		}
	}
	return (r);
}
