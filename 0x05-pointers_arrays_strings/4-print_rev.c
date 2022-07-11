#include "main.h"
/**
 * print_rev- a function that prints the string in reverse
 * @s: a pointer to the first char of a string
 */
void print_rev(char *s)
{
char *start;
start = s;

while (*s)
{

s++;
}

while (start <= (s - 1))
{
_putchar(*s);
--s;
}
_putchar('\n');
}
