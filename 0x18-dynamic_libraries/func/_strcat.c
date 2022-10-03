#include "main.h"
/**
 * _strcat- concatinates two stings
 * @dest: the pointer of the first array
 * @src: the pointer  of the second array
 * Return: the pointer to the first array after concatination
 */
char *_strcat(char *dest, char *src)
{	int index = 0;
	int len = 0;
	while (dest[len] != '\0')
	{

		len++;
	}
	while (src[index] != '\0')
	{
		*(dest + len) = *(src + index);
		index++;
		len++;
	}
	*(dest + (len + 1)) = '\0';
	return (dest);
}
