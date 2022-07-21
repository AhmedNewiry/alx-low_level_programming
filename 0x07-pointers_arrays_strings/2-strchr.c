#include "main.h"
/**
 * _strchr- a function that searches for a character
 * @c: the searched character
 * Return: the index if found or NULL if not
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (*s)
{
i++;


}
i--;
for (int x = 0; x < i; x++)
{
if (s[x] == c)
{
return (x);

}
if (s[x] != c && x == i-1)
{
return (NULL);



}


}



}
