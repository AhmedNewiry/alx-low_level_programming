#include "main.h"
/**
 * print_last_digit - pritnts the last digit of a number
 * Return: the last digit
 * @c:is the input
 */
int print_last_digit(int c)
{
c= c * -1;
int last = c % 10;
_putchar(last + '0');
return (last);
}
