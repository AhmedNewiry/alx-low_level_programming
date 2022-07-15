#include "main.h"



char *_strncpy(char *dest, char *src, int n)
{
int index = 0;
int len = 0;

while (src[index] != '\0' && index < n)
{
*(dest + len) = *(src + index);
index++;
len++;
}
dest[len++] = '\0';
}
