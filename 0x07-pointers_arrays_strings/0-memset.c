#include "main.h"
/**
 * *_memset- is afunction fills the first n bytes of s with b
 * @s: is the pointer of the first byte in the buffer
 * @b: is the char that will fill s
 * @n: is the number of bytes
 * Return: a pointer to the first byte
 */

char *_memset(char *s, char b, unsigned int n)
{
for (int i = 0; i <= n; i++)
{
s[i] = b;



}
return (s);




}
