#include "main.h"
/**
 * _puts_recursion- a function that prints a string
 * @s: the pointer to the first character of the string
 * Return: 0 if success
 */


void _puts_recursion(char *s)
{
if (!*s)
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
return (0);

}
