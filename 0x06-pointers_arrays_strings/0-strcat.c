#include "main.h"
/**
 * _strcat- concatinates two stings
 * @dest: the pointer of the first array
 * @src: the pointer  of the second array
 * Return: the pointer to the first array after concatination
 */
char *_strcat(char *dest, char *src)
{
int index = 0;
while (*dest)
{
dest++;
}

while (*src)
{
*(dest + 1)= src[index]
index++;
}
return (dest);
}
