#include "main.h"
/**
 * print_sign - checks if the input is a letter:
 * Return: 1 if positve and 0  if zero and -1 if negative
 * @c:is the input 
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c == 0)
{
_putchar(0)
return (0)
}
_putchar('-');
return (-1);
}
