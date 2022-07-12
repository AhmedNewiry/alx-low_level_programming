#include "main.h"
/**
 * puts2- a function that prints a string
 * @str: the input pointer of a string
 */
void puts2(char *str)
{

while (*str)
{

_putchar(*str);

str += 2;

}
_putchar('\n');

}
