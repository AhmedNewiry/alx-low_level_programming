#include "main.h"
/**
 * *_strcpy- copies a string into another one
 * @dest: is the address of dest is the buffer
 * @src: is the address of the src
 */
char *_strcpy(char *dest, char *src)
{
int index;

for (index = 0; src[index] != '\0'; index++)
{
dest[index] = src[index];

}
index++;
dest[index];

return (dest);


}
