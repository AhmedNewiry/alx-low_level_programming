#include "main.h"
/**
 * rev_string- reverses aby string
 * @s: the pointer to the first char of the strin
 */
void rev_string(char *s)
{
int n = 0;
int x = 0;
int z = 0;
char *rev = 0;
char *start;
start = s;

while (*s)
{
s++;
n++;
}

s--;


while (start <= s)
{
rev = s;
--s;
x++;
}

while (z <= (n - 1))
{
*(s + z) = *(rev + z);
z++;
}
}
