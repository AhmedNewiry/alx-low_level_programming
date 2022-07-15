#include "main.h"
/**
 * _strncat- concatinates two stings
 * @dest: the pointer of the first array
 * @src: the pointer  of the second array
 * @n: is number of characters to be copied
 * Return: the pointer to the first array after concatination
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int len = 0;
int r = 0;
while (dest[len] != '\0')
{

len++;
}

while (src[r] != '\0')
{
r++;

}

while (src[index] != '\0' && index < n)
{
*(dest + len) = *(src + index);
index++;
len++;

}


return (dest);

}
