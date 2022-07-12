#include "main.h"
/**
 * rev_string- reverses aby string
 * @s: the pointer to the first char of the strin
 */
void rev_string(char *s)
{
char *start;
start = s;
int n = 0;
while (*s)
{
s++;
n++;
}
0s--;
char rev[n];
int x = 0;
while (start <= s)
{
*(&rev + x) = *s;
--s;
x++;
}
int z = 0;
while (&rev >= start)
{
*(s + z) = (&rev + z);
z++;
}
}
