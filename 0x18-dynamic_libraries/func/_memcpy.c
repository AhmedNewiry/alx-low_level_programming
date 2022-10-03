#include "main.h"
/**
 * _memcpy- function copies n bytes from memory area src to memory area dest
 * @dest: the pointer to the first element of dest array
 * @src: the pointer to the first element of src array
 * @n: the number of elements to be copied
 * Return: pointer to dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	return (dest);
}
}
