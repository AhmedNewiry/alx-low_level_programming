#include "main.h"
/**
 * print_rev- a function that prints the string in reverse
 * @s: a pointer to the first char of a string
 */
void print_rev(char *s)
{
long long int start = s;
int n = 0;
while (*s)
{
n += s;
s++;
}

while (start <= n)
{
_putchar(*s);
n--;
}
_putchar('\n');
}
