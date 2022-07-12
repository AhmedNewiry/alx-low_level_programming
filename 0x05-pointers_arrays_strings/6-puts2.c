#include "main.h"
/**
 * _puts- a function that prints a string
 * @str: the input pointer of a string
 */
void puts2(char *str)
{
char *ptr = str;
while (*str)
{

_putchar(*str);

str += 2;

}
_putchar('\n');

}
